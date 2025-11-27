
#include<iostream>


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

int main(){

  std::cout<<"hello world"<<std::endl;
  return 0;
}