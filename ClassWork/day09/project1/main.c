#include <stdio.h>
#include <emp.h>

int main()
{
    EMP e;
    getDetails(&e);          //Get details of employee e
    printDetails(e);        //Print details of employee e

    printf("\n\n");
    return 0;
}

// gcc -Wall -g -c emp.c -I ./
// gcc -Wall -g -c main.c -I ./
// gcc  -o  empPrg main.o emp.o
