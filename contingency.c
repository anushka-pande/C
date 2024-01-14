#include <stdio.h>
int main() 
{
    int p, q, r;
    int tautology = 0;
    int contradiction = 0;
    for (p = 0; p <= 1; p++) 
    {
        for (q = 0; q <= 1; q++) 
        {
            for (r = 0; r <= 1; r++) 
            {
                char statement = (p && q) || (q && r) || (p && r);
                
                if (statement == 1) 
                {
                    tautology++;
                }
                if (statement == 0) 
                {
                    contradiction++;
                }
            }
        }
    }
    if (tautology == 8) 
    {
        printf("The expression is an example of tautology.\n");
    } 
    else if (contradiction == 8) 
    {
        printf("The expression is an example of contradiction.\n");
    } 
    else 
    {
        printf("The expression is an example of contingency.\n");
    }
    return 0;
}
