/*Given a string s, sort it in decreasing order based on the frequency of characters, and return the sorted string.

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
Example 2:

Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so "aaaccc" is also a valid answer.
Note that "cacaca" is incorrect, as the same characters must be together.
Example 3:

Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters. */

 string frequencySort(string s) {
      map<char,int>mp;
        string str;
        priority_queue<pair<int,char>>pq;
        for(char c:s)
            mp[c]++;
        
        for(auto i:mp)
            pq.push({i.second,i.first});
        
        while(!pq.empty()){
            int a=pq.top().first;
            char b=pq.top().second;
            pq.pop();
            while(a--)
                str.push_back(b);         
        }
        return str;
    }
