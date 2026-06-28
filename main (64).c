#include <stdio.h>

enum{
    STATE_START,
    STATE_A,
    STATE_B,
    STATE_X,
    STATE_ACCEPT,
}state;

int runStateMachine(char c,char state);

int main()
{
    char c,state,k;
    scanf("%c",&c);
    state = runStateMachine(c,STATE_START);
    while (scanf("%c",&c))
    {
        if (c == '.')
            break;
        
        state = runStateMachine(c,state);   
        if(state == k)
            state = STATE_START;
        if (state == STATE_ACCEPT)
            break;
        k = state;

    }

    if (state == STATE_ACCEPT)
        printf("Accepted");
    else
        printf("Rejected");



}

int runStateMachine(char c,char state){
    
    
    switch (state)
    {
    case STATE_START:
        if (c == 'A'){
            return STATE_A;
        }
        else
            return STATE_START;

    case STATE_A:
        if (c == 'B')
            return STATE_B;
        else if (c == 'A')
            return STATE_A;        
        else
            return STATE_START;

    case STATE_B:
        if (c == 'X')
            return STATE_ACCEPT;
        else if (c == 'B')
            return STATE_B;
        else if (c == 'A')
            return STATE_A;
        else
            return STATE_START;
    
    default:
        return STATE_START;
    }

}