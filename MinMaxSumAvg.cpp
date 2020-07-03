#include<iostream>
using namespace std;
int main() {
	int num, i=0, min=INT_MAX, max=INT_MIN, sum=0, avg, count=0;
	while(cin>>num) {
		
		if(num==-1) {
			break;
		}
		
		if(num<min) {
			min=num;
		}
		
		if(num>max) {
			max=num;
		}
		
		sum=sum+num;
		count++;
	}
	avg=sum/count;
	cout<<min<<endl<<max<<endl<<sum<<endl<<avg;
	return 0;
}
