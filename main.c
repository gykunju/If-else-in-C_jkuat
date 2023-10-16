#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 7;
    if(a < 0)
    {
        printf("The number %d is negative\n",a);
    }else if(a == 0){
        printf("The number %d is 0\n",a);
    }else{
        printf("The number %d is positive\n",a);
    }
    return 0;
}
