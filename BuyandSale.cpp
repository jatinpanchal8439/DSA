#include<iostream>
#include<vector>
using namespace std;

int main(){
    class buyprob{
    public:

    int maxprofit(vector<int> &price){
        int maxprofit =0;
        int bestbuy =price[0];
        for(int i=1;i<price.size();i++){
            if(price[i] =bestbuy){  
                maxprofit=max(maxprofit,price[i]-bestbuy);


            }
            bestbuy=min(bestbuy, price[i]);
        }
        return maxprofit;

    }
    
    };

return 0;
}