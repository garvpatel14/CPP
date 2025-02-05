#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int octal = 0, decimal = 0, i = 0, remainder;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }
    
    i = 1;
    while (decimal != 0) {
        remainder = decimal % 8;
        octal += remainder * i;
        decimal /= 8;
        i *= 10;
    }
    
    printf("Octal equivalent: %d\n", octal);
    
    return 0;
}
