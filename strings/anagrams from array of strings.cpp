/* Given an array of strings, return all groups of strings that are anagrams. The groups must be created in order of their appearance in the original array. Look at the sample case for clarification.


Example 1:

Input:
N = 5
words[] = {act,god,cat,dog,tac}
Output: 
god dog
act cat tac
Explanation:
There are 2 groups of
anagrams "god", "dog" make group 1.
"act", "cat", "tac" make group 2.
Example 2:

Input:
N = 3
words[] = {no,on,is}
Output: 
no on
is
Explanation:
There are 2 groups of
anagrams "no", "on" make group 1.
"is" makes group 2. 

Your Task:
The task is to complete the function Anagrams() that takes a list of strings as input and returns a list of groups such that each group consists of all the strings that are anagrams.


Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.


Constraints:
1<=N<=100 */
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
vector<vector<string> > Anagrams(vector<string>& string_list) ;
vector<vector<string> > Anagrams(vector<string>& string_list) 
{
    map<string, vector<string>> mp;
    for(int i = 0; i < string_list.size(); i++)
    {
        string data = string_list[i];
        sort(data.begin(), data.end());
        mp[data].push_back(string_list[i]);
    }
    
    vector<vector<string>> res;
    for(auto x: mp)
    {
        vector<string> val;
        for(auto y: x.second)
            val.push_back(y);
        res.push_back(val);
    }
    return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        vector<vector<string> > result = Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
