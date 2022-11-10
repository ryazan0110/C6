/* n立方 */
#include <stdio.h>
double Temperatures(double temperC);

int main(void){
    double temperC;
    
    printf("Please enter temper(摄氏度): ");
    while (scanf("%lf", &temperC) == 1)
    {
        Temperatures(temperC);
        
        printf("Enter next fahrenheit!(q to quit):");
    }
    printf("Done\n");



    

    return 0;
}




double Temperatures(double temperC){
    //摄氏温度 = 5.0/9.0 * (华氏温度 - 32.0)
    //开氏温度 = 摄氏温度 + 273.16

    double F,K;
    F = 32.0 + 9.0/5.0 * temperC;
    K = temperC + 273.16;
    printf("%.1f C temperture equal \n",temperC);
    printf("%.1f F \n",F);
    printf("%.1f K \n",K);
    return  temperC;
}
