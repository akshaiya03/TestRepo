#include <stdio.h>

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int multiply(int a, int b) {
    int product = a * b;
    return product;
}

int main() {
    int x = 5;
    int y = 10;
    
    int result = add(x, y);
    printf("Sum: %d\n", result);
    
    result = multiply(x, y);
    printf("Product2: %d\n", result);
    
    return 0;
}
