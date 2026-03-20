// Problem: Missing Number
// CSES
// Approach: Math (Sum formula)
// Time: O(n) | Space: O(n)
#include <iostream>
#include<vector>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long>v(n-1);
for(int i =0;i<n-1;i++){
    cin>>v[i];
}
long long sum=0;
for(int i =0;i<n-1;i++){
    sum+=v[i];
}
cout<<n*(n+1)/2 - sum;

return 0;
}
