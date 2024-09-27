#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> result;
    int n = nums.size();

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Iterate through the array
    for (int i = 0; i < n - 2; i++)
    {
        // Skip duplicate elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;
        int target = -nums[i];

        // Step 3: Use two-pointer technique
        while (left < right)
        {
            int sum = nums[left] + nums[right];

            if (sum == target)
            {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for left and right pointers
                while (left < right && nums[left] == nums[left + 1])
                    left++;
                while (left < right && nums[right] == nums[right - 1])
                    right--;

                left++;
                right--;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return result;
}
/*
// this code will produce TLE in come cases
vector<vector<int>> threeSum(vector<int>& arr) {
    vector<vector<int>> result;
    int n=arr.size();

    // Avoid triplet duplicates by using a set (to handle uniqueness)
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {  // Corrected: Use k here
                if ((arr[i] + arr[j] + arr[k]) == 0) {
                    vector<int> triplet = {arr[i], arr[j], arr[k]};
                    // Sort the triplet to avoid duplicates like [1, -1, 0] and [-1, 0, 1]
                    sort(triplet.begin(), triplet.end());
                    uniqueTriplets.insert(triplet);  // Automatically handles duplicates
                }
            }
        }
    }

    // Copy the unique triplets from the set to the result vector
    for (auto triplet: uniqueTriplets) {
        result.push_back(triplet);
    }

    return result;
}
*/
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> result = threeSum(arr);

    // Output the result
    for (auto triplet : result)
    {
        for (auto ele : triplet)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}
