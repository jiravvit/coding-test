#include <stdio.h>
#include <time.h>

int main() {
    time_t tmi;
    struct tm* utcTime;
    
    time(&tmi);
    utcTime = gmtime(&tmi);

    printf("%d\n%d\n%d\n", utcTime->tm_year +1900, utcTime->tm_mon + 1, utcTime->tm_mday); 
}
