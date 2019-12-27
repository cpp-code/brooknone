#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

int cstm()
{
    struct tm custime;
    custime.tm_sec = 11;
    custime.tm_min = 22;
    custime.tm_hour = 11;
    custime.tm_mday = 1;
    custime.tm_mon = 5;
    custime.tm_year = 120;
    custime.tm_wday = 6;

    printf("One day is: %s", asctime(&custime));
}

int Stopwatch()
{
    clock_t start, finish;
    double total = 0.0;
    start = clock();
    for (int i = 0; i < 10000; i++)
    {

    }
    finish = clock();
    total = (double)(finish - start)/CLOCKS_PER_SEC;
    printf("CPU用时 %f 秒\n", total);
}

int rightnow()
{
    time_t now;
    time(&now);
    printf("Now: %s", ctime(&now));
}

int diftm()
{
    time_t begin, end;
    double diff = 0.0;
    time(&begin);
    printf("启动： %s", ctime(&begin));
    sleep(4);
    time(&end);
    printf("启动成功： %s", ctime(&end));
    
    diff = difftime(end, begin);
    printf("启动用时： %f\n", diff);
}

int main()
{
    cstm();
    Stopwatch();
    rightnow();
    diftm();

    return 0;
}