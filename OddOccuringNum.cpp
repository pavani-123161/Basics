#include<iostream>
using namespace std;
int findOdd(int arr[],int n){
    int res = 0;
    for(int i = 0; i <= n; i++){
        res = res^arr[i];
        return res;
    }
}
// two odd occuring numbers
void oddOccuring(int arr[], int n){
    int xor = 0;
    int res1 = 0;
    int res2 = 0;
    for(int i = 0; i < n; i++){
        xor = xor ^ arr[i];
    }
    
    int rn = xor & ~(xor - 1);// gives rightmost set bit
    for(int i = 0; i < n; i++){
        if(arr[i] & rn != 0){
            res1 = res1^arr[i];
        }else{
            res2 = res2^arr[i];
        }
    }
    cout << res1 << endl;
}
int main(){
    int ar[] = { 1,1,1,2,2,3,3};
    int arr[] = {1,1,2,2,3,3,4,5,5,6,7,7};
    cout << findOdd(ar,6 );
    oddOccuring(arr ,12);
    return 0;
}