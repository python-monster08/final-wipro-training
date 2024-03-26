#include <stdio.h>

enum States{
Karanataka=101,
Odisa,
Kerala=401,
Telengana,
AP,
MadhyaPradesh,
Maharastra,
Assam
};

int main()
{
    enum States IStates;
    IStates = Odisa;
    printf("%d", IStates);
    printf("\n\n");
    return 0;
}
