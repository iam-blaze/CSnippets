#include<iostream>
using namespace std;

int main() {
	int N, arr[100]={0}, ins, inc_i, inc_j, temp, tempThis, flag=0;
	cin>>N>>ins;
	
	for(inc_i=0 ; inc_i<N ; inc_i++) {
		cin>>arr[inc_i];
	}
	
	for(inc_i=0 ; inc_i<N ; inc_i++) {
		if(arr[inc_i] > ins) {
			temp = arr[inc_i];
			for(inc_j=inc_i+1 ; inc_j<=N ; inc_j++) {
				tempThis = arr[inc_j];
				arr[inc_j] = temp;
				temp = tempThis;
			}
			arr[inc_i] = ins;
			flag = 1;
			break;
		}
	}
	
	if(flag == 0) {
		arr[N]=ins;
	}
	
	for(inc_i=0 ; inc_i<N+1 ; inc_i++) {
		cout<<arr[inc_i]<<" ";
	}
	
}
