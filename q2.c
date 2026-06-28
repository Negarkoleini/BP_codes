#include <stdio.h>
#include <string.h>

void sum(char adad1[], char adad2[]) {
   int a = strlen(adad1) , b = strlen(adad2) , c = a , carry = 0;
   char adad0[1000];
    if(b > a)
    c = b;
    for(int i = 0 ; i < c ; ++i){
        int d1 = (a - 1 - i >= 0)? adad1[a - 1 - i] - '0' : 0;
        int d2 = (b - 1 - i >= 0)? adad2[b - 1 - i]  - '0': 0;
        int s = d1 + d2 + carry;
       adad0[c - 1 - i]= (s % 10) + '0';
       carry = (d1 + d2 + carry) / 10;
    }
    if(carry)
       printf("%d", carry);

    for(int i = 0 ; i < c ; ++i){
        printf("%c", adad0[i]);
    }
}
void min(char adad1[], char adad2[]) {
   int a = strlen(adad1) , b = strlen(adad2) , c = a , carry = 0;
   char adad0[1000];
    if(b > a)
    c = b;
    for(int i = 0 ; i < c ; ++i){
        int d1 = (a - 1 - i >= 0)? adad1[a - 1 - i] - '0' : 0;
        int d2 = (b - 1 - i >= 0)? adad2[b - 1 - i]  - '0': 0;
        int s = d1 - d2 - carry;
        if(s < 0){
        s = - s;
        carry = -1;}
       adad0[c - 1 - i]= (s % 10) + '0';
    }
    for(int i = 0 ; i < c ; ++i){
        printf("%c", adad0[i]);
    }
}
int main()
{
	char adad1[1001];
	char adad2[1000];
	char c;
	scanf("%s", adad1);
	scanf(" %c", &c);
	scanf("%s", adad2);
    switch(c){
        case '+':
        sum(adad1 , adad2);
        break;
        case '-':
        min(adad1 , adad2);
        break;
        case'*':
        //mul(adad1 , adad2);*/
    }


	return 0;
}