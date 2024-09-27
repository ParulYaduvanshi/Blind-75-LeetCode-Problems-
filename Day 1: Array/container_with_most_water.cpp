#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
// this code block will produce TLE
int containerWithMostWater(vector<int>& arr, int n){
    int max_area=0;
    int area;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            area=min(arr[i],arr[j])*(j-i);
            max_area=max(max_area,area);
        }
    }
    return max_area;
}
*/
int containerWithMostWater(vector<int> &height, int n)
{
    int max_area = 0;
    int left=0;
    int right=n-1;
    int area;
    while (left < right)
    {
        area = min(height[left], height[right]) * (right - left);
        max_area = max(max_area, area);
        if (height[left]<height[right]) left++;
        else right--;
    }

    return max_area;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << containerWithMostWater(arr, n);
    return 0;
}