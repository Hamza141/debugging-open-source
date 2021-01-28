#include "stdio.h"

void func2() {
    printf("Inside func2\n");
}

int func1(int val) {
    func2();
    val *= 2;
    return val;
}

int main() {
    int out = func1(3);
    printf("func1: %d\n", out);
    return 0;
}