#include <vector>

class Solution {
public:
    // O(n) time | O(1) space
    int removeElement(std::vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); ++i) {
            if(nums[i] != val) {
                swap(nums, i, k);
                k += 1;
            }
        }
        return k;
    };

    void swap(std::vector<int>& nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }   
};