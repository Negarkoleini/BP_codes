#include <stdio.h>
#include <string.h>
void swap(char str[], int i){
    char t;
    for(int j = 0; j < i ; ++j , -- i){
        t = str[j];
        str[j] = str[i];
        str[i] = t;
        }
}

int main()
{
  int n = 0 , i = 0;
  char payam[1000];
  scanf("%s", payam);
  while(payam[n] != '\0'){
      ++n;
  }

  while(i < n){
  if(payam[n - 1] == 'x'){
      swap( payam , n - 2);
  }
  --n;
  }
  printf("%s" , payam);
  
    return 0;
}