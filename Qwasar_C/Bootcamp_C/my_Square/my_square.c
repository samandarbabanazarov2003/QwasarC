#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_square(int ustun, int qator) 
{
    int a, b;
    for(a = 0; a < qator ; a++)
    {
        for(b = 0; b < ustun; b++)
        {
            if( a == 0  || a ==  qator - 1)
            {
                if( b > 0 && b  <  ustun - 1)
                {
                    printf("-");
                    continue;
                }
                printf("o");
            }
            else if (b == 0 || b == ustun - 1) 
            {
                printf("|");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
        
        
int main(int ac, char **av)
{
    // if(ac != 3)
    // {
    //     return 0;
    // }
    int x = atoi(av[1]);
    int y = atoi(av[2]);

    my_square(x, y);
}
        
        
        
        
        
        
        
        
        