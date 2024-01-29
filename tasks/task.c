#include <stdio.h>
#include <stdlib.h>

/**
 *argv[1] - first number to add
 *argv[2] - second number to add
 */
int main(int argc, char *argv[])
{
    int num1, num2;
    if (argc != 3)
    {
        printf("Error: Wrong number of arguments\n");
        return 1;
    }
    // Cast string input to integer and validate
    num1 = atoi(argv[1]);
    if (num1 < 1)
    {
        printf("Error: First parameter is not a number\n");
        return 2;
    }
    num2 = atoi(argv[2]);
    if (num2 < 1)
    {
        printf("Error: Second parameter is not a number\n");
        return 3;
    }
    // Add and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
