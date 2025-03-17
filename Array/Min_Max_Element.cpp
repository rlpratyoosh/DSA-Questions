#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> minmax(vector<int>& nums){
    int minnum = nums[0], maxnum=nums[0];
    for(int i = 1; i < nums.size(); i++){
        minnum = min(minnum, nums[i]);
        maxnum = max(maxnum, nums[i]);
    }
    return {minnum, maxnum};
}

int main(){
    vector<int> nums = {2,4,5,12,17,1,18,6};
    vector<int> result = minmax(nums);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}