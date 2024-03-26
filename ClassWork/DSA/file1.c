#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int val;
    struct node *ptr;
};

typedef struct node NODE;

int main()
{
    NODE n1,n2,n3;
    NODE *temp=NULL;

    printf("\nAddress of n1= %ld",&n1);
    printf("\nAddress of n2= %ld",&n2);
    printf("\nAddress of n3= %ld",&n3);
    //assign values
    n1.val = 10;
    n1.ptr = NULL;

    n2.val = 20;
    n2.ptr = NULL;
    
    n3.val = 30;
    n3.ptr = NULL;
    
    //creating relationship bet nodes
    n1.ptr = &n2;
    n2.ptr = &n3;

    // traaversing of the list
    temp = &n1;

    printf("\n%d",n1.val);

    printf("\n%d",temp->val);

    //temp = &n2;
    //temp = n1.ptr;
    temp =  temp->ptr;
    printf("\n%d",temp->val);
    temp = temp->ptr;
    printf("\n%d",temp->val);
    temp = temp->ptr;
    if (temp == NULL)
        printf("\nEnd of the list\n");

    printf("\n\n");
    return 0; 
}
