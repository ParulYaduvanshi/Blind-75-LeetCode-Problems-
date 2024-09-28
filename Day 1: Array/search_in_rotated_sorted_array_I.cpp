#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& arr, int n, int target){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if (arr[mid]==target){
            return mid;
        }
        else if (arr[mid]>arr[e]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
    
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int target;
    cin>>target;
    cout<<search(arr,n,target);
    return 0;
}