class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1); // presized vector jisme already 1 filled n slots h

        // prefix
        int leftpro=1;
        for(int i=0;i<n;i++){
            answer[i]=leftpro;
            leftpro*=nums[i];
        }
        // suffix
        int rightpro=1;
        for(int i=n-1;i>=0;i--){
            answer[i]*=rightpro;
            rightpro*=nums[i];
        }
        return answer;
        
    }
};
