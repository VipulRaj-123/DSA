/* Given a non-empty array of integers, find the top k elements which have the highest frequency in the array. If two numbers have the same frequency then the larger number should be given preference. 

Example 1:

Input:
nums = {1,1,1,2,2,3},
k = 2
Output: {1, 2}
Example 2:

Input:
nums = {1,1,2,2,3,3,3,4},
k = 2
Output: {3, 2}
Explanation: Elements 1 and 2 have the
same frequency ie. 2. Therefore, in this
case, the answer includes the element 2
as 2 > 1.
User Task:
The task is to complete the function topK() that takes the array and integer k as input and returns a list of top k frequent elements.

Expected Time Complexity : O(NlogN)
Expected Auxilliary Space : O(N)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
    
  public:
    vector<int> topK(vector<int>& a, int k) {
        unordered_map<int,int>mp;
int n=a.size();
for(int i=0;i<n;i++)
 mp[a[i]]++;
 vector<pair<int,int>>v;
for(auto i=mp.begin();i!=mp.end();i++)
v.push_back(make_pair(i->first,i->second));

sort(v.begin(),v.end(),compare);
vector<int>q;
for(int i=0;i<k;i++)
    q.push_back(v[i].first);
 return q;
    }
};
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
} 
