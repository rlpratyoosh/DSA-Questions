#include <iostream>
#include <vector>
using namespace std;

int remove_element(vector<int> &nums, int val){
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i]!=val){
            nums[j]=nums[i];
            j++;
        }
    }
    return j;
}

int main(){
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    cout << remove_element(nums, val) << endl;
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    return 0;
}