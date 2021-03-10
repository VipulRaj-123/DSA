#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
    public:
    bool static sortByVal(const pair<int, int>& a, 
                      const pair<int, int>& b)
{
   if (a.second == b.second)  
       return a.first < b.first;
 
   return a.second > b.second;
}
    vector<int> sortByFreq(int a[],int n)
    {
        vector<int>res;
   unordered_map<int, int> m;
   vector<pair<int, int> > v;
 
   for (int i = 0; i < n; ++i) 
       m[a[i]]++;      
   
   copy(m.begin(), m.end(), back_inserter(v));
   sort(v.begin(), v.end(), sortByVal);
 
   for (int i = 0; i < v.size(); ++i)  
      while(v[i].second--)
              res.push_back(v[i].first);
   return res;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}
