/*
Learn union
*/

#include <stdio.h>
#include <string.h>

union emp
{
    char empName[20];
    int empId;
    float sal;
};

typedef union emp EMP;

int main()
{
    EMP e1;
    // printf("\nSizeof the structure emp=%d",sizeof(EMP));
    printf("\nSizeof the union emp=%d\n",sizeof(EMP));

    e1.empId =1032;
    printf("\nid: %d",e1.empId);
    strcpy(e1.empName,"Kamlesh");
    printf("\nName: %s",e1.empName);
    e1.sal = 18500.50;
    
    printf("\nSal: %f", e1.sal);


    printf("\n\n");

    return 0;
}

