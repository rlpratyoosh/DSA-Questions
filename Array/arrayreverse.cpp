#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums){
    int l = 0, r = nums.size()-1;
    while(l<r){
        swap(nums[l], nums[r]);
        l++;
        r--;
    }
}

int main(){
    vector<int> nums = {4,5,3,2,4,7,8,9};
    reverse(nums);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}