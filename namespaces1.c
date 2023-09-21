/*
Written by Nilusink & melektron
(c) 2023 - now
21.09.23, 10:07


*/

#include <stdio.h>


int test_variable = 1;



int myFunction()
{

    int test_variable = 2;

    printf("from myFunction before: %d\n", test_variable);

    {
        int test_variable = 3;
        printf("from myFunction inner: %d\n", test_variable);
    }

    printf("from myFunction after: %d\n", test_variable);
}


int main()
{
    printf("from main: %d\n", test_variable);

    myFunction(1);

    return 0;
}