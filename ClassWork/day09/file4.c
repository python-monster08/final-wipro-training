/*
Learn about static variables
*/
#include <stdio.h>

int func1(int);


int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nret=%d\n",func1(n));
    printf("\nret=%d\n",func1(n));
    
    printf("\n\n");
    return 0;
}

int func1(int n)
{
    static int val;
    val+=1;
    n = val+n;
    return n;
}
