/*
Written by Nilusink & melektron
(c) 2023 - now
21.09.23, 10:07

Function parameters example
*/

#include <stdio.h>


void timesTwoAndTimesThree(int number, int *times_two, int *times_three)
{
    *times_two = number * 2;
    *times_three = number * 3;
}


int main()
{
    int my_value = 5;
    
    int result1, result2;

    timesTwoAndTimesThree(my_value, &result1, &result2);

    printf("my_value=%d, result1=%d, result2=%d\n", my_value, result1, result2);

    return 0;
}