#include "stdio.h"
#define num 8
int main(int argc, char const *argv[]) {
  int ctr_i,ctr_j,loop=0;
  for(ctr_i=1;ctr_i<=num;ctr_i++){
    loop = (ctr_i<=(num/2)+1)?(ctr_i):(loop-1);
    for(ctr_j=1;ctr_j<loop;ctr_j++){
      printf("%d",ctr_j);
    }
    printf("\n");
  }
  return 0;
}
