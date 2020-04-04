#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    int test = 100;
    while (test > 0) {
        printf("%d\n", test);
        test--;
    }
    for (int i=0; i<100; i++) {
        printf("what? \n");
    }
    return 0;
}