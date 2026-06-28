#include <stdio.h>
#include <math.h>

/*int mabna(int paye , int mabna){
    int i = 0, sum = 0 ,  c = 0 , j = 0;
    while(paye > 0){
        i = paye % mabna;
        paye = paye / mabna;
        sum = sum + i * pow(10 , c);
        j = 0;
        ++c;
    }
    return sum;
}
int khafan(int a){
    int i = 0 , counter = 1 , t = 0, b = 0 , k = a;
    i = (int)log10(a) + 1;
    k = a;
    while(k > 0){
        b = k % 10;
        k = k / 10;
        t = b * pow(10 , i - 1) + t;
        counter = 1;
        --i;
    }
    if(t == a)
    return 1;
    else
    return 0;
}*/
int rev(int paye , int mabna){
    int digit = 0 , reverse = 0 , a = paye;
    while(paye > 0){
    digit = paye % mabna;
    paye = paye / mabna;
   reverse = reverse * mabna + digit;
    }
    if( a == reverse)
    return 1;
    else
    return 0;
}
int aval(int a){
    int i = 2 , counter = 0;
    if(a != 1){
    while(i * i <= a){
        if(a % i == 0){
            ++counter;
            break;
        }
        else{
            ++i;
        }
    }
        
    }else{
        ++counter;
    }
    if(counter)
    return 1;
    else
    return 0;
}

int main()
{  int a , b , i = 2 , counter = 0 , w = 0;
  scanf("%d %d",&a , &b);
 while(counter < a){
    if(aval(i) == 0){
      if(rev(i , b) == 1){
          ++counter;
          ++i;
      }
      else{
          ++i;
      }
        
    }
    else{
        ++i;
    }
 }
  printf("%d", i - 1);

    return 0;
}