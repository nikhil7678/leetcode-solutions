#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t) {
    int count[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    printf("Test Case 1: %s\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");

    printf("Test Case 2: %s\n",
           isAnagram("rat", "car") ? "true" : "false");

    printf("Test Case 3: %s\n",
           isAnagram("listen", "silent") ? "true" : "false");

    return 0;
}