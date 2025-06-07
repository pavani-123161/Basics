#include<iostream>
using namespace std;
// naive solution
void divisors(int n){
   for(int i = 1; i <= n; i++){
        
        if(n % i == 0)
        cout << i;
    
    }
}
// efficient solution
void eDivisors(int n){
    for(int i = 1; i*i <=n; i++){
        if(n % i == 0)
         cout << i;
         if(i != n/i)
         cout << n/i;
    }
}
int main(){
     divisors(12);
     eDivisors(25);
    return 0;
}