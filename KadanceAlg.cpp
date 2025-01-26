//subarray approach optimised

#include<iostream>
#include<vector>
int main (){

   vector<int> vec=(int nums){
        int sursum =0;
        int maxsum =INT_MIN;
        for(int val: nums){
            cursum +=val;
            maxsum =max(cursum, maxsum);
            if
            (cursum <0){
                cursum =0;
            }

        }
        return maxsum;
    }
}
