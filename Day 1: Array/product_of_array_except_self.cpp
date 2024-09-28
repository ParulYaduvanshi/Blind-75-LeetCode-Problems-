#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<int> prodArrayExceptSelf(vector<int> &nums){
    int n=nums.size();
    vector<int> ans(n,1);
    int left_prod=1;
    for (int i=0;i<n;i++){
        ans[i]=left_prod;
        left_prod*=nums[i];
    }

    int right_prod=1;
    for (int i=n-1;i>=0;i--){
        ans[i]*=right_prod;
        right_prod*=nums[i];
    }
    return ans;
}
/*
vector<int> prodArrayExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> output;
    for (int i = 0; i < n; i++)
    {
        int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            product *= nums[j];
        }
        output.push_back(product);
    }
    return output;
}
*/
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> result = prodArrayExceptSelf(nums);
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}