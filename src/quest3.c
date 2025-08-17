#include <stdio.h>

int FIBONACHI(int n);

int main() {
    int n;
    scanf("%d", &n);
    if (n<0) {
        printf("n/a\n");
        return 0;
    }
    printf("%d\n", FIBONACHI(n));
    return 0;
}

int FIBONACHI(int n) {
    if (n == 0) {
        return 0;
    } 
    if (n == 1) {
        return 1;
    }
    return FIBONACHI(n - 1) + FIBONACHI(n - 2);
}