/* Given a string you need to print the size of the longest possible substring that has exactly k unique characters. If there is no possible substring print -1.
Example
For the string aabacbebebe and k = 3 the substring will be cbebebe with length 7.


Input:
The first line of input contains an integer T denoting the no of test cases then T test cases follow. Each test case contains two lines . The first line of each test case contains a string s and the next line conatains an integer k.

Output:
For each test case in a new line print the required output.

Constraints:
1<=T<=100
1<=k<=10

Example:
Input:
2
aabacbebebe
3
aaaa
1
Output:
7
4 */
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t,i,j,k;
	cin>>t;
	while(t--){
	    int res=0;
	    string s;
	    cin>>s;set<char>st;
	    cin>>k;
	    int n=s.size();
	    for(int i=0;i<n;i++)
	    st.insert(s[i]);
	    if(st.size()<k){
	     cout<<-1<<endl;
	     continue;
	    }
	    st.clear();
	    for(i=0;i<n;i++){
	        st.insert(s[i]);
	        for(j=i+1;j<n;j++){
	            st.insert(s[j]);
	            if(st.size()>k)
	            break;
	        }
	        res=max(res,j-i);
	        st.clear();
	    }
	    cout<<res<<endl;
	}
	return 0;
}
