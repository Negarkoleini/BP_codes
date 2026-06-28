#include <stdio.h>

int main()
{
int saham, a, n;
int counter = 0;
scanf("%d", &n);
for(int i = 1; i <= n ; i++){
scanf("%d", &a);
if(i == 1){
    saham = a;
  }
 if(saham > a){
    counter = counter + 1;
  }

 }
if(counter < n / 2 + 1){
    printf("YES");
}else {
    printf("NO");
}

    return 0;
}