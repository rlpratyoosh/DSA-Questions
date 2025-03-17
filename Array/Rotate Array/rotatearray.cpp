#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums){
    int n = nums.size();
    int temp = nums[n-1];
    for(int i = n-1; i > 0; i--){
        nums[i] = nums[i-1];
    }
    nums[0] = temp;
}

void rotaten(vector<int> &nums, int k){
    int n = nums.size();
    if(k == n) return;
    if(k > n) k = k - n;
    for(int i = 0; i < k; i++){
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