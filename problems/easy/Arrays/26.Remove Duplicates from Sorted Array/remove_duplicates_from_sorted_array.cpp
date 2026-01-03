#include <vector>

class Solution {
public:
    // O(n) time | O(1) space
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != nums[k]) {
                swap(nums, i, k+1);
                k += 1;
            }
        }
        return k + 1;
    }

    void swap(std::vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
};