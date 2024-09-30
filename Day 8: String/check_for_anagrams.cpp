#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool validAnagram(string s, string t){
    if (s.size()!=t.size()) return false;
    map<char,int> mp1,mp2;
    for (int i=0;i<s.length();i++){
        mp1[s[i]]++;
        mp2[t[i]]++;
    }
    return mp1==mp2;
}
int main(){
    string s,t;
    cin>>s>>t;
    bool ans=validAnagram(s,t);
    cout<<(ans?"true":"false");
    return 0;
}