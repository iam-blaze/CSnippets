#include<iostream>
#include<limits>
using namespace std;
int main() {
	int N, inc_i, inc_j, minNum=INT_MAX;
	cin>>N;
	int arr[N];
	for(inc_i=0 ; inc_i<N ; inc_i++) {
		cin>>arr[inc_i];
	}
	
	for(inc_i=0 ; inc_i<N ; inc_i++) {
		minNum = INT_MAX;
		for(inc_j=0 ; inc_j<N ; inc_j++) {
			if(arr[inc_i] < arr[inc_j] && arr[inc_j] < minNum) {
				minNum = arr[inc_j];
			}
		}
		if(minNum == INT_MAX) {
			cout<<arr[inc_i]<<" "<<"*"<<endl;
		}else {
			cout<<arr[inc_i]<<" "<<minNum<<endl;	
		}
	}
	
	return 0;
}
