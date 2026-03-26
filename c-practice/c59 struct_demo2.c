//#include<stdio.h>
//#include<string.h>
///*
//      定义一个结构体表示学生
//      学生带有的属性有：姓名，年龄
//      要求：把三个学生信息放入数组当中，并遍历数组
//
//*/
//struct student 
//{
//    char name[100];
//    int age;
//};
//
//
//int main() 
//{
//    struct student xs1 = {"zhangsan",23};
//    struct student xs2 = {"lisi",24};
//    struct student xs3 = { "wangwu",25 };
//   
//    //2.把三个学生放入到数组当中
//    struct student stuarr[3] = { xs1,xs2,xs3 };
//
//    //遍历数组得到每一个元素
//    for (int i = 0; i < 3;i++) 
//    {
//        struct student temp = stuarr[i];
//        printf("学生的信息为：姓名%s,年龄%d\n", temp.name, temp.age);
//    }
//    return 0;
//}