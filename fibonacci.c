#include <stdio.h>

int main()
{
    int fibo,nacci;

    fibo = nacci = 1;

    do
    {
        printf("%d\n",fibo);
        fibo+=nacci;
        printf("%d\n",nacci);
        nacci+=fibo;
    } while( fibo < 2000 );

    return(0);
}
