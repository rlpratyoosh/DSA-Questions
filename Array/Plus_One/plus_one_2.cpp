#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits){
    for(int i = digits.size()-1; i>=0 ; i--){
        if(digits[i]!=9){
            digits[i]++;
            return digits;
        }
        digits[i] = 0;
    }
    digits.insert(digits.begin(), 1);
    return digits;
}

int main(){
    vector<int> digits = {9,9,9};
    vector<int> digitsr = plusOne(digits);
    for(int i = 0; i < digitsr.size(); i++){
        cout << digitsr[i] << " ";
    }
    return 0;
}