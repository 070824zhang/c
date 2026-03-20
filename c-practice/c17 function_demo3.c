#include<stdio.h>
/*
       需求：小陈考试成绩：基础题得分93，附加题得分10。
             小韩考试成绩：基础题得分87，附加题得分9。
             请问，谁的总分更高。

             最终格式：
                     返回值类型  函数名（形参，....）
                     {
                     函数体；
                     return 返回值；
                     }

            调用方式：
            用变量去接收函数的结果
            printf（"占位符"， 函数的调用）；
*/
int sum (int base,int additional) 
{
    int sum = base + additional;
    return sum;
}
int main() 
{
 int score1 = sum(93,10);
 int score2 = sum(87, 9);
 if (score1 > score2) 
 {
     printf("小陈的总分更高");
 }
 else if (score1 < score2)
 {
     printf("小韩的总分更高");
 }
 else 
 {
     printf("两人总分相同");
 }
 return 0;
}