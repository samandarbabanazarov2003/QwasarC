#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char ** argv)
{
    int a, b;
    for(int i = 1; i < argc; i++)
    {
        a = open(argv[i], O_RDONLY);
        if(a < 0)
        {
            perror(argv[i]);
            continue;
        }
        while(read(a, &b,1) == 1)
        {
                write(STDOUT_FILENO, &b,1);
        }
    close(a);
    }
}