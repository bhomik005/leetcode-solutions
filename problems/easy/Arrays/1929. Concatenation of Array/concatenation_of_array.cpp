#include <vector>

using std::vector;

class Solution {
public:
    // O(n) time | O(2 * n) space
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size() * 2, 0);
        for(int i = 0; i < nums.size(); i++) {
            ans[i] = nums[i];
            ans[i + nums.size()] = nums[i];
        }
        return ans;
    }
};