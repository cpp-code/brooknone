#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    time_t now, end;
    double diff = 0.0;
    time_t a_t = time(NULL);
    struct tm *a_time;

    time(&now);
    
    printf("Now: %s, 启动", ctime(&now));
    
    sleep(4);
    time(&end);
    diff = difftime(end, now);
    a_time = localtime(&a_t);
    
    printf("启动成功： %s", ctime(&end));
    printf("启动用时： %f\n", diff);
    printf("Now:%s", asctime(a_time));

    return 0;
}
