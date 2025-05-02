// abcde1.c
// Yuxin Wang


// abcde1.c
#include <stdio.h>
#include <string.h>

int is_reverse_alpha(const char *s) {
    if (strlen(s) <= 1) return 1;
    return s[0] >= s[1] && is_reverse_alpha(s + 1);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <word>\n", argv[0]);
        return 1;
    }

    printf("%s: %s\n", argv[1], is_reverse_alpha(argv[1]) ? "True" : "False");
    return 0;
}

