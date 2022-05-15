#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

double findSqrt(double n){
    if(n > 0) {
        errno = 0;
        return sqrt(n);
    }
    else {
    // No evident values for error
        errno = EPERM;
        return 0;
    }
}

int main()
{
    double n = 0;
    printf("Enter a number: ");
    std::cin >> n;
    double r = findSqrt(n);
    if(errno!=0)
        printf("Cannot get sqrt of %.2lf : %s", n, strerror(errno));
    else
        printf("sqrt(%.2lf) = %.2lf \n", n, r);
}