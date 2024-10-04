#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Function to group anagrams
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> anagramMap;

    // Traverse the input strings
    for (string s : strs)
    {
        string key = s;
        sort(key.begin(), key.end()); // Sort the string to use it as the key
        anagramMap[key].push_back(s); // Group anagrams under the same key
    }

    vector<vector<string>> result;
    for (auto &entry : anagramMap)
    {
        result.push_back(entry.second); // Collect the anagram groups
    }

    return result;
}

int main()
{
    vector<string> strs; // Input vector of strings
    string temp;

    cout << "Enter strings (type 'end' to stop input):" << endl;

    // Read multiple strings from input
    while (cin >> temp && temp != "end")
    {
        strs.push_back(temp);
    }

    // Call the groupAnagrams function
    vector<vector<string>> ans = groupAnagrams(strs);

    // Print the output (grouped anagrams)
    cout << "Grouped Anagrams:" << endl;
    for (const auto &group : ans)
    {
        for (const auto &str : group)
        {
            cout << str << " "; // Print each string in the group
        }
        cout << endl; // Separate groups by new lines
    }

    return 0;
}
