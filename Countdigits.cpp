#include<iostream>
using namespace std;
int countDigits(long n){
    int count = 0;
    while(n != 0){
        n = n/10;
        count++;
    }
    return count;
}
// recursive solution
int countDigit(long n){
    if(n == 0){
        return 0;
    }else{
        return 1 + countDigit(n/10);
    }
}
int main(){
    
    cout <<countDigits(3456);
    cout << countDigit(123);
    return 0;
}
