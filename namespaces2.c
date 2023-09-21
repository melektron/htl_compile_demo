/*
Written by Nilusink & melektron
(c) 2023 - now
21.09.23, 10:07


*/

#include <stdio.h>


int test_variable = 1;


typedef struct
{
    int test_variable;
}
test_struct_t;

test_struct_t test_struct;


int myFunction()
{
    int test_variable = 2;

    printf("free from myFunction: %d\n", test_variable);
    printf("member from myFunction: %d\n", test_struct.test_variable);
}


int main()
{
    // setting structure value
    test_struct.test_variable = 3;

    printf("free from main: %d\n", test_variable);
    printf("member from main: %d\n", test_struct.test_variable);

    myFunction(1);

    return 0;
}