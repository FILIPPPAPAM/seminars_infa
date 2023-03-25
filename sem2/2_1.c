#include <stdio.h>

int main() {
    int c;

    printf("String: ");

    while ((c = getchar()) != '\n') {
        if (c != ' ' && c != '\t' && c != '\r') {
            putchar(c);
        }
    }

    printf("\n");

    return 0;
}
