#include <stdio.h>

int main()
{
int saham, a, n;
int counter = 0;
scanf("%d", &n);
for(int i = 1; i <= n ; i++){
scanf("%d", &a);
if(i == 1){
    a = saham;
}
 if(saham > a){
    counter++;
 }

}
if(counter < n / 2 + 1){
    printf("Yes");
}
else {
    printf("No");
}

    return 0;
}