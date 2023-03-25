#include <stdio.h>

int main() {
    char c;

    printf("Enter string: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t' || c == '\r') { // пропускаем пробелы, табуляции и пустые строки
            continue;
        }
        putchar(c);
        while ((c = getchar()) != ' ' && c != '\t' && c != '\r' && c != '\n' && c != EOF) { // выводим символы слова
            putchar(c);
        }
        putchar('\n'); // переходим на новую строку после слова
    }

    return 0;
}
