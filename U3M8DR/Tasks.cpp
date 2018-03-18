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
		cout << "Введите номер задания, 0 - для выхода "; cin >> nz; cin.get();

		if (nz == 0)
		{
			break;
			system("exit");
		}
		else if (nz == 1)
		{
			/*1.	Функция strncpy(s1, s2, n) копирует ровно n символов из строки 
			s2 в строку s1, усекая при необходимости строку s2 или заполняя избыточные 
			символы дополнительными нулевыми символами.Целевая строка может не с одержать 
			завершающего нулевого символа, если длина строки s2 равна или больше n.
			Функция возвращает строку s1.Напишите собственную версию этой функции.
			Протестируйте эту функцию в рамках завершенной программы, которая ис¬пользует 
			цикл для передачи входных значений рассматриваемой функции.*/
			char str[20]="";
			/*str = (char*)malloc(1 * sizeof(char));*/
			/**str = '\0';*/
			/*printf("%c", *str);*/
			char *str1="Привет мир";
			MyStrcmpy(str, str1, 6);
			printf("%s\n", str);
		}
		else if (nz == 2)
		{
			/*2. Напишите программу, которая читает входные данные до тех пор, пока не встретится 
			символ EOF, и выводит эти данные на экран. Эта функция должна распознавать и 
			реализовывать следующие аргументы командной строки:
			    a. - р печатать входные данные такими, какими они есть.
				b. - u преобразовать входные данные к верхнему регистру.
				c. - l преобразовать входные данные к нижнему регистру.*/
			char*str = NULL;
			char s='p';
			green();
			printf("Укажите способ вывода текста на экран: \n - р - печатать входные данные такими, какими они есть.\n - u - преобразовать входные данные к верхнему регистру. \n - l - преобразовать входные данные к нижнему регистру.\n");
			scanf("%c", &s);
			white();
			printf("%c", s);
			printf("\nВведите текст, для завершения ввода нажмите Ctrl+Z\n");
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
			/*3.	Дан массив символов, содержащий текст.Написать программу, реализующую:
			a.данный метод шифрации;
			b.дешифрацию строки при заданной гамме.*/
			char str[] = "Дан массив символов, содержащий текст. An array of characters containing text is given.";
			int s[100];
			shifr(str, s);
			green();
			printf("Зашифрованный текст\n");
			white();
			printf("%s\n\n", str);
			deShifr(str, s);
			green();
			printf("Расшифрованный текст\n");
			white();
			printf("%s\n\n", str);
		}
		else
		{
			red();
			cout << "Такого задания не существует \n";
			white();
		}
	}
}