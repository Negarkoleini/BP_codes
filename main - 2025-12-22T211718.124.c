#include <stdio.h>
#include <string.h>

int counter(char reshte[], char zir_reshte[]) {
	int counter = 0 , j = 0;
	int  b = strlen(zir_reshte);
    int  a = strlen(reshte);
 for(int i = 0 ;i < a - b + 1 ; i++){
        if(reshte[i] == zir_reshte[0]) {
            j = 0;
			while(j < b ) {
				if(reshte[i + j] == zir_reshte[j]) {
                    ++j;
				}
				else {
					break;
				}
			}
        }
        if(j == b ){
        ++counter;
        j = 0;
    }
	}
 
	return counter;
}

int main()
{
	char reshte[1001];
	char zir_reshte[201];
	int c = 0;
	scanf("%s", reshte);
	scanf("%s", zir_reshte);
	c = counter(reshte, zir_reshte);
	printf("%d", c);



	return 0;
}