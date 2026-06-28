#include <stdio.h>

void ramz(){
    char c;
    scanf("%c",&c);
    if(c == '\n')
    return ;
    ramz();
    printf("%c", c);
    
}

int main()
{ 
    int n;
    scanf("%d\n",&n);
    ramz();

    return 0;
}