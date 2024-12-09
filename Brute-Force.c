int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));  // Allocate memory for two values

    // Check all pairs of numbers
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // Chek if the sum of two numbers equals the target
            if (nums[i] + nums[j] == target) {
                result[0] = i;  // Storing first value
                result[1] = j;  // Storing Second value
                *returnSize = 2;  // Set the return size to 2 (since we found two values)
                return result;  // return the result array
            }
        }
    }

    // If no solution is found, return NULL
    *returnSize = 0;
    free(result);  // Free the allocated memory
    return NULL;
}
