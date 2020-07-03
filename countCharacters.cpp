#include<iostream>
using namespace std;
int main() {
	string str;
	int N, inc_i, inc_j, count=1, flag=0, toPrint=0;
	cin>>str>>N;
	
	if(N==1) {
		cout<<str;
	}else {
		for(inc_i=0 ; inc_i<str.size() ; inc_i++) {
			count=1;
			flag=0;
			for(inc_j=0 ; inc_j<str.size() ; inc_j++) {
				if(str[inc_i] == str[inc_j] && inc_i != inc_j && str[inc_i] !='*') {
					count++;
					str[inc_j] = '*';
					if(count>=N) {
						flag=1;
					}				
				}
			}
			if(flag==1) {
				toPrint++;
			}
		}
		if(toPrint == 0) {
			cout<<-1;
		}else {
			cout<<toPrint;
		}
		
	}
	
	return 0;
}

// geeksforgeeks 2 = 4
