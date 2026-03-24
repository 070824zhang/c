//#include<stdio.h>
//int main() 
//{
//	/*
//	     练习：利用指针遍历数组
//	
//	*/
//	//定义数组
//	int arr[5] = {1,2,3,4,5};
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	//2.获取数组的指针
//	//实际上获取的：数组的首地址
//	int* p = &arr[0];
//	//int* p = arr;
//
//	//利用循环和指针遍历数组获取里面的每一个元素
//	for (int i = 0; i < len; i++) 
//	{
//		printf("%d\n",*(p + i));
//	}
//
//
//	return 0;
//}