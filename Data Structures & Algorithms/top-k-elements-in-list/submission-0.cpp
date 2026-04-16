class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<int> buckets[n+1]; // freq map -> ele: freq
        for(auto it:freq){ // { 1:3,2:2,3:1}
            int ele=it.first;
            int fre=it.second;
            buckets[fre].push_back(ele); // bucket[3]=1, bucket -> [3,2,1]
        }
        vector<int> res;
        for(int i=n;i>=0;i--){ // piche se ele lega
            for(int nums:buckets[i]){
                res.push_back(nums);
                if(res.size()==k) return res; // [1,2]
            }
        }
        return res;
    }
};;
