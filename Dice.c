#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    printf("You rolled: %d\n", rand() % 6 + 1);
    return 0;
}