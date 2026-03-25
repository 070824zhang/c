//#include<stdio.h>
//#include<string.h>
//int main() 
//{
//	/*
//	      键盘录入一个字符串，统计该字符串中大写字母字符，小写字母字符，数字字符出现次数
//	      （不考虑其他字符）
//	
//	*/
//
//	//1.键盘录入一个字符串
//	printf("请输入一个字符串\n");
//	char str[100];
//	scanf("%s", str);
//
//	//2.计数器思想     统计该字符串中大写字母字符，小写字母字符，数字字符出现的次数
//	//变量 a   a++     遍历字符串得到里面的每一个字符
//
//	int bigcount = 0;
//	int smallcount = 0;
//	int numbercount = 0;
//
//	for (int i = 0; i < strlen(str); i++) 
//	{
//		char c = str[i];
//		if (c >= 'a' && c <= 'z')
//		{
//			smallcount++;
//		}
//		else if (c >= 'A' && c <= 'Z') 
//		{
//			bigcount++;
//		}
//		else if (c >= '0' && c <= '9')
//		{
//			numbercount++;
//		}
//	}
//
//	printf("大写字符出现了%d次\n", bigcount);
//	printf("小写字符出现了%d次\n", smallcount);
//	printf("数字字符出现了%d次\n", numbercount);
//
//	return 0;
//}