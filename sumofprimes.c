#include <stdio.h>

void prime(int num)
{
    int i,j,count,a[10],k=0,flag=0,s=0;
    for(i=2;i<=num;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
           a[k++]=i;
           s++;
        }
    }

    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]+a[j]==num)
               flag=1;
        }
    }

    if (flag==1)
       printf("Yes\n");
    else
       printf("No\n");
}
int main() {

	int t,i,num;
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
	    scanf("%d",&num);
	    prime(num);
	}
	return 0;
}
