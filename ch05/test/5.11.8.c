// This program computes moduli.
// Enter an integer to serve as the second operand: 256
// Now enter the first operand: 438
// 438 % 256 is 182
// Enter next number for first operand (<= 0 to quit): 1234567
// 1234567 % 256 is 135
// Enter next number for first operand (<= 0 to quit): 0
// Done


#include <stdio.h>
double cubic(double n);
int main(void){
    int secondOperand,firstOperand;
    int result;

    printf("Enter an integer to serve as the second operand: ");
    scanf("%d",&secondOperand);
    printf("Now enter the first operand:");
    scanf("%d",&firstOperand);
    while (firstOperand > 0)
    {
        /* code */
        
        result = firstOperand % secondOperand;
        printf("%d %% %d = %d\n",firstOperand,secondOperand,result);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d",&firstOperand);

    }
    
    
    printf("Done");
    return 0;
}

