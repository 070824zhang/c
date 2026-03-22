//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//int main() 
//{
//	/*
//	     需求：生成10个1~100之间的随机数存入数组
//	           求出所有数据的和
//	*/
//	//1.定义数组
//	int arr[10] = { 0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	//生成10个1~100之间的随机数存入数组
//	//2. 设置种子
//	srand(time(NULL));
//	//生成随机数
//	for (int i = 0; i < len; i++) 
//	{
//		
//		int num =  rand() % 100 + 1 ;
//		//把随机数存入数组
//		arr[i] = num;
//		printf("%d\n",arr[i]);
//	}
//	//利用累加思想求数组中所有数据的和
//	int sum = 0;
//	for ( int i = 0;i <len;i++) 
//	{
//		sum = sum + arr[i];
//	}
//	printf("%d\n", sum);
//	return 0;
//}