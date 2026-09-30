#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";

    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }

    printf("Test Case 1: %s\n", str);

    char str2[] = "a";

    left = 0;
    right = strlen(str2) - 1;

    while (left < right) {
        char temp = str2[left];
        str2[left] = str2[right];
        str2[right] = temp;

        left++;
        right--;
    }

    printf("Test Case 2: %s\n", str2);

    return 0;
}