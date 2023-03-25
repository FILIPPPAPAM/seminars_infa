#include <stdio.h>

int main() {
    printf("String: ");
    int c, prev = '\0', count = 1;
    while ((c = getchar()) != '\n') {
        if (c == prev) {
            count++;
        } else {
            if (count >= 3) {
                putchar(prev);
                for (int j = 1; j < count; j++) {
                    putchar(prev);
                }
                putchar('\n');
            }
            count = 1;
            prev = c;
        }
    }
    if (count >= 3) {
        putchar(prev);
        for (int j = 1; j < count; j++) {
            putchar(prev);
        }
        putchar('\n');
    }

    return 0;
}
