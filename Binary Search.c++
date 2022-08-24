#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& array, int x) {
        int l=array.size();
        int low=0;
        int high=l-1;
        while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
    
};