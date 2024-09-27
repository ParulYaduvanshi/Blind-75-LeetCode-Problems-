#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string twoSum(vector<int>& arr, int n,int target){
    for (int i=0;i<n;i++){
        for (int j=1;j<n;j++){
            if (arr[i]+arr[j]==target) return "YES";
        }
    }return "NO"; 
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<twoSum(arr,n,target);
    return 0;
}