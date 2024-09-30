#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> mostFrequent(vector<int>& arr, int n, int k){
    map<int,int> mp;
    for (auto i: arr){
        mp[i]++;
    }
    vector<int> result;
    priority_queue<pair<int,int>>q;
    for (auto i: mp){
        q.push({i.second,i.first});
    }
    while(k>0 && !q.empty()){
        result.push_back(q.top().second);
        q.pop();
        k--;
    }
    return result;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int> result=mostFrequent(arr,n,k);
    for (int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}