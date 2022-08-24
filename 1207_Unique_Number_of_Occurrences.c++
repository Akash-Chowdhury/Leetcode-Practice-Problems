class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     sort(arr.begin(), arr.end());
        long int count=1;
        vector<int>v;
        arr.push_back(1001);
        
        for(long int i=0; i<arr.size()-1; i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
            }
            else
            {
                v.push_back(count);
                count=1;
            }
        }
        sort(v.begin(), v.end());
        for(long int i=0; i<v.size()-1; i++)
        {
            if(v[i]==v[i+1])
            {
                return false;
                break;
            }
        }
        return true;   
    }
};