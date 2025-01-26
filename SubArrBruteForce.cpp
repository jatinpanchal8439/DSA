#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n=5;
    int arr[5]={ -9,3,2,4,8};
     
 int maxsum = INT_MIN;
    for(int st=0;st<n;st++){
        int arrsum=0;
        for(int end=st;end<n;end++){
            arrsum+=arr[end];
            maxsum=max(arrsum, maxsum);

        }


    }
    cout<<"max subarray sum"<<maxsum <<endl;
    return 0;
}