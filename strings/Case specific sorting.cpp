/* Given a string S consisting of uppercase and lowercase characters. The task is to sort uppercase and lowercase letters separately such that if the ith place in the original string had an Uppercase character then it should not have a lowercase character after being sorted and vice versa.

Example 1:

Input:
N = 12
S = defRTSersUXI
Output: deeIRSfrsTUX
Explanation: Sorted form of given string
with the same case of character as that
in original string is deeIRSfrsTUX
Example 2:

Input:
N = 6
S = srbDKi
Output: birDKs
Explanation: Sorted form of given string
with the same case of character will
result in output as birDKs.
Your Task:
You only need to complete the function caseSort that returns sorted string.

Expected Time Complexity: O(N*Log(N)).
Expected Auxiliary Space: O(N).

Constraints:
1 = N = 103 */
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    string caseSort(string s, int n){
        string s1,s2;
        for(int i=0;i<n;i++){
            if(s[i]>='a'&&s[i]<='z')
             s2.push_back(s[i]);
            else
             s1.push_back(s[i]);
        }
       sort(s1.begin(),s1.end());
       sort(s2.begin(),s2.end());
       string st;
       int j=0,k=0;
       for(int i=0;i<n;i++){
          if(s[i]>=97&&s[i]<=122) 
           st.push_back(s2[j++]);
          else
           st.push_back(s1[k++]);
       }
       return st;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}  // } Driver Code Ends
