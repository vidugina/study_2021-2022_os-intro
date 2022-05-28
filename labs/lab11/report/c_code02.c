#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int num = rand()% 70-35;
    int n;
    if (num == 0){n=0;}
    else if (num > 0){n=1;}
    else {n=2;}
    return(n);
}
