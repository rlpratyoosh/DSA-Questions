// Rotate Array, LeetCode qurstion 189
// Optimal Approach O(n) O(1)

#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int l, int r){ // A function to reverse the array, with a beginning and end pointer
    while(l<r){
        swap(nums[l], nums[r]);
        l++; r--;
    }
}

void rotate(vector<int> &nums, int k){
    if(k%nums.size() == 0) return; // Return  if k is multiple of the size of the array
    if(k>nums.size()) { // Modify k if it is greater thean the size of the array
        int q = k/nums.size();
        k = k - nums.size()*q;
    }
    reverse(nums, 0, nums.size()-1); // Reverse whole array
    reverse(nums, 0, k-1); // Reverse first k elements
    reverse(nums, k, nums.size()-1); // Reverse the remaining element
}

int main(){
    vector<int> nums = {1,4,3,6,7,2,12};
    int k = 1;
    rotate(nums, k);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}