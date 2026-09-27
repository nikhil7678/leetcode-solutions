#include <stdio.h>

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int n = 4;

    // Test Case 1
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Test Case 1: [%d, %d]\n", i, j);
            }
        }
    }

    // Test Case 2
    int nums2[] = {3, 3};
    int target2 = 6;

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 2; j++) {
            if (nums2[i] + nums2[j] == target2) {
                printf("Test Case 2: [%d, %d]\n", i, j);
            }
        }
    }

    return 0;
}