#include "tests_functions.h"

void test_unittests_function_1()
{
    printf("Function function1 expected to return %d", function1());
}

int main(int argc, char* argv[])
{
    int func = atoi(argv[1]);

    switch(func)
    {
        case 1:
            test_unittests_function_1();
            break;
        default:
            break;
    }

    return 0;
}

// li e concordo com os termos da aps
