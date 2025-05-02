#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int valid(int r, int c) {
    return r >= 1 && r <= 3 && c >= 1 && c <= 3;
}

void print_board(int row, int col) {
    for (int i = 0; i < 3; i++) {
        if (i > 0) {
            printf("#######################\n");
        }

        if (i != row - 1) {
            for (int j = 0; j < 7; j++) {
		printf("       #       #        \n");
            }
        } else {
            if (col == 1) {
                printf("       #       #        \n");
                printf(" x   x #       #	\n");
                printf("  x x  #       #        \n");
                printf("   x   #       #        \n");
                printf("  x x  #       #        \n");
                printf(" x   x #       #        \n");
                printf("       #       #        \n");
            } else if (col == 2) {
                printf("       #       #        \n");
                printf("       # x   x #        \n");
                printf("       #  x x  #        \n");
                printf("       #   x   #        \n");
                printf("       #  x x  #        \n");
                printf("       # x   x #        \n");
                printf("       #       #        \n");
            } else if (col == 3) {
                printf("       #       #        \n");
                printf("       #       # x   x  \n");
                printf("       #       #  x x   \n");
                printf("       #       #   x    \n");
                printf("       #       #  x x   \n");
                printf("       #       # x   x  \n");
                printf("       #       #        \n");
            }
        }
    }
}

int main() {
    int row, col;
    int status;

    while (1) {
        status = scanf("%d%d", &row, &col);
        if (status == EOF) {
            return 1; 
        }

        if (status != 2) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
                if (!isspace(ch)) {
                    fprintf(stderr, "Illegal character in input \"%c\"\n", ch);
		    return 1;
                    break;
                }
            }
            return 1;
        }

        if (!valid(row, col)) {
            fprintf(stderr, "%d,%d is not a valid square; the numbers must be between 1 and 3 inclusive\n", row, col);
	    continue;       }

        break; 
    }

    print_board(row, col);
    return 0;
}

