#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a = 2.07f;
    double b = 0.15f;
    double x = -0.8f;
    double c;
    double z;
    double res;
    c = asin(2 * x);
    z = fabs(b - log(a * x - 2));
    res = c/z;
    printf("Result is %f\n", res);
    return 0;
}
