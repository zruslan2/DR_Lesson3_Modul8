#include <stdio.h>
#include <cctype>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include "MyFunc.h"

using namespace std;
unsigned short int nz;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int i, j;
	while (true)
	{
		cout << "������� ����� �������, 0 - ��� ������ "; cin >> nz; cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	������� strncpy(s1, s2, n) �������� ����� n �������� �� ������ 
			s2 � ������ s1, ������ ��� ������������� ������ s2 ��� �������� ���������� 
			������� ��������������� �������� ���������.������� ������ ����� �� � �������� 
			������������ �������� �������, ���� ����� ������ s2 ����� ��� ������ n.
			������� ���������� ������ s1.�������� ����������� ������ ���� �������.
			������������� ��� ������� � ������ ����������� ���������, ������� ���������� 
			���� ��� �������� ������� �������� ��������������� �������.*/
			char str[20]="";
			/*str = (char*)malloc(1 * sizeof(char));*/
			/**str = '\0';*/
			/*printf("%c", *str);*/
			char *str1="������ ���";
			MyStrcmpy(str, str1, 6);
			printf("%s\n", str);
		}
		else if (nz == 2)
		{
			/*2. �������� ���������, ������� ������ ������� ������ �� ��� ���, ���� �� ���������� 
			������ EOF, � ������� ��� ������ �� �����. ��� ������� ������ ������������ � 
			������������� ��������� ��������� ��������� ������:
			    a. - � �������� ������� ������ ������, ������ ��� ����.
				b. - u ������������� ������� ������ � �������� ��������.
				c. - l ������������� ������� ������ � ������� ��������.*/
			char*str = NULL;
			char s='p';
			green();
			printf("������� ������ ������ ������ �� �����: \n - � - �������� ������� ������ ������, ������ ��� ����.\n - u - ������������� ������� ������ � �������� ��������. \n - l - ������������� ������� ������ � ������� ��������.\n");
			scanf("%c", &s);
			white();
			printf("%c", s);
			printf("\n������� �����, ��� ���������� ����� ������� Ctrl+Z\n");
			int c = 0, r = 0;
			unsigned char uc;
			while (c != 13)
			{
				c = getch();
				if (c == 13)break;
				if (s == 'l')
				{
					uc = tolower((char)c);
					printf("%c", uc);
				}					
				else if (s == 'u')
				{
					uc = toupper((char)c);
					printf("%c", uc);
				}					
				else
				{
					uc = (char)c;
					printf("%c", uc);
				}					
				str = (char*)realloc(str, (r + 1) * sizeof(char));
				str[r] = uc;
				r++;
			}
			str[r] = '\0';
			cout <<endl;
		}
		else if (nz == 3)
		{
			/*3.	��� ������ ��������, ���������� �����.�������� ���������, �����������:
			a.������ ����� ��������;
			b.���������� ������ ��� �������� �����.*/
			char str[] = "��� ������ ��������, ���������� �����. An array of characters containing text is given.";
			int s[100];
			shifr(str, s);
			green();
			printf("������������� �����\n");
			white();
			printf("%s\n\n", str);
			deShifr(str, s);
			green();
			printf("�������������� �����\n");
			white();
			printf("%s\n\n", str);
		}
		else
		{
			red();
			cout << "������ ������� �� ���������� \n";
			white();
		}
	}
}