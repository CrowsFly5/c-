#include<stdio.h>
int main()

{
	int ch = 0;
	//ctrl+z�������� -> -1
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
		printf("����ѧϰ��\n");
		break;

	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}*/

	//	/*case 1:
	//		printf("����һ\n");
	//		break;
	//	case 2:
	//		printf("���ڶ�\n");
	//		break;
	//	case 3:
	//		printf("������\n");
	//		break;
	//	case 4:
	//		printf("������\n");
	//		break;
	//	case 5:
	//		printf("������\n");
	//		break;
	//	case 6:
	//		printf("������\n");
	//		break;
	//	case 7:
	//		printf("������\n");
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
	//	printf("b��������\n");
	//else
	//	printf("b������\n");



	//int a = 0;
	//int b = 20;
	//if (a == 12)
	//	if (b == 20)
	//		printf("�Ұ���\n");
	//	else
	//		printf("��������\n");

	//		else����������δƥ���if��ƥ��



			//int age = 50;
			//if (age < 18)
			//	printf("������ȥ���ɴ���Ϸ\n");
			//else
			//{
			//	if (age >= 18 && age < 25)
			//		printf("���Ժúøɳ����˸øɵ���\n");
			//	else if (age >= 25 && age < 50)
			//		printf("����Ŭ����Ϊ������\n");
			//	else if (age >= 50 && age < 90)
			//		printf("�ú���\n");

			//};



			//int age = 25;
			//if (age < 18)
			//	printf("δ����\n");
			////else if (18 < age < 25)���׳���
			//else if(age>=18&&age<25)
			//	printf("����\n");
			//else
			//	printf("����\n");


			/*int age = 20;
			if (age < 18)
			printf("δ����\n");
			else
			 printf("�ѳ���\n");*/

			 //if (age < 18);
			 //printf("δ����");
return 0;
}

