class Solution {
    public int climbStairs(int n) {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        int fn=0, fn1 = 1, fn2=1;
        while(n-->1){
            fn = fn1 + fn2;
            fn1 = fn2;
            fn2 = fn;
        }
        return fn;
    }
}