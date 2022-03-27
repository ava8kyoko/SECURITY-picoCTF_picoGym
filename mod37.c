#include <stdio.h>

int main(void)
{
    int nbr[] = {202, 137, 390, 235, 114, 369, 198, 110, 350, 396, 390, 383, 
                    225, 258, 38, 291, 75, 324, 401, 142, 288, 397};
    int total = 22;
    int *converted;
    int i = -1;

    while (++i < total)
    {
        converted[i] = nbr[i]%37;
        printf("%d ", converted[i]);
    }
    
    return (0);
}
