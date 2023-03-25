#include <stdio.h>

int main() {
    char c;

    printf("Enter string: ");

    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\t' || c == '\r') { // ���������� �������, ��������� � ������ ������
            continue;
        }
        putchar(c);
        while ((c = getchar()) != ' ' && c != '\t' && c != '\r' && c != '\n' && c != EOF) { // ������� ������� �����
            putchar(c);
        }
        putchar('\n'); // ��������� �� ����� ������ ����� �����
    }

    return 0;
}
