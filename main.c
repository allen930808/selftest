#include <stdio.h>

int add(const int a, const int b) {
    return a+b;
}
int main(void) {
    const int a = 5;
    const int b = 9;
    printf("%d\n", add(a, b));
}


