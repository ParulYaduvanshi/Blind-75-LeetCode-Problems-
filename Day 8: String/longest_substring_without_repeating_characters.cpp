#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s)
{
    int n = s.size();
    if (n == 1)
        return 1;
    unordered_map<char, int> mp;
    int j = 0, count = 0, longest = 0;
    for (int i = 0; i < n; ++i)
    {
        mp[s[i]]++; // a-1,i=1,a-1,b-1
        count++;    // i=2,a-1,b-1,c-1   //count=3,4,3
        if (mp[s[i]] > 1)
        { // i=3,a-2,b-1,c-1
            while (j < i)
            {
                count--;
                mp[s[j]]--;
                if (s[j] == s[i])
                    break;
                j++;
            }
            j++; // 0,1
        }
        longest = max(longest, count);
    }
    return longest;
}
int main()
{
    string s;
    cin >> s;
    cout << longestSubstring(s);
    return 0;
}