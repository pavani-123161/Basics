#include<iostream>
using namespace std;
// using left shift operator
void kthbit(int n,int k){
    if(n & (1 << (k-1)) != 0){
    cout << "yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
// using right shift operator
void rkthbit(int n, int k){
    if(n >> (k-1) & 1 == 1){
    cout << "yes" << endl;
    }else{
        cout << "No" <<endl;
    }  

}
int main(){
     kthbit(5,3);
     rkthbit(13,3);
    return 0;
}