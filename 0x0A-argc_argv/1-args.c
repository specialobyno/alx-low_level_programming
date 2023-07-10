#include <stdio.h>
#include "main.h"

/**
* main - prints the number of argument passed to it
* @argc - number of arguments passed to it
* @argv[] - array containing all command line parameters
* Return: 0 on success, non-zero otherwise (errno)
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
    printf("%d\n", argc - 1);
    return (0);
}
