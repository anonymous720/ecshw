// collatz.c
// yuxin wang


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    char input[100];

    printf("> ");
    
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 1;
    }

    // 尝试解析为整数
    char extra;
    if (sscanf(input, "%d %c", &n, &extra) != 1) {
        fprintf(stderr, "%s: not a valid integer.\n", input);
        return 1;
    }

    // 检查是否是正整数
    if (n <= 0) {
        printf("%d: input must be a positive integer.\n", n);
        return 1;
    }

    // 输出序列
    int steps = 0;
    printf("%d", n);
    while (n != 1) {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        printf(" %d", n);
        steps++;
    }
    printf("\nThe total stopping time for %d is %d\n", n, steps);

    return 0;
}

