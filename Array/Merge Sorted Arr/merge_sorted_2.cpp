#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
    int i = m-1; // Pointer for the first array
    int j = n-1; // Pointer for the second array
    int k = m+n-1; // Pointer for the whole first array, to play elements
    while(i >=0 && j >=0){
        if(nums1[i]>nums2[j]){
            nums1[k--] = nums1[i--];
        }
        else {
            nums1[k--] = nums2[j--];
        }
    }
    while(j>=0){
        nums1[k--] = nums2[j--];
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