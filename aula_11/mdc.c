#include <stdio.h>

int mdc (int a, int b) {
    if (b > a)
        return mdc(b, a);
    if (b == 0)
        return a;
    return mdc (b, a % b);
}


int main() {
    int res = mdc(21, 12);
    printf("MDC: %d\n", res);
    return 0;
}