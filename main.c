#include <stdio.h>

int main() {
    static double first, second;
    char count;
    int i = 0;
    double final = 0;

    printf("Enter two first and second operand: ");
    scanf("%lf %lf", &first, &second);

    while(1) {
        if(i > 0) {
            printf("Enter new oprand: ");
            scanf("%lf", &second);
        }

        printf("Enter an operator (+, -, *, /), "
               "if want to exit press x: ");
        while (getchar() != '\n') {}
        scanf("%c", &count);

        if(count == 'x')
            break;

        switch(count) {

            case '+':
                printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
            final = first + second;
            break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
            final = first - second;
            break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
            final = first * second;
            break;
            case '/':
                if (second != 0) {
                    printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
                    final = first / second;
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                    continue;
                }
            break;

            default:
                printf("Error, Invalid operand\n");
            continue;
        }
        first = final;
        i++;
        printf("\n");
    }

    printf("Total iteration = %d. Final result = %lf", i + 1, final);

}
