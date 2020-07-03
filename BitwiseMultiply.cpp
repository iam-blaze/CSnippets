#include<iostream>
using namespace std;

int main() {
	int N, sum=0, num;
	cin>>N;

	cout<<"2 x "<<N<<" = "<<(N<<1); // for 2 tables
	cout<<endl;
	cout<<"3 x "<<N<<" = "<<((N<<1)+N); // for 3 tables
	cout<<endl;
	cout<<"4 x "<<N<<" = "<<(N<<2); // for 4 tables
	cout<<endl;
	cout<<"5 x "<<N<<" = "<<((N<<2)+N); // for 5 tables
	cout<<endl;
	cout<<"6 x "<<N<<" = "<<((N<<2)+(N<<1)); // for 6 tables
	cout<<endl;
	cout<<"7 x "<<N<<" = "<<((N<<3)-N); // for 7 tables
	
}
