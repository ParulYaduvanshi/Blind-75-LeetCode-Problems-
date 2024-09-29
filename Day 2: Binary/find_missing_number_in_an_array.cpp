#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>& arr, int N){
    int sum_n=N*(N+1)/2;
    int sum=0;
    for (int i=0;i<N-1;i++){
        sum+=arr[i];
    }
    return sum_n-sum;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n);
    return 0;
}