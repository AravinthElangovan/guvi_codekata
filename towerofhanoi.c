#include <stdio.h>
void towerOfHanoi(int n, char fromstick, char tostick, char midstick)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from stick %c to stick %c", fromstick, tostick);
        return;
    }
    towerOfHanoi(n-1, fromstick, midstick, tostick);
    printf("\n Move disk %d from stick %c to stick %c", n, fromstick, tostick);
    towerOfHanoi(n-1, midstick, tostick, fromstick);
}
int main()
{
    int n=3;
         towerOfHanoi(n, 'A', 'C', 'B');  
    return 0;
}
