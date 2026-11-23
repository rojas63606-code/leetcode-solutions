
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char current = strs[0][i];

        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != current) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main() {
    char* words1[] = {"flower", "flow", "flight"};
    printf("Test 1: %s\n",
           longestCommonPrefix(words1, 3));

    char* words2[] = {"dog", "racecar", "car"};
    printf("Test 2: %s\n",
           longestCommonPrefix(words2, 3));

    char* words3[] = {"apple", "app", "application"};
    printf("Test 3: %s\n",
           longestCommonPrefix(words3, 3));

    return 0;
}
