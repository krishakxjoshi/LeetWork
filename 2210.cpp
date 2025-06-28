#include<iostream>
#include<vector>
using namespace std;
int main(){  
vector<int>nums;
for(int i=0;i=27;i++){
    if(i>=0 && i<5)nums.push_back(54);
    else if(i>=5 && i<22)nums.push_back(90);
    else if(i>=22 && i<26)nums.push_back(85);
    else nums.push_back(86);
}          
 int count =0;
 vector<int>vec;
 vec.push_back(nums[0]);
 for(int i=0;i<nums.size()-1;i++){
    if(nums[i]==nums[i+1]){
    int j=i+1;
 while(nums[i]==nums[j]){j++;}
    vec.push_back(nums[j]);i=j-1;
         }
   else vec.push_back(nums[i+1]);
              }
 for(int i=1;i<vec.size()-1;i++){
  if(vec[i]>vec[i-1] && vec[i]>vec[i+1] || vec[i]<vec[i-1] && vec[i]<vec[i+1])count++;
              }
    cout<<count;
            }
                