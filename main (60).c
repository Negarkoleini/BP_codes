#include <stdio.h>
#include <math.h>
int power( int a , int b){
    int i = 0 , sum = a;
    while(i < b){
     sum = a * sum;
     ++i;
    }
    return sum;
}
int sum ( int a , int b){
    return a + b;
}
int mul (int a , int b){
    return a * b;
}
int min(int a , int b){
    return a - b;
}
float dive(float a , float b){
    return a / b;
    
}
int bagh( int a , int b){
    return a % b;
}
int j(int a , int b){
    return a | b ;
}
int k(int a , int b){
    return a ^ b;
}
int i(int a, int b){
    return a & b;
}
int mabna(int a, int b){
    int r=0,p=1;
    while(a){
        r += (a%b)*p;
        a /= b;
        p *= 10;
    }
    return r;
}

int main()
{
 int a , b , flag = 1 , answer = 0;
 float e, d;
 char c;
  while(flag)
  {
      scanf("%d %c %d",&a , &c, &b);
      if( c == '/' && b == 0)
      {
           printf("invalid operation");
           flag = 0;
          
      }
      if( c=='>'&& b < 2)
      {
        printf("invalid operation");
           flag = 0;  
      }
      if ( c == '$'){
        printf("invalid operation");
           flag = 0;   
      }
   
   
      if( flag )
      {
        switch (c) {
        case '+' :
        answer = sum (a , b);
        printf("= %d\n", answer);
       break;
       case '*':
       answer = mul (a , b);
       printf("= %d\n", answer);
       break;
       case '-':
       answer = min(a, b);
       printf("= %d\n", answer);
       break;
       case '/':
       e = (float)(a);
       d = (float)(b);
       answer = dive(e, d);
       if (answer-(int)answer > 0)
            printf("= %.2f\n", answer);
        else
            printf("= %.0f\n", answer);
       break;
       case '%':
       answer = bagh(a, b);
       printf("= %d", answer);
       break;
       case '|':
       answer = j(a, b);
       printf("= %d", answer);
       break;
       case '^':
       answer = k(a, b);
       printf("= %d", answer);
       break;
       case '&':
       answer = i(a, b);
       printf("= %d", answer);
       break;
       case '>':
       answer = mabna(a, b);
       printf("= %d", answer);
       break;
        }
       
   }
    
  
  }
    return 0;
}