//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() 
//{
//	/*
//	     需求：定义一个数组，存入1~5.要求打乱数组数组中所有数据的顺序
//	*/
//	//定义数组
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	//遍历数组，得到每一个元素，让这个元素和随机所有索引处的元素进行交换
//	//设置种子
//	srand(time(NULL));
//	for (int i = 0; i < len ; i++) 
//	{
//		//获取一个随机索引
//		int index = rand() % len;
//		//拿着i指向的元素，跟index指向的元素进行交换
//		int temp = arr[i];
//		arr[i] = arr[index];
//		arr[index] = temp;
//	}
//	//遍历数组
//	for (int i = 0; i <len; i++) 
//	{
//		printf("%d\n",arr[i]);
//	}
//
//
//	return 0;
//}