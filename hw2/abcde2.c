// abcde2.c
// Yuxin Wang

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_reverse_alpha(const char *s) {
    if (strlen(s) <= 1) return 1;
    char c1 = tolower(s[0]);
    char c2 = tolower(s[1]);
    return c1 >= c2 && is_reverse_alpha(s + 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <word>\n", argv[0]);
        return 1;
    }

    printf("%s: %s\n", argv[1], is_reverse_alpha(argv[1]) ? "True" : "False");
    return 0;
}

