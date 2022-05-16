#include<stdio.h>
#define MAX 521        //define定义的标识符常量
enum Color
{
	RED,
	YELLOW,     //枚举常量
	BLUE
};
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);



	enum Color color = YELLOW;
	printf("%d\n", RED);
	printf("%d\n", YELLOW);
	printf("%d\n", BLUE);

	int arr[MAX] = { 0 };
	printf("%d\n", MAX);


	//const int num = 4;                const常变量
	//printf("%d\n", num);         
	return 0;
}
