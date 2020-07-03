#include<iostream>
#include<math.h>
using namespace std;

int main() {
	
	int N=100, inc_i, inc_j, inc_k, flag=0;
	
	for(inc_i=1 ; inc_i<N ; inc_i++) {
		//for(inc_j=1 ; inc_j<1000000 ; inc_j++) {
			flag=0;
			for(inc_k=2 ; inc_k<=sqrt(inc_i) ; inc_k++) {
				if(inc_i%inc_k==0) {
					flag=1;
					break;
				}
			}
			if(flag==0) {
				cout<<inc_i<<" ";
			}
		//}
	}
	return 0;
	
}
