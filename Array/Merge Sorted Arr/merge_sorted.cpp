#include <iostream>
#include <vector>
using namespace std;


void rotate(vector<int> &nums, int l){
    for(int i = nums.size()-1; i>l; i--){
        nums[i] = nums[i-1];
    }
}

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
        int i = 0;
        int j = 0;
        while(i<nums1.size()){
            if(nums1[i]>nums2[j]){
                rotate(nums1, i);
                nums1[i] = nums2[j];
                j++;
            }
            else if(nums1[i] == 0 && i>m){
                nums1[i] = nums2[j];
                j++;
            }
            i++;
        }
}

int main(){
    vector<int> nums1 = {0,1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    int m = 4, n = 3;
    merge(nums1, m, nums2, n);
    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << " ";
    }
    return 0;
}