#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double findSqrt(double n){
    if(n > 0)
        return sqrt(n);
    else
    // No evident values for error
        return 0;
}

int main()
{
    double r = findSqrt(9);
    printf("result = %.2lf \n",r);
    r = findSqrt(-9);
    printf("result = %.2lf \n",r);
}