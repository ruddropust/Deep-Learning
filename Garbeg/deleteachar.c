#include <stdio.h>
#include <string.h>

void deleteChar(char *str, char ch) {
    int i, j;
    int len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }
            len--;
            i--;
        }
    }
}

int main() {
    char str[100];
    char ch;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to delete: ");
    scanf("%c", &ch);

    deleteChar(str, ch);

    printf("String after deleting '%c': %s\n", ch, str);

    return 0;
}