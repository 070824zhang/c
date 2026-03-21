//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
////  random number <stdlib.h>   standard library 
////  srand() set the seeds
////  rand()  get random number
//
//int main() 
//{
//	//1. get the seeds
//	//seed: if the seed remains unchanged,the result wil remain unchanged
//	//use the changing data as a seed     time
//	srand(time(NULL));
//	//2. get random number        the range of random number(defailt range):0-32767
//	for (int i = 1;i <=10;i++) 
//	{
//		int num = rand() % 100 + 1;    //used to generate random numbers in any range      range(1-100)
//		//3.output and print
//		printf("%d\n", num);
//	}
//	
//	return 0;
//}