#include <float.h>
#include <limits.h>
#include <stdio.h>
int main(void)
{
    printf("char型の最大値:%g\n",UCHAR_MAX);
    printf("char型の最小値:%g\n",CHAR_MIN);
    printf("float型の精度:%g\n",FLT_DIG);
    printf("Long double型の最大値:%d\n",LDBL_MAX);
    printf("int型の最小値:%d\n",INT_MIN);

    return 0;
}