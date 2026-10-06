class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int i = 0;
        int j = n - 1;

        while (i < j) {
            if ((numbers[i] + numbers[j]) == target) {
                break;
            } else if ((numbers[i] + numbers[j]) < target) {
                i++;
            } else if ((numbers[i] + numbers[j]) > target) {
                j--;
            }
        }
        return {i+1, j+1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna