// Enter a height in centimeters: 182
// 182.0 cm = 5 feet, 11.7 inches   
// Enter a height in centimeters (<=0 to quit): 168.7
// 168.7 cm = 5 feet, 6.4 inches
// Enter a height in centimeters (<=0 to quit): 0
// bye

#include <stdio.h>
#define FEET_TO_CM_100 30.48
#define INCHES_TO_CM_100 2.54
int main(void){
    double enterCM;
    while (enterCM > 0)
    {
        printf("Enter a height in centimeters (<=0 to quit):");
        scanf("%lf",&enterCM);
        int feet;
        double inches;

        feet = enterCM / FEET_TO_CM_100;
        //剩余英尺 = 剩余cm / 2.54
        inches = (enterCM - feet * FEET_TO_CM_100) / INCHES_TO_CM_100;
        printf("%.1lf cm = %d feet, %.1lf inches\n",enterCM,feet,inches);
    }
    
    
    return 0;
}