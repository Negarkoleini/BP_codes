#include <stdio.h>

int bmm(int a,int b);

int main()
{
    int a,b;

    scanf("%d",&a);

    while (scanf("%d",&b) && b != 0)
    {
        a=bmm(a,b);
    }
    
    printf("%d",a);
    
}

int bmm(int a,int b){
    int r;
    if (a<b){
        int k = a;
        a = b;
        b = k;
    }
    while (b != 0){
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}