#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int j = 0; // Duplicate Pointer
    for(int i = 1; i < nums.size(); i++){
        if(nums[i]!=nums[j]){
            j++;
            nums[j] = nums[i];
        }
    }
    return j+1;
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums) << endl;
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}