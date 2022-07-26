#include <stdio.h>
 
int main()
{
   int c;
   int a = 10;
   c = a++; 
   printf("先赋值后运算：\n");
   printf("Line 1 - c 的值是 %d\n", c );
   printf("Line 2 - a 的值是 %d\n", a );
   a = 10;
   c = a--; 
   printf("Line 3 - c 的值是 %d\n", c );
   printf("Line 4 - a 的值是 %d\n", a );
 
   printf("先运算后赋值：\n");
   a = 10;
   c = ++a; 
   printf("Line 5 - c 的值是 %d\n", c );
   printf("Line 6 - a 的值是 %d\n", a );
   a = 10;
   c = --a; 
   printf("Line 7 - c 的值是 %d\n", c );
   printf("Line 8 - a 的值是 %d\n", a );
 
}

/*
    优先级：
        后缀        () [] -> . ++ --
        一元        + - ! ~ ++ -- (type) * & sizeof     右到左
        乘除        * / %
        加减        + - 
        移位        << >>
        关系        < <= > >=
        相等        == !=
        位与AND     &
        位异或XOR   ^
        位或OR      |
        逻辑与AND   &&
        逻辑或OR    ||
        条件        ?:                                  右到左
        赋值        = += -= *= /= %= >>= <<= &= ^= \=   右到左
        逗号        ,

*/