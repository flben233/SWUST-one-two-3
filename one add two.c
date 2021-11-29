/*
 * Problem: 1550-L (one + two = 3 数组 难度3)
 * User: 5120210510
 * Language: Clang18
 * Result: Accepted
 * Time: 1 MS  Memory: 3352 KB
 */
#include "stdio.h"
#include "string.h"

int main()
{
    char a[100] = { '\0' };
    int i, b, c, d, e, f, jieguo;
    while (1) {
        i = 0, b = 0, c = 0, d = 0, e = 0, f = 0, jieguo = 0;
        strcpy(a, "");        //用于清空数组a中数据
        char t[6] = "oooooo";
        //***************以上为初始化操作*******************
        for (i = 0; i < 6; i++) {
            scanf("%s", a);
            if (a[0] == '=') {
                break;
            }
            else {
                if (strcmp(a, "one") == 0) {
                    t[b] = 1;
                    b++;
                }
                else if (strcmp(a, "two") == 0) {
                    t[b] = 2;
                    b++;
                }
                else if (strcmp(a, "three") == 0) {
                    t[b] = 3;
                    b++;
                }
                else if (strcmp(a, "four") == 0) {
                    t[b] = 4;
                    b++;
                }
                else if (strcmp(a, "five") == 0) {
                    t[b] = 5;
                    b++;
                }
                else if (strcmp(a, "six") == 0) {
                    t[b] = 6;
                    b++;
                }
                else if (strcmp(a, "seven") == 0) {
                    t[b] = 7;
                    b++;
                }
                else if (strcmp(a, "eight") == 0) {
                    t[b] = 8;
                    b++;
                }
                else if (strcmp(a, "nine") == 0) {
                    t[b] = 9;
                    b++;
                }
                else if (strcmp(a, "zero") == 0) {
                    t[b] = 0;
                    b++;
                }
                else if (strcmp(a, "+") == 0) {
                    t[b] = '+';
                    b++;
                }
            }
        }
        for (c = 0; c < 2; c++) {   //判断加号前的数字的位数
            if (t[c] == '+') {
                break;
            }
        }
        if (c == 1) {    //将加号前的数字按照位数还原
            d = t[0];
        }
        else if (c == 2) {
            d = t[0] * 10 + t[1];
        }
        while (c < 4) {   //判断加号后的数字的位数
            c++;
            if (t[c] == 'o') {
                c--;
                break;
            }
            f++;
        }
        if (f == 1) {   //将加号后的数字按照位数还原
            e = t[c];
        }
        else if (f == 2) {
            e = t[c - 1] * 10 + t[c];
        }
        if (d == 0 && e == 0) {    //如果两数均为zero则结束
            break;
        }
        else {      //否则输出结果
            jieguo = d + e;
            printf("%d\n", jieguo);
        }
    }
    return 0;
}
