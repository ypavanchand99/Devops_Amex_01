#include <stdio.h>
int main() {    

    int number1, number2, addn;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    addn = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, addn);
    return 0;
}

