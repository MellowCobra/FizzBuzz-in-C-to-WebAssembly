#include <stdio.h>

int fizz(int);
int buzz(int);

int main(int argc, char** argv) {

    for (int i = 1; i <= 100; i++) {
        if (!fizz(i) && !buzz(i)) {
            printf("%d", i);
        }

        if (fizz(i)) {
            printf("fizz");
        }

        if (buzz(i)) {
            printf("buzz");
        }

        printf("\n");
    }

    return 0;
}

int fizz(int n) {
    return n % 3 == 0;
}

int buzz(int n) {
    return n % 5 == 0;
}