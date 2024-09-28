#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
/*
int maxProd(vector<int>& arr, int n){
    int prod=1;
    int max_prod=INT_MIN;
    for (int i=0;i<n;i++){
        prod*=arr[i];
        if (prod>max_prod) max_prod=prod;
        if (prod==0) prod=1;
    }
    return max_prod;
}
*/
int maxProd(vector<int>& arr, int n){
    int maxProd=arr[0];
    int minProd=arr[0];
    int ans=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]<0) swap(maxProd,minProd);
        maxProd=max(arr[i],maxProd*arr[i]);
        minProd=min(arr[i],minProd*arr[i]);
        ans=max(ans,maxProd);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=maxProd(arr,n);
    cout<<ans;
    return 0;
}