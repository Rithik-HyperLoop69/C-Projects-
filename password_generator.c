#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int length;

    char charset[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789"
        "!@#$%^&*()_+-=[]{}|;:,.<>?";

    int charsetSize = sizeof(charset) - 1;

    printf("Enter password length: ");
    scanf("%d", &length);

    if (length <= 0) {
        printf("Invalid length!\n");
        return 1;
    }

    srand(time(NULL));

    printf("\nGenerated Password: ");

    for (int i = 0; i < length; i++) {
        int index = rand() % charsetSize;
        printf("%c", charset[index]);
    }

    printf("\n");

    return 0;
}