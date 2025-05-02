#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF) {
        switch (ch) {
            case '\n':  printf("\\n\n");      break;
            case '\t':  printf("\\t");        break;
            case '\b':  printf("\\b");        break;
            case '\f':  printf("\\f");        break;
            case '\0':  printf("\\0");        break;
            case '\\':  printf("\\\\");       break;
            case '\v':  printf("\\v");        break;
            case '\r':  printf("\\r");        break;
            case '\a':  printf("\\a");        break;
            default:
                if (ch >= 32 && ch <= 126) {
                    putchar(ch);
                } else {
                    printf("\\%03o", ch);
                }
                break;
        }
    }

    return 0;
}

