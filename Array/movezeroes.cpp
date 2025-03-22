// Leetcode 283: Move Zeroes
// Optimal Approach

#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums){
    int i = 0, j = 0; // Two Pointers, i for iterating through whole array and j for pointing to non-zero values
    while(j<nums.size()){
        if(nums[j]!=0){
            nums[i] = nums[j]; // Overwrite the value with non-zero value
            i++;
            j++;
        }
        else j++;
    }
    while(i<nums.size()){
        nums[i] = 0; // Change the left values to 0
        i++;
    }
}

int main(){
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}