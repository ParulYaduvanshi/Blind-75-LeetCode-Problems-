#include<iostream>
#include<bits/stdc++.h>
#include<climits>
using namespace std;
int buyAndSell(vector<int>& prices, int n){
    int minPrice=INT_MAX;
    int maxPrice=0;
    for (int i=0;i<n;i++){
        minPrice=min(minPrice,prices[i]);
        maxPrice=max(maxPrice,prices[i]-minPrice);
    }
    return maxPrice;
}
int main(){
    int n;
    cin>>n;
    vector<int> prices(n);
    for (int i=0;i<n;i++){
        cin>>prices[i];
    }
    cout<<buyAndSell(prices,n);
    return 0;

}
