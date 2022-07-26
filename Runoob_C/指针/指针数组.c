#include <stdio.h>
 
const int MAX = 4;
 
int main ()
{
//    const char *names[] = {
//                    "Zara Ali",
//                    "Hina Ali",
//                    "Nuha Ali",
//                    "Sara Ali",
//    };
//    int i = 0;
//    for ( i = 0; i < MAX; i++)
//    {
//       printf("Value of names[%d] = %s\n", i, names[i]);
//    }

    // 将var中三个整数地址存储在ptr指针数组中
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX-1];
   for (i = 0; i < MAX-1; i++)
   {
      ptr[i] = &var[i]; /* 赋值为整数的地址 */
   }
   for ( i = 0; i < MAX-1; i++)
   {
      printf("Value of var[%d] = %d\n", i, *ptr[i]);
   }

   return 0;
}