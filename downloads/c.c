#include <stdio.h>

// 函数原型
int test(int x, int y);

int main(void) {
    printf("%d", test(2, 3));
    printf("\n%d", test(2, 3));
}

int test(int x, int y) {
    return x == y ? (x + y) * 3 : x + y;
}