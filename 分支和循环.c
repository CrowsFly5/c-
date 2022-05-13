#include<stdio.h>
int main()

{
	int ch = 0;
	//ctrl+z结束程序 -> -1
	while ((ch = getchar()) !=EOF )//end of file
	{
		putchar(ch);
	}




	/*int ch = getchar();
	putchar(ch);
	printf("%c\n", ch);*/


	/*int h = 0;
	while (h <= 100)
	{
		h++;
		if (66 == h)
			continue;
		printf("%d ", h);
		
	}
	*/
	
	
	
	/*
	int h = 1;
	while (h <= 100)
	{
		if (66 == h)
			break;
		printf("%d ", h);
		h++;
	}*/




	/*int day = 0;
	scanf_s("%d\n", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作学习日\n");
		break;

	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}*/

	//	/*case 1:
	//		printf("星期一\n");
	//		break;
	//	case 2:
	//		printf("星期二\n");
	//		break;
	//	case 3:
	//		printf("星期三\n");
	//		break;
	//	case 4:
	//		printf("星期四\n");
	//		break;
	//	case 5:
	//		printf("星期五\n");
	//		break;
	//	case 6:
	//		printf("星期六\n");
	//		break;
	//	case 7:
	//		printf("星期日\n");
	//		break;*/
	//}





	
	/*int a = 1;
	while (a <= 1000)
	{
		if (1 == a % 2)
			printf("%d ", a);
		a++;
	}*/


	//int b = 23454;
	//if ( 0==b%2 )
	//	printf("b不是奇数\n");
	//else
	//	printf("b是奇数\n");



	//int a = 0;
	//int b = 20;
	//if (a == 12)
	//	if (b == 20)
	//		printf("我爱你\n");
	//	else
	//		printf("我讨厌你\n");

	//		else和离得最近的未匹配的if相匹配



			//int age = 50;
			//if (age < 18)
			//	printf("不可以去网吧打游戏\n");
			//else
			//{
			//	if (age >= 18 && age < 25)
			//		printf("可以好好干成年人该干的事\n");
			//	else if (age >= 25 && age < 50)
			//		printf("必须努力，为了生活\n");
			//	else if (age >= 50 && age < 90)
			//		printf("好好享福\n");

			//};



			//int age = 25;
			//if (age < 18)
			//	printf("未成年\n");
			////else if (18 < age < 25)容易出错
			//else if(age>=18&&age<25)
			//	printf("青年\n");
			//else
			//	printf("成年\n");


			/*int age = 20;
			if (age < 18)
			printf("未成年\n");
			else
			 printf("已成年\n");*/

			 //if (age < 18);
			 //printf("未成年");
return 0;
}

