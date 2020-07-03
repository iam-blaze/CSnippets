#include<iostream>
using namespace std;

int main() {
	string str;
	int inc_i, inc_j, flag=0, start;
	char ch;
	cin>>str;
	start=str.size()-1;
	
	for(inc_i=0 ; inc_i<start ; inc_i++) {
		if(str[inc_i]== 'a' || str[inc_i]== 'e' || str[inc_i]== 'i' || str[inc_i]== 'o' || str[inc_i]== 'u') {
			for(inc_j=start ; inc_j>inc_i ; inc_j--) {
				if(str[inc_j]== 'a' || str[inc_j]== 'e' || str[inc_j]== 'i' || str[inc_j]== 'o' || str[inc_j]== 'u') {
					ch = str[inc_i];
					str[inc_i] = str[inc_j]; 
					str[inc_j] = ch;
					flag=1;
					start = inc_j-1;
					break;

				}	
			}
		}
	}
	
	if(flag==0) {
		cout<<-1;
	}else {
		cout<<str;
	}
	
	return 0;
}
