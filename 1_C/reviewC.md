# Some function

## strcpy拷贝字符串
```C
char* strcpy(char* dest, char* src);
```
这个函数将`src`拷贝到`dest`，一定要注意`src`中字符串会自动添加`\0`到`dest`中去，所以`dest`长度要比`src`长度至少多一个。不然会出现`segmentation fault`

## strlen判断字符串长度
```C
size_t strlen(const char* str);
include <string.h>
```

不会把字符串结尾的`\0`计算进去的。

## strcat拼接字符串。
```C
char* strcat(char* dest, char* src);
```
将`src`拷贝到`dest`中，返回`dest`.

## strcmp比较字符串
```C
int strcmp(char* str1, char* str2);
```
返回0，大小相等。比较第一个分歧字符，谁大谁小。

## strtok分割字符串
```C
char* strtok(char* str, const char* delimiters);
```
这个完全不熟悉。