
#include <stdio.h>

int main() { 
    int h1, h2, min1, min2, sub1, sub2; char c ;
    scanf("%d%c%d" , &h1, &c, &min1);
    scanf("%d%c%d" , &h2, &c, &min2);
    sub1 = h1 + h2;
    sub2 = min1 + min2;
    
    if(sub2>=60) {
        sub1 = sub2 / 60 + sub1;
        sub2 = sub2 % 60;
        
    }
    if(sub1>=24) {
        sub1 = sub1 -24;
    }
    if (sub1 < 10 && sub2 < 10){
            printf("0%d%c0%d", sub1, c, sub2);
            
        }else if (sub1 < 10 && sub2 >= 10 ){
            printf("0%d%c%d", sub1, c, sub2);
        }else if (sub1 >= 10 && sub2 < 10 ){
        printf("%d%c0%d", sub1, c, sub2);
        }
    else{ 
            printf("%d%c%d", sub1, c, sub2);
            
        }
    return 0;
}