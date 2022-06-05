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
    double n = 0;
    printf("Enter a number: ");
    std::cin >> n;
    double r = findSqrt(n);
    printf("sqrt(%.2lf) = %.2lf \n", n, r);
}