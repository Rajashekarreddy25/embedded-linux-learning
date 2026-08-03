
#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int count = 1;

        while (str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c", str[i]);

        if (count > 1)
            printf("%d", count);
    }

    printf("\n");

    return 0;
}
