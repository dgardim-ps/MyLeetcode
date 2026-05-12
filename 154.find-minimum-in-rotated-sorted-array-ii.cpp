#include <vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid;

        while(lo < hi) {
            mid = (int) lo + (hi-lo)/2;
            if(nums[mid] > nums[hi]) lo = lo + 1;
            else if(nums[mid] == nums[hi]) hi--;
            else hi = mid;
        }
        return nums[lo];
    }
};
