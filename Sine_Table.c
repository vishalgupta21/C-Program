/* Example using sin */

#include <stdio.h>
#include <math.h>

int main()
{
    /* Define temporary variables */
    double value;
    double result;

    /* Enter the value we will find the sin of */
    printf("Enter the value we will find the sin of");
	scanf("%lf",&value);
    if(value>0 && value<1){
    /* Calculate the Sine of value */
    result = sin(value);

    /* Display the result of the calculation */
    printf("The Sine of %lf is %lf\n", value, result);
	}
    return 0;
}
