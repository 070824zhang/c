//#include<stdio.h>
//#include<stdlib.h>
//int main() 
//{
//	//1.申请一片连续的空间存储10个int类型的整数
//	int* p = malloc(10 * sizeof(int));
//		int size = 10;
//
//		//2.给这片空间赋值
//		for (int i = 0; i < size;i++) 
//		{
//			*(p + i) = (i + 1) * 10;
//		}
//		//10,20,30....
//
//		//3.遍历
//		printf("空间中的数据为:\n");
//		for (int i = 0; i < size; i++) 
//		{
//			printf("%d\n", *(p + i));
//		}
//		printf("\n");
//
//		//4.释放空间
//		free(p);
//
//		//5.释放之后再次进行遍历
//		printf("释放之后再次遍历数据为:\n");
//		for (int i = 0; i < size; i++)
//		{
//			printf("%d\n", *(p + i));
//		}
//
//
//
//
//return 0;
//}