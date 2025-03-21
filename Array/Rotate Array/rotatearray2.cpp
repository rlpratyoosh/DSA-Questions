// Rotate Array, LeetCode qurstion 189
// Optimal Time Complexity but Unoptimal Space Complexity

#include <iostream>
#include <vector>
using namespace std;

void rotaten(vector<int> &nums, int k){
    int n = nums.size();
    if(k%nums.size() == 0) return; // Return  if k is multiple of the size of the array
    if(k>nums.size()) { // Modify k if it is greater thean the size of the array
        int q = k/nums.size();
        k = k - nums.size()*q;
    }
    vector<int> rarray(n); // Initialize the result array
    for(int i = 0; i < n; i++){ // Add the k elements from back of the array to the result array and remaining elements of the front to the remaining space of the result array
        if(n-k+i < n) rarray[i] = nums[n-k+i];
        else rarray[i] = nums[i-k];
    }
    for(int i = 0; i < n; i++){ // Assign result array to the initial array
        nums[i] = rarray[i]; 
    }
}

int main(){
    vector<int> nums = {1,4,7,12,2,3};
    int k = 3;
    rotaten(nums, k);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}