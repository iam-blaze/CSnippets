#include<iostream>
using namespace std;
int main() {
    int testCase, inc_i, nos, maxSum = INT_MIN, contSum = 0, pos =0;
    //cin>>nos;

    /*for(inc_i=0 ; inc_i<nos ; inc_i++) {
        cin>>arr[inc_i];
    }*/

    //Specifying inputs
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    nos = 8;

    for(inc_i=0 ; inc_i<nos ; inc_i++) {
        contSum = contSum + arr[inc_i];

        if(contSum > maxSum) {
            maxSum = contSum;
        }

        if(contSum < 0) {
            contSum = 0;
        }
    }
    cout<<maxSum;
    testCase--;
    return 0;
}
