#include<bits/stdc++.h>
using namespace std;

// int fact(int n){
//     if(n == 0)  return 1;
   
//     return fact(n-1) * n;
// }
int sum(int n, int a[]){
   if(n<0) return 0;
   return sum(n-1, a) + a[n];
}



int main() {
   int n;
   cin>>n;
   int a[n];
   for(int  i = 0; i<n; i++){
      cin>>a[i];
   }
   cout<<sum(2,a);
}