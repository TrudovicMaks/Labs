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
	printf ("������� ������ �������: ");//������� 3
	scanf ("%d", &i);
	a = (int*)malloc(i * sizeof(int));//������� 3
	for (j=0;j<i;j++)//������� 2
	{
		a[j]=rand()%21-10;
		printf ("%d ",a[j]);
	}//������� 2
	printf("\n");
	mi=a[0]; ma=a[0];//������� 1
	for (j=1;j<i;j++)
	{
		if (a[j]<mi) mi=a[j];
		if (a[j]>ma) ma=a[j];
	}
	free(a);
	printf ("���������� ����� ����� ������� ��� %d, � ���������� %d\n", ma,mi);
	printf ("� ������� ����� ���� %d\n\n", ma-mi);//������� 1
	for (i=0;i<10;i++)//������� 2
	{
		for (j=0;j<10;j++)
		{
			b[i][j]=rand()%21-10;
			printf ("%3d ",b[i][j]);
		}
		printf ("\n");
	}//������� 2
	printf ("����� ���� ��������� �������:\n");//������� 4
	for (i=0;i<10;i++)
	{
		k=0;
		for (j=0;j<10;j++)
		{
			k+=b[j][i];
		}
		printf ("%3d ",k);
	}//������� 4
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
		printf("������� ������� ��������\n"); scanf ("%20s",stud[i].famil);
	}
	for(i=0;i<3;i++)
	{
		printf("������� ��� �������� %s\n",stud[i].famil); scanf ("%20s",stud[i].name);
	}
	for(i=0;i<3;i++)
	{
		printf("������� �������� ���������� �������� %s %s\n",stud[i].famil,stud[i].name); scanf ("%20s",stud[i].facult);
	}
	for(i=0;i<3;i++)
	{
		printf("������� ����� �������� ������ �������� %s %s\n",stud[i].famil,stud[i].name); scanf ("%d",&stud[i].Nomzach);
	}
	for(i=0;i<3;i++)
	{
		printf("C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d \n",stud[i].famil,stud[i].name,stud[i].facult,stud[i].Nomzach);
	}
		printf("������� �������(0 ���� �� ��������): ");
		scanf ("%20s",f);
		printf("���(0 ���� �� ��������): ");
		scanf ("%20s",n);
		printf("�������� ����������(0 ���� �� ��������): ");
		scanf ("%20s",fl);
		printf("����� �������� ������(0 ���� �� ��������): ");
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
				printf ("��������� ����� %d: C������ %s %s ��������� �� ���������� %s, ����� �������� ������ %d\n",j,stud[j].famil,stud[j].name,stud[j].facult,stud[j].Nomzach);
				j=-1;
			}
		}
	getch();
	return 0;
}

