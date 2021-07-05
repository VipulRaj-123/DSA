/* Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1] */

 vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>v;
        map<int,int>mp;
        for(auto i:nums)
            mp[i]++;
        for(auto i:mp)
            pq.push({i.second,i.first});
        while(k--){
            int a=pq.top().first;
            int b=pq.top().second;
            pq.pop();
            v.push_back(b);
        }
        return v;
    }
