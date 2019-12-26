#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int pro_sum(int n, ...)
{
    va_list valist;
    int sum = 0;
    int j = 3;
    va_start(valist, n);

    for (int i = 0; i < j; i++) {
        sum += va_arg(valist, int);
    }

    va_end(valist);

    return n * sum; 
}

double average(int m, ...)
{
    va_list valist1;
    double sum1 = 0.0;
    va_start(valist1, m);

    for (int x = 0; x < m; x++) {
        sum1 += va_arg(valist1, int);
    }

    va_end(valist1);

    return sum1 / m;
}

void func(int num, ...)
{
    va_list valist2;
    const char *ch = "";
    va_start(valist2, num);

    for (int i = 0; i < num; i++) {
        ch = va_arg(valist2, char*);
        if(ch == "") break;
        printf("%d: %s", i, ch);
    }
    printf("\n");

    va_end(valist2);
}



int main() {
    printf("Product of sum and n: %d\n", pro_sum(2, 5,10,20));
    printf("Average of sum1: %f\n", average(4, 20,10,15,35));
    func(4, "Dark ","Nick ","Brook ","Bonnie ");
}
