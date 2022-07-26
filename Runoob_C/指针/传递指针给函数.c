// #include <stdio.h>
// #include <time.h>

// void getSeconds(unsigned long *par);
// int main()
// {
//     unsigned long sec;
//     getSeconds(&sec); 
//     // 因为传给函数的是sec的内存地址，所以*par改变后可以直接影响到sec
//     /* 输出实际值 */
//     printf("Number of seconds: %d\n", sec);

//     return 0;
// }
// void getSeconds(unsigned long *par)
// {
//     /* 获取当前的秒数 */
//     *par=time(NULL);
//     return;
// }

// 接收数组作为参数
#include <stdio.h>
 
/* 函数声明 */
double getAverage(int *arr, int size);
 
int main ()
{
   /* 带有 5 个元素的整型数组  */
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;
   /* 传递一个指向数组的指针作为参数 */
   avg = getAverage( balance, 5 ) ; 
   /* 输出返回值  */
   printf("Average value is: %f\n", avg ); 
   return 0;
}

double getAverage(int *arr, int size)
{
  int    i, sum = 0;      
  double avg;          
  for (i = 0; i < size; ++i)
  {
    sum += arr[i];
  }
  avg = (double)sum / size;
  return avg;
}