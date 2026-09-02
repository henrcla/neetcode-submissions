class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int arrayLength = nums.size();

        vector<int> prefix(arrayLength, 1);
        vector<int> suffix(arrayLength, 1);
        vector<int> output(arrayLength);

        int prefixProduct = 1;
        int suffixProduct = 1;

        for (int i = 1; i < arrayLength; i++){
            prefixProduct *= nums[i-1];
            prefix[i] = prefixProduct;
        }

        for (int j = arrayLength - 2; j >= 0; j--){
            suffixProduct *= nums[j+1];
            suffix[j] = suffixProduct;
        }

        for (int i = 0; i < arrayLength; i++){
            output[i] = suffix[i] * prefix[i];
        }

    return output;
    }
};
