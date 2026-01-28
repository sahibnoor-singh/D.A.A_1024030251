#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int maxSubarraySum(vector<int> &nums) {

    int ans = nums[0];           

    int curr = nums[0];     

    for (int i = 1; i < nums.size(); i++) {

        curr = max(nums[i], curr + nums[i]);

        ans = max(ans, curr);
    }
    return ans;
}

int main() {
    vector<int> nums = {-2, -5, 6, -2, 1, 5, -6};
    cout << maxSubarraySum(nums); 
    return 0;
}
