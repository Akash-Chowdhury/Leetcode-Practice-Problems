#include<bits/stc++.h>
using namespace std;
class Solution {
public:
    
int convert(int n)
    {
        int total=0;
        int count=0;
        int binaryNum[32];
 
        int i = 0;
        while (n > 0) {
 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
    {
        if( binaryNum[j]==1)
        {
            count++;
        }
    }
         bool is_prime = true;
        if (count == 0 || count == 1) {
        is_prime = false;
        }
        for (int i = 2; i <= count/2; ++i) {
        if (count % i == 0) {
         is_prime = false;
        break;
        }
     }
    int y;
        if (is_prime)
        {
            y=1;
        }
    else
    {
        y=0;
    }
    return y;
       
}
    int countPrimeSetBits(int left, int right) {
        int p=0,m;
        
        for(int i=left; i<= right; i++)
        {
           m=convert(i);
           if(m==1)
           {
               p=p+1;
           }
            else
            {
                p=p+0;
            }
        }
        return p;
        
    }
};