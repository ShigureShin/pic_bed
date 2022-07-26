/* (type_name) expression */
#include <stdio.h>
 
int main()
{
    int sum = 17, count = 5;
    double mean;
 
    mean = (double) sum / count;
    printf("Value of mean : %f\n", mean );
    
    return 0;
}
// output:
// Value of mean : 3.400000
// tips:强制类型转换运算符的优先级大于除法