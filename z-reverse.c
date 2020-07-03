#include<stdio.h>
#include <stdlib.h>
#include<malloc.h>
int main()
{
    int i,j,m,n,count=0,sum=0,sum1=0;
    scanf("%d %d",&m,&n);
    int a[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    i=m-1;
    j=n-1;
    printf("%d ",a[i--][j]);
    while(i!=0 || j!=0){
            if(count==1){
                while(i!=m && j!=n){
                    printf("%d ",a[i][j]);
                   if(i-1==-1 || j+1==n) {
                        if(sum==1){
                            sum=0;
                          //  printf("\n%d %d\n",i,j);
                        }else sum=1;
                        break;
                    }
                    i--;
                    j++;
                }
                if(sum==1){
                    j--;
                }else{
                    i--;
                    sum=0;
                }
                count=0;
            }else if(count==0){
                while(i!=m && j!=n){
                    printf("%d ",a[i][j]);
                    if(i+1==m || j-1==-1){
                        if(sum1!=0){
                            sum1=0;
                        }else sum1=1;
                        break;
                    }
                    i++;
                    j--;
                }
                if(sum1==1){
                    j--;
                }else{
                    i--;
                }
            count=1;
         }
    }
    printf("%d",a[0][0]);

}
