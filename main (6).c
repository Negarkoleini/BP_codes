#include <stdio.h>

int main()
{
    long long a;
    int b, c, d, g, f, k;
    scanf("%lld" , &a);
    b = a / 10000;
    g = b % 10;
    c = a % 100;
    d = a % 10000 - c;
    f = c + d;
    k = f % g;
    if(a / 10000000000 != 42){
    printf("Fake");

  }else if(g == 0 || g == 1 ){
    printf("Fake");
  }
  else if(k != 0){
    printf("Fake");
  }
  else if(f == 0){
      printf("Fake");
  }
 else{
      printf("Real");
  }
  
    return 0;
}