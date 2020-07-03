#include "stdio.h"
#include <malloc.h>
#include<string.h>
int main(int argc, char const *argv[]) {
  char str[100];
  int len=0,i=0,j;
  while(scanf("%c",&str[i++])!=EOF)
    len=i;
    for(i=0;i<len;i++){
      for(j=0;j<len;j++){
        if(i==j || j==len-i-1)
        printf("%c ",str[i]);
        else printf(" ");
      }
      printf("\n");
    }
  return 0;
}
