#include <stdio.h>
#include <float.h>
// 定义了宏，在程序中可以使用这些值和其他有关实数二进制表示的细节。

int main()
{
    printf("float max storage bytes: %lu\n", sizeof(float));
    printf("float min : %E\n", FLT_MIN);
    printf("float max : %E\n", FLT_MAX);
    printf("precise value: %d\n", FLT_DIG);

    return 0;
}

// %E 为以指数形式输出单、双精度实数