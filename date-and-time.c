#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t now;
    time(&now);
    printf("Now: %s", ctime(&now));
    
    time_t start, end;
    double diff = 0.0;
    
    time(&start);
    sleep(4);
    time(&end);
    diff = difftime(end, start);
    
    printf("启动： %s", ctime(&start));
    printf("启动成功： %s", ctime(&end));
    printf("启动用时： %f\n", diff);

    time_t a_t = time(NULL);
    struct tm *a_time;
    a_time = localtime(&a_t);
    printf("Now:%s", asctime(a_time));

    return 0;
}
