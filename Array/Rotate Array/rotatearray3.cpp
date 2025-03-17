#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int l, int r){
    while(l<r){
        swap(nums[l], nums[r]);
        l++; r--;
    }
}

void rotate(vector<int> &nums, int k){
    if(k%nums.size() == 0) return;
    if(k>nums.size()) {
        int q = k/nums.size();
        k = k - nums.size()*q;
    }
    reverse(nums, 0, nums.size()-1);
    reverse(nums, 0, k-1);
    reverse(nums, k, nums.size()-1);
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