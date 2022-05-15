#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>

double findSqrt(double n){
    return sqrt(n);
}

int main()
{
    double r = findSqrt(9);
    printf("result = %.2lf \n",r);
    r = findSqrt(-9);
    printf("result = %.2lf \n",r);
}