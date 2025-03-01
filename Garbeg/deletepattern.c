#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100 // Maximum string size

int findLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void removePattern(char *str, char *toRemove, int strLength, int toRemoveLength) {
    int i, j, k;
    for (i = 0; i <= strLength - toRemoveLength; i++) {
        for (j = 0; j < toRemoveLength; j++) {
            if (str[i + j] != toRemove[j]) {
                break;
            }
        }
        if (j == toRemoveLength) {
            for (k = i; k <= strLength - toRemoveLength; k++) {
                str[k] = str[k + toRemoveLength];
            }
            strLength -= toRemoveLength;
            i--;
        }
    }
    str[strLength] = '\0';
}
int main()
{
    char str[MAX_SIZE];
    char toRemove[MAX_SIZE];

    printf("Enter any string: ");
    gets(str);

    int length = findLength(str);

    printf("Enter character to remove from string: ");
    gets(toRemove);
    int toRemoveLength = findLength(toRemove);

    removePattern(str, toRemove, length, toRemoveLength);

    printf("String after removing '%s': %s", toRemove, str);

    return 0;
}