/* 打开文件 */
// fopen() 函数来创建一个新的文件或者打开一个已有的文件
// 这个调用会初始化类型FILE的一个对象
// FILE *open( const char *filename, const char *mode);
// r、w、a、r+、w+、a+
// 如果是二进制文件，则需要加上b，如rb、rb+

/* 关闭文件 */
// fclose() 
// 成功关闭文件，则返回0，
// 如果关闭时发生错误，则返回EOF
// 实际：清空缓冲区中数据，关闭文件，并释放用于该文件的所有内存

/* 写入文件 */
// int fputc(int c, FILE *p);
// 写入成功会返回写入的字符，错误则返回EOF

// int fputs(const char *s, FILE *fp);
// 将字符串s写入fp所指的输出流中。成功返回一个非负值，错误EOF

/* 读取文件 */ 
// int fgetc( FILE * fp );
// 从 fp 所指向的输入文件中读取一个字符。

// char *fgets( char *buf, int n, FILE *fp );
// 从 fp 所指向的输入流中读取 n - 1 个字符。
// 它会把读取的字符串复制到缓冲区 buf，
// 并在最后追加一个 null 字符来终止字符串。
// 这个函数在读取最后一个字符之前就遇到一个换行符 '\n' 或文件的末尾 EOF，则只会返回读取到的字符，包括换行符。
