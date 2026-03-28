#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    long long count=0;
   for(int i =0;i<n-1;i++){
    if(v[i+1]-v[i]<0){
        count+=abs(v[i+1]-v[i]);
        v[i+1]+=abs(v[i+1]-v[i]);
    }
   }
    cout<<count<<"\n";
}
