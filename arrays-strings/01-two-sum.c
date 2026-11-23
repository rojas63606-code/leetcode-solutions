
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {

            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    free(result);
    return NULL;
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int size1 = 0;

    int* result1 = twoSum(nums1, 4, target1, &size1);

    printf("Test Case 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", result1[i]);
    }
    printf("\n");
    free(result1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int size2 = 0;

    int* result2 = twoSum(nums2, 3, target2, &size2);

    printf("Test Case 2: ");
    for (int i = 0; i < size2; i++) {
        printf("%d ", result2[i]);
    }
    printf("\n");
    free(result2);

    return 0;
}
