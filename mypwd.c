#include <stdio.h>           /* for printf func */
#include <unistd.h>          /* for getcwd func */

#define COUNT 1000

int main()
{
    /* Making buffer */
    char buf[COUNT];

    /* Get current working directory and print it */
	getcwd(buf, COUNT);
	printf("%s\n", buf);

    return 0;
}