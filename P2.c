#include<stdio.h>
#define MAX 521        //define����ı�ʶ������
enum Color
{
	RED,
	YELLOW,     //ö�ٳ���
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


	//const int num = 4;                const������
	//printf("%d\n", num);         
	return 0;
}
