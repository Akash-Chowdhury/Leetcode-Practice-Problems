class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.push_back(400001);
        long long int p;
        for(long long int i=0; i<nums.size(); i++)
        {
            if(nums[i]==nums[i+1])
            {
                i+=1;
            }
            else
            {
                p= nums[i];
                break;
            }
        }
        return p;
    }
};