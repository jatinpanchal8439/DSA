#include<iostream>
#include<vector>
using namespace std; 
int main (){
    class sol{
        public:
        int singleNum(vector <int>& nums){
           int  ans = 0;
           for(int val : nums){
            ans =ans^val;
          
           }
            return ans;
        }
       
    };
    return 0;
}