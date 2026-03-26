//#include<stdio.h>
//#include<string.h>
//typedef struct student 
//{
//	char name[100];
//	int age;
//}s;
///*
//    定义一个结构体表示学生
//	学生的属性：姓名，年龄
//	要求：
//	     定义一个函数，修改学生中的数据
//*/
//
//
////细节：因为这个函数用到了结构体，所以函数的声明必须用到结构体的下面，否则代码会报错
//void method(s st);
//void method2(s* p);
//
//
//
//int main() 
//{
//	//1.定义一个学生
//	s stu;
//
//	//2.给学生赋初始值
//	strcpy(stu.name, "aaa");
//	stu.age = 0;
//
//	//3.输出打印
//	printf("学生的初始数据为：%s,%d\n", stu.name, stu.age);
//
//	//4.调用函数，修改学生中的数据
//	method2(&stu);
//
//	//5.输出打印
//	printf("学生的信息修改为：%s,%d\n", stu.name, stu.age);
//
//	return 0;
//}
//
////细节：
////     如果函数中写的是结构体类型的变量，相当于是定义了一个新的变量
////     此时是把main函数中stu的数据，传递给了method函数，并且把stu中数据赋值给了新的变量st
////     我们在函数中，仅仅是修改了变量st中的值，对main函数中stu的值，是没有进行修改的
//void method(s st) 
//{
//	printf("接收到main函数中学生的初始数据为：%s,%d\n", st.name, st.age);
//
//	//修改
//	printf("请输入修改后的学生名字\n");
//	scanf("%s", st.name);
//	printf("请输入修改后的学生年龄\n");
//	scanf("%d", &(st.age));
//
//	printf("在method函数中修改之后，学生的信息为：%s,%d", st.name, st.age);
//}
//
//
////如果要在函数中修改stu的值，此时就不要在定义新的变量了
////直接接收stu的内存地址，通过内存地址就可以修改stu中的数据了
////指针p里面记录的是main函数中 stu的内存地址（stu 学生）
//void method2(s* p)
//{
//	printf("接收到main函数中学生的初始数据为：%s,%d", (*p).name, (*p).age);
//
//	//修改
//	printf("请输入修改后的学生名字\n");
//	scanf("%s", (*p).name);
//	printf("请输入修改后的学生年龄\n");
//	scanf("%d", & ((*p).age));
//
//	printf("在method函数中修改之后，学生的信息为：%s,%d", (*p).name, (*p).age);
//}