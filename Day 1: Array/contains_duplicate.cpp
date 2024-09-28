#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool duplicate(vector<int>& arr){
    map<int,int> mp;
    for (auto i: arr){
        mp[i]++;
    }
    for (auto i: mp){
        if (i.second>1){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=duplicate(arr);
    cout<<(ans? "true":"false");
    return 0;
}