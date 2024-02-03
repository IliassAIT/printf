#include "main.h"

int main(void) {
    char *str = "Hello, world!";
    char c = 'A';
    int num1 = 123;
    int num2 = -456;

    _printf("This is a test of my _printf function:\n");
    _printf("String: %s\n", str);
    _printf("Character: %c\n", c);
    _printf("Number (positive): %d\n", num1);
    _printf("Number (negative): %i\n", num2);

    return 0;
}
