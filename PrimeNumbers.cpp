#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n == 1)
    return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }else{
            return true;
        }
    }
}
// efficient method
bool isEprime(int n){
    if(n == 1)
    return false;
    for(int i = 2;i*i <= n;i++){
        if(n % i == 0)
            return false;
        return true;
    }
}
// more efficient method for large value
bool isMEprime(int n){
    if(n == 1)
    return false;
    if(n == 2 || n == 3)
    return true;
    if(n % 2 == 0 || n % 3 == 0)
    return false;
    for(int i = 5;i*i <= n;i = i+6){
        if(n % i == 0 || n % (i+2) == 0)
            return false;
        return true;
        
    }
}
int main(){
    cout << isPrime(23) << endl;
    cout << isEprime(23) << endl;
    cout << isMEprime(101);
    return 0;
}