//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int contains(int arr[], int len, int num);
//int main()
//{
//	/*
//		 需求：生成10个1~100之间的随机数存入数组,要求数据不能重复
//			   求出所有数据的和
//			   求所有数据的平均数
//			   统计有多少个数据比平均值小
//	*/
//	//1.定义数组
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	//生成10个1~100之间的随机数存入数组
//	//2. 设置种子
//	srand(time(NULL));
//	//生成随机数
//	for (int i = 0; i < len;)
//	{
//		int num = rand() % 10 + 1;
//		//把随机数存入数组，存入之前做一个判断，如果不存在，再进行添加
//		int flag = contains(arr, len, num);
//		if (!flag) 
//		{
//			arr[i] = num;
//			i++;
//		}
//	}
//	//遍历数组
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	//利用累加思想求数组中所有数据的和
//	int sum = 0;
//	for (int i = 0; i < len; i++)
//	{
//		sum = sum + arr[i];
//	}
//	
//	//求平均数
//	int avg = sum / len;
//
//	//统计有多少个数字比平均数要小
//	int count = 0;
//	for (int i = 0; i < len; i++) 
//	{
//		if (arr[i] < avg)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
////判断num在函数中，是否存在
////存在，返回1
////不存在，返回0
//int contains(int arr[], int len, int num) 
//{
//	for (int i = 0; i < len; i++) 
//	{
//		//i:依次表示数组中的每一个索引
//		//arr[i]:依次表示数组里面的每一个数据
//		if (arr[i] == num)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}