#include <stdio.h>

int main(int argc, char *argv[]) {
    int total_second;
    int minute, second;

    printf("input the second ");
    scanf("%d", &total_second);

    minute = total_second / 60;
    second = total_second % 60;

    printf("the time is %d:%d\n", minute, second);
    
    return 0;
}