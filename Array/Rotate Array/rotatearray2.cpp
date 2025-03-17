#include <iostream>
#include <vector>
using namespace std;

void rotaten(vector<int> &nums, int k){
    int n = nums.size();
    if(k%n == 0) return;
    if(k > n) k = k - n;
    vector<int> rarray(n);
    for(int i = 0; i < n; i++){
        if(n-k+i < n) rarray[i] = nums[n-k+i];
        else rarray[i] = nums[i-k];
    }
    for(int i = 0; i < n; i++){
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