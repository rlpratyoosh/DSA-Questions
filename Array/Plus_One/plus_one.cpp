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
    while(i<digits.size()){
        integer = integer * 10 + digits[i];
        i++;
    }
    integer++;
    vector<int> result;
    i = 0;
    while(integer>0){
        int r = integer%10;
        result.push_back(r);
        integer /= 10;
        i++;
    }
    reverse(result);
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