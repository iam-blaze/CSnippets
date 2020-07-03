#include<iostream>
using namespace std;
int fibo(int N);

int main() {
	//int N;
	//cin>>N;
	fibo(4);
}

int fibo(int N) {
	int result;
	if(N==1 || N==2) {
		return 1;
	}else {
		result = fibo(N-1) + fibo(N-2);
 	}
 	cout<<result<<" ";
	return result;
}
