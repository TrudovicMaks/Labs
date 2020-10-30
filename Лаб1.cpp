#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <string.h>

int main()
{
	setlocale (LC_ALL, "Rus");
	int *a, b[10][10];
	int i,j,k,mi,ma;
	printf ("Введите размер массива: ");//Задание 3
	scanf ("%d", &i);
	a = (int*)malloc(i * sizeof(int));//Задание 3
	for (j=0;j<i;j++)//Задание 2
	{
		a[j]=rand()%21-10;
		printf ("%d ",a[j]);
	}//Задание 2
	printf("\n");
	mi=a[0]; ma=a[0];//Задание 1
	for (j=1;j<i;j++)
	{
		if (a[j]<mi) mi=a[j];
		if (a[j]>ma) ma=a[j];
	}
	free(a);
	printf ("Наибольшее число этого массива это %d, а наименьшее %d\n", ma,mi);
	printf ("И разница между ними %d\n\n", ma-mi);//Задание 1
	for (i=0;i<10;i++)//Задание 2
	{
		for (j=0;j<10;j++)
		{
			b[i][j]=rand()%21-10;
			printf ("%3d ",b[i][j]);
		}
		printf ("\n");
	}//Задание 2
	printf ("Сумма всех элементов столбца:\n");//Задание 4
	for (i=0;i<10;i++)
	{
		k=0;
		for (j=0;j<10;j++)
		{
			k+=b[j][i];
		}
		printf ("%3d ",k);
	}//Задание 4
	printf ("\n");
	printf ("\n");
	char f[20], n[20], fl[20];
	int no;
	setvbuf(stdin, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
	struct student
	{
		char famil[20];
		char name[20], facult[20];
		int Nomzach;
	} stud[3];
	for(i=0;i<3;i++)
	{
		printf("Введите фамилию студента\n"); scanf ("%20s",stud[i].famil);
	}
	for(i=0;i<3;i++)
	{
		printf("Введите имя студента %s\n",stud[i].famil); scanf ("%20s",stud[i].name);
	}
	for(i=0;i<3;i++)
	{
		printf("Введите название факультета студента %s %s\n",stud[i].famil,stud[i].name); scanf ("%20s",stud[i].facult);
	}
	for(i=0;i<3;i++)
	{
		printf("Введите номер зачётной книжки студента %s %s\n",stud[i].famil,stud[i].name); scanf ("%d",&stud[i].Nomzach);
	}
	for(i=0;i<3;i++)
	{
		printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n",stud[i].famil,stud[i].name,stud[i].facult,stud[i].Nomzach);
	}
		printf("Введите фамилию(0 если не известно): ");
		scanf ("%20s",f);
		printf("имя(0 если не известно): ");
		scanf ("%20s",n);
		printf("название факультета(0 если не известно): ");
		scanf ("%20s",fl);
		printf("номер зачетной книжки(0 если не известно): ");
		scanf ("%d",&no);
		printf("\n");
		j=-1;
		for(i=0;i<3;i++)
		{
			for(;;)
			{
			if (strcmp (fl, stud[i].facult)==0)
			{j=i;break;}
			if (strcmp (f, stud[i].famil)==0)
			{j=i;break;}
			if (strcmp (n, stud[i].name)==0)
			{j=i;break;}
			if (stud[i].Nomzach==no)
			{j=i;break;}
			break;
			}
			if (j!=-1)
			{
				printf ("Структура номер %d: Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d\n",j,stud[j].famil,stud[j].name,stud[j].facult,stud[j].Nomzach);
				j=-1;
			}
		}
	getch();
	return 0;
}

