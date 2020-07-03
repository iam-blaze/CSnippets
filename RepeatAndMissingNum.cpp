#include<iostream>
using namespace std;

int main() {
	int number, len, sum=0, i, N, arr[] = {1, 2, 6, 4, 3, 4};
	
	// N = 5(5+1)/2 = 15
	// arrSize = sum(arr) = 13
	// number = 15-13 = 2 
	
	len = sizeof(arr)/sizeof(arr[0]);
	//N = ((len+1)*(len+2))/2;
	for(i=0 ; i<len ; i++) {
		sum = sum ^ arr[i];
		cout<<sum<<endl;
	}
	//number = N-sum;
	//cout<<number;
	
}
