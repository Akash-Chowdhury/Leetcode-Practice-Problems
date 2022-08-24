class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        vector<char>v;
        for(int i=0; i<s.length(); i++)
        {
            if(islower(s[i]) || (s[i] >=48 && s[i] <= 57) )
            {
                v.push_back(s[i]);
            }
            else
            {
                continue;
            }
        }
        vector<char>a;
        for(int i=v.size()-1; i>=0; i--)
        {
            a.push_back(v[i]);
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==a[i])
            {
                continue;
            }
            else
            {
                return false;
                break;
            }
        }
        return true;
    }
};