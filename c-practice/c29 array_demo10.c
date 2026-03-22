//#include<stdio.h>
//void printarr(int arr[], int len);
//int main()
//{
//	/*
//	     需求：键盘录入并存入数组，完成以下需求
//		 1）遍历数组
//	     2）反转数组
//	     3）再次遍历
//	*/
//	//1.定义数组
//	int arr[5] = { 0 };
//	int len = sizeof(arr) / sizeof(int);
//
//	//2.键盘录入数据
//	for (int i = 0; i < len; i++) 
//	{
//		printf("请录入第%d个数据:\n", i + 1);
//		scanf("%d", &arr[i]);
//	}
//	//3.遍历数组
//	printarr(arr,len);
//
//	//4.反转数组
//	int i = 0;
//	int j = len - 1;
//	while (i < j) 
//	{
//		int temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//
//		i++;
//		j--;
//	}
//	printarr(arr, len);
//
//return 0;
//
//
//}
//void printarr(int arr[] , int len)
//{
//	for (int i = 0; i < 5;i++) 
//	{
//		printf("%d\n", arr[i]);
//	}
//}