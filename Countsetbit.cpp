#include<iostream>
using namespace std;
int countset(int n){
    int res = 0;
    while(n >0){
     if(n & 1 == 1) //n % 2 != 0
    res++;
n = n>>1; //n = n / 2
    }
    return res;
}
// brian kerningams algorithm
int bcountSet(int n){
    int res = 0;
    while(n > 0){
    n = n & (n-1);
    res++;
    }
    return res;
}
int main(){
    cout << countset(7) << endl;
    cout << bcountSet(8);
    return 0;
}