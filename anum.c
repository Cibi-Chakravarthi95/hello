#include <stdio.h>
#include<string.h>
int main(void) {
	int i,j;
	char str[30],t;
     printf("\nEnter a string : ");
     scanf("%s",str);
     printf("\n\nOriginal String     : %s",str);
     for(i=0;i<strlen(str);i=i+2){
     t = str[i];
     str[i] = str[i+1];
     str[i+1] = t;
     }
     printf("\nString after swapping: %s",str);
	return 0;
}
