#include <stdio.h>
#include <stdlib.h>

#define CENTER "                              "   // 30+ spaces for centering

int main() {
    system("color 7F");   // Light gray CMD background

    int a, b;
    int sum, subt, mul;
    float div;
    double sqr,sqe;

    // ===== MAIN HEADING (dark blue, no unwanted background) =====
    printf("\n\n");
    printf("\033[32m"); // Dark Blue (CMD-safe)
    printf(CENTER "============================================================\n");
    printf(CENTER "                       WELCOME TO MY PROJECT                 \n");
    printf(CENTER "============================================================\n\n");
    printf("\033[32m");

    // INPUT SECTION 
    printf("\033[32m");  
    printf(CENTER "+-------------------- INPUT NUMBERS --------------------+\n");
    printf("\033[31m");
    printf(CENTER "¦  Enter first number   : ");
    scanf("%d", &a);

    printf(CENTER "¦  Enter second number  : ");
    scanf("%d", &b);
    printf("\033[32m");
    printf(CENTER "+--------------------------------------------------------+\n\n");
    printf("\033[32m");

    // CALCULATIONS 
    sum = a + b;
    subt = a - b;
    mul = a * b;
    div = (b == 0) ? 0 : (float)a / b;
    sqr = sqrt(a);
    sqe = sqrt(b);

    // RESULTS 
    printf(CENTER "+---------------------- RESULTS ------------------------+\n");

    // SUM 
    printf("\033[31m");
    printf(CENTER "¦  SUM                  :  %d + %d = %d\n", a, b, sum);

    // SUBTRACTION 
    printf("\033[31m");
    printf(CENTER "¦  SUBTRACTION          :  %d - %d = %d\n", a, b, subt);

    // MULTIPLICATION 
    printf("\033[31m");
    printf(CENTER "¦  MULTIPLICATION       :  %d * %d = %d\n", a, b, mul);

    // DIVISION 
    printf("\033[31m");
    if (b != 0)
        printf(CENTER "¦  DIVISION          :  %d / %d = %.2f\n", a, b, div);
    else
        printf(CENTER "¦  DIVISION          :  ERROR (Division by zero!)\n");
        
    // SQUARING
    printf("\033[31m");
    printf(CENTER "¦  SQUARE ROOT OF A    :  %2f = %2f\n", a, sqr);
    printf(CENTER "¦  SQUARE ROOT OF B    :  %2f = %2f\n", b, sqe);

    printf("\033[32m");
    printf(CENTER "+--------------------------------------------------------+\n");

    return 0;
}










