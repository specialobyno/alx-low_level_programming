#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc - number of arguments
 * @argv - an array holding all the arguments
 * Return: 0 if success
*/
int main(int argc, char ** argv)
{
    int i = 0;
    while (i < argc) {
        printf("%s\n", *(argv + i));
        i++;
    }
    return (0);
}
