class Solution {
    public int lengthOfLastWord(String s) {
        int l=s.length();
        int count=0;
        for(int i=l-1; i>=0; i--)
        {
            if(s.charAt(l-1)==' ')
            {
                l--;
            }
            else
            {
                if(s.charAt(i)==' ')
            {
                break;
            }
            else
            {
                count+=1;
            }
            }
        }
        return count;
    }
}