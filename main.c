#include <stdio.h>
#include <stdbool.h>
#include <time.h>

bool isDigitsAreEqualFromZeroToFour(int a, int b, int c) {
    if(a == b && b == c) {
        if(a == 0 || a == 1 || a == 2 || a == 3 || a == 4) {
            return true;
        }
    }
    return false;
}

int main() {
    int a, b, c = 0;
    int deposit = 5000;
    int moveCost = 150;
    time_t t1;
    srand( (unsigned) time (&t1));
    while(deposit >= moveCost) {
        deposit -= moveCost;
        a = rand() % 8;
        b = rand() % 8;
        c = rand() % 8;
        if(a == 6 && b == 6 && c == 6) {
            deposit -= 500;
            printf("Result: %d  %d  %d; You lost 500 deposit\n", a, b, c);
        }
        if (isDigitsAreEqualFromZeroToFour(a, b, c)) {
            deposit += 500;
            printf("Result: %d  %d  %d; You won 500 deposit\n", a, b, c);
        }
        if (a == 5) {
            if (a == 5 && b == 5) {
                if (a == 5 && b == 5 && c == 5) {
                    deposit += 600;
                    printf("Result: %d  %d  %d; You won 600 deposit\n", a, b, c);
                }
                deposit += 200;
                printf("Result: %d  %d  %d; You won 200 deposit\n", a, b, c);
            }
            deposit += 100;
            printf("Result: %d  %d  %d; You won 100 deposit\n", a, b, c);
        }
        if (a == 7) {
            if (a == 7 && b == 7) {
                if (a == 7 && b == 7 && c == 7) {
                    printf("Result: %d  %d  %d; You won !\n", a, b, c);
                    break;
                }
                deposit += 600;
                printf("Result: %d  %d  %d; You won 600 deposit\n", a, b, c);
            }
            deposit += 300;
            printf("Result: %d  %d  %d; You won 300 deposit\n", a, b, c);
        }
        printf("Result: %d  %d  %d; You won nothing\n", a, b, c);
    }
    printf("\nGame over ! Your deposit: %d", deposit);
    return 0;
}