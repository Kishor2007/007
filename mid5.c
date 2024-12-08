#include <stdio.h>

int main() {
    char str[100], replaceChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to replace spaces: ");
    scanf("%c", &replaceChar);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = replaceChar;
        }
    }
    printf("Modified string: %s", str);

    return 0;
}