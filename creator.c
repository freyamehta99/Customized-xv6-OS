#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[])
{
    int k, n, id=0;
    double x=0, z;

    if(argc < 2)
    {
        n = 1;
    }
    else
    {
        n = atoi(argv[1]);
    }

    if(n<0 || n>100)
    {
        n = 2;
    }

    x = 0;

    for(k=0; k<n; k++)
    {
        id = fork();
        if(id < 0)
            printf(1, "%d failed in fork!\n", getpid());
        else if(id > 0)
        {
            // Parent
            printf(1, "Parent with pid %d creating child with pid %d\n", getpid(), id);
            wait();
        }
        else
        {
            // Child
            printf(1, "Child created with pid %d\n", getpid());
            for(z=0;z<100000.0;z+=0.0001)
		{
            // Random calculation for wasting CPU time
            	x = x + 1.23*34.56;
            	x = x + 1.23;
            	x = x + 34.56;
		}
            break;
        }
    }
    exit();
}
