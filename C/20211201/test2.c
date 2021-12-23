#include <stdio.h>
#include <string.h>

//int main()
//{
//    char arr1[30] = "abcd";
//    char arr2[] = "ef";
//    strcat(arr1,arr2);//自己给自己追加不能用strcat
//    printf("%s\n",arr1);
//}

//int is_left_move(char *str1, char *str2)
//{
//    int len1 = strlen(str1);
//    int len2 = strlen(str2);
//    if (len1 != len2)
//        return 0;
//    //1.在str1字符串中追加一个str1字符串
//    strncat(str1, str1, len1);
//    //2.判断str2指向的字符串是否是str1指向的字符串的子串
//    //strstr---查找字符串的
//    char *ret = strstr(str1, str2);
//    if (ret == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//}
//
//int main()
//{
//    char arr1[30] = "abcdef";
//    char arr2[] = "cdefab";
//    int ret = is_left_move(arr1, arr2);
//    if (ret == 1)
//    {
//        printf("yes");
//    }
//    else
//    {
//        printf("no");
//    }
//}