// Rotate Array, LeetCode qurstion 189
// Non-optimal Approach O(n*k)

#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums){ // Rotate the array once
    int n = nums.size();
    int temp = nums[n-1];
    for(int i = n-1; i > 0; i--){
        nums[i] = nums[i-1];
    }
    nums[0] = temp;
}

void rotaten(vector<int> &nums, int k){
    int n = nums.size();
    if(k%nums.size() == 0) return; // Return  if k is multiple of the size of the array
    if(k>nums.size()) { // Modify k if it is greater thean the size of the array
        int q = k/nums.size();
        k = k - nums.size()*q;
    }
    for(int i = 0; i < k; i++){ // Rotate the array k times
        rotate(nums);
    }
}


int main(){
    vector<int> nums = {1,4,7,12,2,3};
    int k = 6;
    rotaten(nums, k);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}