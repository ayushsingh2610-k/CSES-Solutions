// Problem: Repetitions
// CSES
// Approach: String traversal 
// Time: O(n) | Space: O(1)
#include <iostream>
#include<vector>
using namespace std;
int main() {
string s;
cin>>s;
int count =1;
int mx=1;
int n = s.length();
for(int i =1;i<n;i++){
    if(s[i]==s[i-1]){
        count++;
        mx=max(mx,count);
    }
    else{
        count =1;
    }
}
cout<<mx;

return 0;
}
