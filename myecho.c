#include <stdio.h>
#include <unistd.h>          /* for write func */
#include <stdlib.h>          /* for exit func */

int main(int argc, char* argv[])
{
    int i = 0;
    for(i = 1; i < argc-1; ++i)
    {
        printf("%s ", argv[i]);
    }

    printf("%s\n", argv[i]);

    return 0;
}