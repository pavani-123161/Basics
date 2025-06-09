#include<iostream>
using namespace std;
bool isPow2(int n){
    if(n == 0)
    return false;
while(n != 1){
    if(n % 2 != 0)
    return false;
n = n/2;
}
return true;
}
bool isEPow2(int n){
    if(n == 0)
    return false;
return ((n & (n-1)) == 0);
}
int main(){
    cout << isPow2(4) << endl;
    cout << isEPow2(8) << endl;
    int num = 4;
    num = 1 << 3;
    num = 4 & ~(num);
    cout << num;
    return 0;
}