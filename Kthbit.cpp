#include<iostream>
using namespace std;
void kthbit(int n,int k){
    if(n & (1 << (k-1)) != 0){
    cout << yes;
    }else{
        cout << no;
    }

}
int main(){
    Kthbit(5,3);
    return 0;
}