//#include<stdio.h>
//int binarysearch(int arr[], int len, int num);
//int main() 
//{
//	/*
//	      需求：数组的二分查找
//	            在3，26，46，55，64，99，111，147中查找数据
//	*/
//	//1.定义数组
//	int arr[] = { 3,26,46,55,64,99,111,147 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	
//
//	//定义变量表示要查找的数据
//	int num = 111;
//
//	//调用函数去查找数据
//	int index = binarysearch(arr, len, num);
//
//	//输出
//	printf("%d\n", index);
//
//	return 0;
//}
//
////作用：利用二分查找法查找数据
////返回值：数据在数组中的索引
////如果找到了，真实的索引
////没找到，返回-1
//int binarysearch(int arr[], int len, int num)
//{
//	//确定查找的范围
//	int min = 0;
//	int max = len - 1;
//
//	//2.利用循环不断地进行查找
//	while (min <= max) 
//	{
//		
//		//确定中间位置
//		int mid = (min + max) / 2;
//		//比较
//		//min max mid表示索引
//		//坑：arr[mid]跟num进行比较
//		if (arr[mid] < num)
//		{
//			//要查找的数据在右边
//			min = mid + 1;
//		}
//		else if (arr[mid] > num)
//		{
//			//要查的数据在左边
//			max = mid - 1;
//		}
//		else 
//		{
//			return mid;
//		}
//	}
//	//如果min大于max了，表示数据不存在，返回-1
//	return -1;
//}