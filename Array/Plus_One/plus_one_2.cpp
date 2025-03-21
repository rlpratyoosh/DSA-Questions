#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits){
    for(int i = digits.size()-1; i>=0; i--){ // Iterate from end to beginning
        if(digits[i]!=9){ // If the digit is not a 9 then add one to it and return it
            digits[i]++;
            return digits;
        }
        digits[i] = 0; // In case it is 9 turn it to 0 and iterate to the next number
    }
    digits.insert(digits.begin(), 1); // In case all of the numbers were 9, add 1 to the front
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