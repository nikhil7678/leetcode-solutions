#include <stdio.h>
#include <string.h>

int main() {
    char *strs1[] = {"flower", "flow", "flight"};
    int n1 = 3;

    int length = strlen(strs1[0]);

    for (int i = 1; i < n1; i++) {
        int j = 0;

        while (j < length &&
               strs1[i][j] != '\0' &&
               strs1[0][j] == strs1[i][j]) {
            j++;
        }

        length = j;
    }

    printf("Test Case 1: ");

    if (length == 0) {
        printf("No common prefix");
    } else {
        for (int i = 0; i < length; i++) {
            printf("%c", strs1[0][i]);
        }
    }

    printf("\n");

    // Test Case 2 - Edge Case
    char *strs2[] = {"dog", "racecar", "car"};
    int n2 = 3;

    length = strlen(strs2[0]);

    for (int i = 1; i < n2; i++) {
        int j = 0;

        while (j < length &&
               strs2[i][j] != '\0' &&
               strs2[0][j] == strs2[i][j]) {
            j++;
        }

        length = j;
    }

    printf("Test Case 2: ");

    if (length == 0) {
        printf("No common prefix");
    } else {
        for (int i = 0; i < length; i++) {
            printf("%c", strs2[0][i]);
        }
    }

    printf("\n");

    return 0;
}