// Plus One Problem, LeetCode 66
// Unoptimal Approach

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

vector<int> plusOne(vector<int> &digits){
    long int integer = 0, i=0;
    while(i<digits.size()){ // Convert array to an integer
        integer = integer * 10 + digits[i];
        i++;
    }
    integer++; // Increase the integer by once
    vector<int> result; // Intitialize the result array
    i = 0;
    while(integer>0){ // Convert integer back to an array
        int r = integer%10;
        result.push_back(r);
        integer /= 10;
        i++;
    }
    reverse(result); // Reverse the result for the expected answer
    return result;
}

int main(){
    vector<int> digits = {1,2,3};
    vector<int> digitsr = plusOne(digits);
    for(int i = 0; i < digitsr.size(); i++){
        cout << digitsr[i] << " ";
    }
    return 0;
}