class Solution {
public:
    void stableStlSort(vector<int>& nums) {
	stable_sort(nums.begin(), nums.end());
}
    vector<int> sortArray(vector<int>& nums) {
        stableStlSort(nums);
        return nums;
    }
};