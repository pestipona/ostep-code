// To run this code: Run in the terminal the following command
// Compile the Program first: gcc -o cpu cpu.c -Wall
// Then Run the executable with arguments: ./cpu Hello World

#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
	fprintf(stderr, "usage: cpu <string>\n");
	exit(1);
    }
    char *str = argv[1];

    while (1) {
	printf("%s\n", str);
	Spin(1);
    }
    return 0;
}

