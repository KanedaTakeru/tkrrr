#include <float.h>
#include <limits.h>
#include <stdio.h>
int main(void)
{
    printf("long double型の最大値:%Lf\n",LDBL_MAX);
    printf("long double型の最小値:%Lf\n",LDBL_MIN);
    printf("long double型の精度:%Lf\n",LDBL_DIG);

    return 0;
}