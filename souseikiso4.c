#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double型の最大値:%g\n",DBL_MAX);
    printf("double型の最小値:%g\n",DBL_MIN);
    printf("double型の制度:%d\n",DBL_DIG);
    printf("int型の最大値:%d\n",INT_MAX);
    printf("int型の最小値:%d\n",INT_MIN);
    printf("char型 最小値:%d\n", CHAR_MIN);
    printf("char型 最大値:%d\n", CHAR_MAX);
    printf("short型 最小値:%d\n", SHRT_MIN);
    printf("short型 最大値:%d\n", SHRT_MAX);
    printf("long型 最小値:%ld\n", LONG_MIN); // %ld を使用 long decimal の略
    printf("long型 最大値:%ld\n", LONG_MAX); // %ld を使用
    printf("unsigned int型 最大値:%u\n", UINT_MAX); // 符号なし, %u を使用　unsigned の略
    printf("float型 最小値:%g\n", FLT_MIN);// %g 浮動小数点を最適な形で自動選択
    printf("float型 最大値:%g\n", FLT_MAX);
    printf("float型 有効桁数 (10進):%d\n", FLT_DIG);
    printf("double型 有効桁数 (10進):%d\n", DBL_DIG);
    return 0;
}