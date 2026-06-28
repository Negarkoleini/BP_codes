#include <stdio.h>
float shib(int x1 , int y1 , int x2, int y2){
    float shib = (y2 - y1)/(x2 - x1);
    return shib;
}
float arz(int x1 , int y1, float shib){
   float arz = y1 - (shib * x1);
    return arz;
}
void khat(int x1 , int y1 , int x2, int y2){
    float a = shib(x1 , y1 , x2, y2);
    float b = arz(x1 , y1, shib(x1 , y1 , x2, y2) );
    printf("y=%.2fx+%.2f", a , b);
    
}


int main()
{ float a , b;
    int x1 , x2 , y1 , y2;
   scanf("%d %d",&x1 , &y1);
   scanf("%d %d",&x2 , &y2);
   a = shib(x1 , y1 , x2, y2);
   b = arz(x1 , y1, a);
   printf("%.2f\n%.2f\n",a , b);
   khat(x1 , y1 , x2, y2);
    return 0;
}