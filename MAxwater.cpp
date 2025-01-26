#include<iostream>
#include<vector>
using namespace std;

int Maxwater(vector<int> & height){
      int Maxwater = 0;  //// 
      

      for(int i =0; i < height.size();i++){
        for(int j=i+1;j< height.size();j++){
            int width = j-i;
            int maxheigth = min(height[i], height[j]);
            int currwater =width *maxheigth;
            Maxwater =max(Maxwater,currwater);
        }
      }
      int main(){
        vector<int> height ={8,7,5,4,3,2};
      
  return Maxwater;
      }
      return 0;

    
}
