/* Given a string with brackets ('[' and ']') and the index of an opening bracket. Find the index of the corresponding closing bracket.

Example 1:

Input:
S = "[ABC[23]][89]"
pos = 0
Output: 8
Explanation: [ABC[23]][89]
The closing bracket corresponding to the
opening bracket at index 0 is at index 8.

​Example 2:

Input: 
S = "ABC[58]"
pos = 3
Output: 6
Explanation: ABC[58]
The closing bracket corresponding to the
opening bracket at index 3 is at index 6.

Your Task:
You don't need to read input or print anything. Your task is to complete the function closing() which takes a string S and a position pos as inputs and returns the index of the closing bracket corresponding to the opening bracket at index pos.


Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).


Constraints:
1 <= N <= 2*105 */
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        int closing (string s, int pos)
        {
        	//code here.
        	int n=s.size(),c=0,copy1,copy2;
        	for(int i=0;i<n;i++){
        	    if(s[i]=='['){
        	     c++;
        	     if(i==pos){
        	         copy1=i;
        	         copy2=c;}
        	     }
        	    else if(s[i]==']'){
        	    c--;
        	    if(c+1==copy2)
        	      return i;}  
        	}
        }
};
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
