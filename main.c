#include <stdio.h>

int main(int argc, char *argv[]) {
    int total_second;
    int hour, minute, second;

    printf("input the second: ");
    scanf("%d", &total_second);

    hour = total_second / 3600;
    minute = (total_second % 3600) / 60;
    second = total_second % 60;

    printf("The time for %d second is %d %d %d\n", total_second, hour, minute, second);

    return 0;
}