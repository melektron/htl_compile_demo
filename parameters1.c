/*
Written by Nilusink & melektron
(c) 2023 - now
21.09.23, 10:07

Function parameters example
*/

#include <stdio.h>


int timesTwo(int number)
{
    return number * 2;
}


int main()
{
    int my_value = 5;

    int result = timesTwo(my_value);

    printf("my_value=%d, result=%d\n", my_value, result);

    return 0;
}