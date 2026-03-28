//#include<stdio.h>
//int main() 
//{
//	/*
//	    打开文件：fopen
//	
//	    读取数据：fgetc：一次读一个字符，读到不返回-1
//		          fgets：一次读一行，读到返回NULL
//	              fgetd：一次读多个
//
//	    关闭文件：fclose
//
//		c:\\users\\1\\desktop\\a.txt
//	*/
//
//	//1.打开文件：fopen
//	FILE* file= fopen("c:\\users\\1\\desktop\\a.txt","r");
//
//
//	//2.读取数据  fgetc细节：一次读一个字节，读到了，返回读到的的字符，读不到返回-1
//	int c;
//	while ((fgetc(file)) != -1) 
//	{
//		pritnf("%c", c);
//	}
//
//
//	//3.关闭文件
//	fclose(file);
//
//
//	return 0;
//}