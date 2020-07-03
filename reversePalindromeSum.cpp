#include<iostream>
using namespace std;

int main() {
	int N, count=5, dummyN, rem, sum=0;
	cin>>N;
	
	//while(count--) {
		dummyN = N;
		while(dummyN) {
			rem = dummyN%10;
			sum = sum*10 + rem;
			dummyN = dummyN/10;
		}
		
	//}
	
}
