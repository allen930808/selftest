#include <stdio.h>
int main() {
    static double a, b;
    char count;
    int i = 0;
    double final = 0;

    printf("Enter two first and second operand: ");
    scanf("%lf %lf", &a, &b);

    while(1) {
        if(i > 0) {
            printf("Enter new oprand: ");
            scanf("%lf", &b);
        }
        printf("Enter an operator (+, -, *, /), "
               "if want to exit press x: ");
        while (getchar() != '\n') {}
        scanf("%c", &count);

        if(count == 'x')
            break;

        switch(count) {

            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", a, b, a + b);
            final = a + b;
            break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", a, b, a - b);
            final = a - b;
            break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", a, b, a * b);
            final = a * b;
            break;
            case '/':
                if (b != 0) {
                    printf("%.1lf / %.1lf = %.1lf\n", a, b, a / b);
                    final = a / b;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;
                }
            break;

            default:
                printf("Error, Invalid operand\n");
            continue;
        }
        a = final;
        i++;
        printf("\n");
    }

    printf("Total iteration = %d. Final result = %lf", i + 1, final);

}