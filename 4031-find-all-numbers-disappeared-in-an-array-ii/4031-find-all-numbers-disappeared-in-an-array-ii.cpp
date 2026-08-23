class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int j = 0;
        while (j < nums.size() && nums[j] < lower) {
            j++;
        }

        int start = lower;
        while (j < nums.size() && nums[j] <= upper) {
            if (start < nums[j]) {
                ans.push_back({start, nums[j] - 1});
            }
    int current = nums[j];
   while (j < nums.size() && nums[j] == current) {
                j++;
            }

            start = current + 1;
        }
        if (start <= upper) {
            ans.push_back({start, upper});
        }

        return ans;
    }
};