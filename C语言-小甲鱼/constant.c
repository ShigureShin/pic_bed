#include <stdio.h>

#define URL "http://www.fishC.com"
#define NAME "FishC Work"
#define BOSS "xiaojiayu"
#define YEAR 2010
#define MONTH 5
#define DAY 20

int main()
{
    printf("%s %dyear %dmonth %dday\n", NAME, YEAR, MONTH, DAY);
    printf("%s was found by %s\n", NAME, BOSS);
    printf("%s's URL is %s\n", NAME, URL);

    return 0;
}