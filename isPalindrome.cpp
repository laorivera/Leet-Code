#include<iostream>
// solved 18/01/2025 runtime: 0ms memory: 8.50mb
class Solution {
public:
    bool isPalindrome(int x) {
    long long int y = 0;
        for(int i = x; i >= 1; i = i / 10){
            int b = i % 10;
            y = y*10 + b;
        }
        if (y == x){
            return true;
        }
    return false;       
    }
};