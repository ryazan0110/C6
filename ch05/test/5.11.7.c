/* n立方 */
#include <stdio.h>
double cubic(double n);
int main(void){
    double n;

    printf("Please you enter a double number: ");
    scanf("%lf", &n);
    cubic(n);

    return 0;
}
double cubic(double n){
    double t = n * n * n;
    printf("The %lg 's cubic is %lg.\n",n,t);
    return t ;
}