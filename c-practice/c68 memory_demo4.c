//#include<stdio.h>
//#include<stdlib.h>
//int main() 
//{
//	//1.申请一片连续的空间存储10个int类型的整数
//	int* p1 = malloc(10 * sizeof(int));
//	printf("最初的内存地址为%p\n", p1);
//	int size = 10;
//
//	//2.给这片空间赋值
//	for (int i = 0; i < size;i++) 
//	{
//		*(p1 + i) = (i + 1) * 10;
//	}
//
//	//3.修改大小
//	int* p2 = realloc(p1, 20 * sizeof(int));
//	printf("修改之后的内存地址为%p\n", p2);
//	size = 20;
//
//	//3.遍历
//		printf("空间中的数据为:\n");
//		for (int i = 0; i < size; i++) 
//		{
//			printf("%d\n", *(p2 + i));
//		}
//		printf("\n");
//
//		//如果我想释放空间
//		free(p2);
//
//return 0;
//}