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
int main(){
    
    cout <<countDigits(3456);
    return 0;
}