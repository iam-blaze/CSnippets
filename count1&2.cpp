#include<bits/stdc++.h>
using namespace std;

int main() {
	int num, count1=0, count2=0;
	while(scanf("%d,",&num)!=EOF) {
		if(num==-1) {
			break;
		}
		
		if(num==1) {
			count1++;
		}else {
			count2++;
		}
	}
	cout<<count1<<count2;
	return 0;
}
