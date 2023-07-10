#include <stdio.h>
#include "main.h"
/*
* main - Prints the name of the program
* @argc - argument count
* @argv - string array of argument
* Return: 0 if successful
*/

int main(int argc __attribute__((unused)), char *argv[])
{
    printf("%s\n", argv[0]);
    return (0);
}

