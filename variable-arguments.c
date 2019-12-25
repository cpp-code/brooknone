#include <stdio.h>
#include <stdarg.h>

int pro_sum(int n, ...)
{
    va_list valist;
    int sum = 0;
    int i;
    int j = 3;
    va_start(valist, n);

    for (i = 0; i < j; i++) {
        sum += va_arg(valist, int);
    }

    va_end(valist);

    return n * sum; 
}

double average(int m, ...)
{
    va_list valist1;
    double sum1 = 0.0;
    int x;
    va_start(valist1, m);

    for (x = 0; x < m; x++) {
        sum1 += va_arg(valist1, int);
    }

    va_end(valist1);

    return sum1 / m;
}


int main() {
    printf("Product of sum and n: %d\n", pro_sum(2, 5,10,20));
    printf("Average of sum1: %f\n", average(4, 20,10,15,35));
}
