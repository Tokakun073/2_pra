#include <stdio.h>


int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main()
{
    int *p = a;
    printf("%d,p=%p , a=%p\n",a[p-a],p,a);
    

}