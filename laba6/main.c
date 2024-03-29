﻿#include <stdio.h>
#include <string.h>
#include <locale.h>
#include "head.h"

struct ZACH* write1(void)
{
	static struct ZACH Z1 =
	{
		"Murdering",
		"Djer",
		"Олегович",
		"БИН1703",
		{
			{ 2017, //страница зачетки
			  1,//1й семестр
				{ //зачеты
					//{ "", "", "..", { notDiff, {.acc = 1} }  },
					{ "Введение в специальность", "Гончаров", "22.12.17", { notDiff, {.acc = 1} }},
					{ "Русский язык и культура речи", "Безносова", "09.01.18", { notDiff, {.acc = 1} }  },
					{ "Английский язык", "Кожевникова", "10.01.18", { notDiff, {.acc = 1} }  },
					{ "Информатика", "Кравченко", "11.01.18", { notDiff, {.acc = 1} }  }
				},
				{ //экзамены
					//{ "", "", "..", { Diff, {.mark =  } }  },
					{ "Высшая математика", "Гудкова", "19.01.18", { Diff, {.mark = Wonder } }  },
					{ "Аналитическая геометрия и линейная алгебра", "Солиев", "23.01.18", { Diff, {.mark = Wonder} }  },
					{ "Философия", "Кораблева", "30.01.18", { Diff, {.mark = Wonder} }  }
				}
			},
			{ 2018,
			  2,
				{
					{ "НПБДвИ", "Антипов", "31.05.18", { notDiff, {.acc = 1} }  },
					{ "Физика", "Жилинский", "01.06.18", { notDiff, {.acc = 1} }  },
					{ "Физическая Культура", "Горячева", "08.06.18", { notDiff, {.acc = 1} }  },
					{ "Теоретические Основы Экономики", "Тришамова", "12.06.18", { notDiff, {.acc = 1} }  },
					{ "Компьютерная Графика", "Пискарева", "12.06.18", { notDiff, {.acc = 1} }  }
				},
				{
					{ "История", "Кузнецова", "18.06.18", { Diff, {.mark = Wonder} }  },
					{ "Высшая Математика", "Гудкова", "21.06.18", { Diff, {.mark = Wonder} }  },
					{ "Информатика", "Краченко", "25.06.18", { Diff, {.mark = Good} }  },
					{ "Иностранный язык", "Кожевникова", "02.07.18", { Diff, {.mark = Good} }  }
				}
			},
			{ 2018,
			  3,
				{
					{ "Вычислительные Математические Пакетные Пакеты Пакетов", "Семенова", "31.12.18", { notDiff, {.acc = 1} }  },
					{ "Теория Электрических Цепей Курсовая работа", "Фриск", "09.01.19", { Diff,{.mark = 5} }  },
					{ "Теория Электрических Цепей", "Фриск", "09.01.19", { notDiff, {.acc = 1} }  },
					{ "Теория Функций Комплексного Переменного", "Гудкова", "08.01.19", { notDiff, {.acc = 1} }  },
					{ "Физические Основы Электроники", "Власов", "10.01.19", { notDiff, {.acc = 1} }  }
				},
				{
					{ "Дискретная Математика", "Дубнов", "15.01.19", { Diff, {.mark = Wonder} }  },
					{ "Физика", "Жтлтнский", "22.01.19", { Diff, {.mark = Wonder} }  },
					{ "Вычислительные Модели", "Кравченко", "31.12.18", { Diff, {.mark = Wonder} }  },
					{ "Теория Вероятности и Математическая Статистика", "Демин", "66.66.66", { Diff, {.mark = Wonder} }  }
				}
			},
			{ 2019,
			  4,
				{
					{ "Анализ Случайных процессов", "Демин", "$1.33.7$", { notDiff, {.acc = 1} }  },
					{ "Экология", "Эколог", "12.12.12", { notDiff, {.acc = 1} }  },
					{ "Вычислительные Модели Курсовая работа", "Кравченко", "12.03.19", { Diff, {.mark = Wonder} }  },
					{ "Математическое Описание Теории Электромагнитных Полей", "Федотова", "12.04.19", { notDiff, {.acc = 1} }  },
					{ "Электромагнитные Поля и Волны", "Федотова", "12.04.19", { notDiff, {.acc = 1} }  },
					{ "Физическая Культура", "Горячева", "00.07.19", { notDiff, {.acc = 1} }  },
					{ "Вычислительные Модели", "Кравченко", "12.03.19", { notDiff, {.acc = 1} }  },
					{ "Безопасные Практические Занятия", "Барков", "СЕЙЧАС", { notDiff, {.acc = 1} }  }//пожалуйста
				},
				{
					{ "Электроника", "Власов", "19.06.19", { Diff, {.mark = Wonder} }  },
					{ "Теория Электрических Цепей", "Фриск", "20.06.19", { Diff, {.mark = Wonder} }  },
					{ "Общая Теория Связи", "Сухоруков", "21.06.19", { Diff, {.mark = Wonder} }  },
					{ "Схемотехника Телекоммуникационных Устройств", "Андреев", "вчера", { Diff, {.mark = Wonder} }  }
				}
			},
		}
	};
	return &Z1;
}
struct ZACH* write2(void)
{
	static struct ZACH Z2;
	strcpy(Z2.firstName, "Djer");
	strcpy(Z2.lastName, "Murdering");
	strcpy(Z2.dadName, "Олегович");
	strcpy(Z2.number, "БИН1703");

	//1й семестр
	Z2.semI[0].sem = 1;
	Z2.semI[0].year = 2017;

	strcpy(Z2.semI[0].theor[0].name, "Введение в специальность");
	strcpy(Z2.semI[0].theor[0].teach, "Гончаров");
	strcpy(Z2.semI[0].theor[0].time, "22.12.17");
	Z2.semI[0].theor[0].str.type = notDiff;
	Z2.semI[0].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[1].name, "История России");
	strcpy(Z2.semI[0].theor[1].teach, "Кузнецова");
	strcpy(Z2.semI[0].theor[1].time, "27.12.17");
	Z2.semI[0].theor[1].str.type = notDiff;
	Z2.semI[0].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[2].name, "Русский язык и культура речи");
	strcpy(Z2.semI[0].theor[2].teach, "Безносова");
	strcpy(Z2.semI[0].theor[2].time, "09.01.18");
	Z2.semI[0].theor[2].str.type = notDiff;
	Z2.semI[0].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[3].name, "Английский язык");
	strcpy(Z2.semI[0].theor[3].teach, "Кожевникова");
	strcpy(Z2.semI[0].theor[3].time, "10.01.18");
	Z2.semI[0].theor[3].str.type = notDiff;
	Z2.semI[0].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[0].theor[4].name, "Информатика");
	strcpy(Z2.semI[0].theor[4].teach, "Кравченко");
	strcpy(Z2.semI[0].theor[4].time, "11.01.18");
	Z2.semI[0].theor[4].str.type = notDiff;
	Z2.semI[0].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[0].prack[0].name, "Высшая математика");
	strcpy(Z2.semI[0].prack[0].teach, "Гудкова");
	strcpy(Z2.semI[0].prack[0].time, "19.01.18");
	Z2.semI[0].prack[0].str.type = Diff;
	Z2.semI[0].prack[0].str.value.mark = Wonder;

	strcpy(Z2.semI[0].prack[1].name, "Аналитическая геометрия и линейная алгебра");
	strcpy(Z2.semI[0].prack[1].teach, "Солиев");
	strcpy(Z2.semI[0].prack[1].time, "23.01.18");
	Z2.semI[0].prack[1].str.type = Diff;
	Z2.semI[0].prack[1].str.value.mark = Wonder;

	strcpy(Z2.semI[0].prack[2].name, "Философия");
	strcpy(Z2.semI[0].prack[2].teach, "Кораблева");
	strcpy(Z2.semI[0].prack[2].time, "30.01.18");
	Z2.semI[0].prack[2].str.type = Diff;
	Z2.semI[0].prack[2].str.value.mark = Wonder;

	//2й семестр
	Z2.semI[1].sem = 2;
	Z2.semI[1].year = 2018;

	strcpy(Z2.semI[1].theor[1].name, "Физика");
	strcpy(Z2.semI[1].theor[1].teach, "Жилинский");
	strcpy(Z2.semI[1].theor[1].time, "01.06.18");
	Z2.semI[1].theor[1].str.type = notDiff;
	Z2.semI[1].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[2].name, "Физическая Культура");
	strcpy(Z2.semI[1].theor[2].teach, "Горячева");
	strcpy(Z2.semI[1].theor[2].time, "08.06.18");
	Z2.semI[1].theor[2].str.type = notDiff;
	Z2.semI[1].theor[2].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[3].name, "Теоретические Основы Экономики");
	strcpy(Z2.semI[1].theor[3].teach, "Тришамова");
	strcpy(Z2.semI[1].theor[3].time, "12.06.18");
	Z2.semI[1].theor[3].str.type = notDiff;
	Z2.semI[1].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[1].theor[4].name, "Компьютерная Графика");
	strcpy(Z2.semI[1].theor[4].teach, "Пискарева");
	strcpy(Z2.semI[1].theor[4].time, "12.06.18");
	Z2.semI[1].theor[4].str.type = notDiff;
	Z2.semI[1].theor[4].str.value.acc = 1;


	strcpy(Z2.semI[1].prack[0].name, "История");
	strcpy(Z2.semI[1].prack[0].teach, "Кузнецова");
	strcpy(Z2.semI[1].prack[0].time, "18.06.18");
	Z2.semI[1].prack[0].str.type = Diff;
	Z2.semI[1].prack[0].str.value.mark = Wonder;

	strcpy(Z2.semI[1].prack[1].name, "Высшая Математика");
	strcpy(Z2.semI[1].prack[1].teach, "Гудкова");
	strcpy(Z2.semI[1].prack[1].time, "21.06.18");
	Z2.semI[1].prack[1].str.type = Diff;
	Z2.semI[1].prack[1].str.value.mark = Wonder;

	strcpy(Z2.semI[1].prack[2].name, "Информатика");
	strcpy(Z2.semI[1].prack[2].teach, "Кравченко");
	strcpy(Z2.semI[1].prack[2].time, "25.06.18");
	Z2.semI[1].prack[2].str.type = Diff;
	Z2.semI[1].prack[2].str.value.mark = Good;

	strcpy(Z2.semI[1].prack[3].name, "Иностранный язык");
	strcpy(Z2.semI[1].prack[3].teach, "Кожевникова");
	strcpy(Z2.semI[1].prack[3].time, "02.07.18");
	Z2.semI[1].prack[3].str.type = Diff;
	Z2.semI[1].prack[3].str.value.mark = Good;

	//3й семестр
	Z2.semI[2].sem = 3;
	Z2.semI[2].year = 2018;


	strcpy(Z2.semI[2].theor[1].name, "Вычислительные Математические Пакетные Пакеты Пакетов");
	strcpy(Z2.semI[2].theor[1].teach, "Семенова");
	strcpy(Z2.semI[2].theor[1].time, "31.12.18");
	Z2.semI[2].theor[1].str.type = notDiff;
	Z2.semI[2].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[2].name, "Теория Электрических Цепей Курсовая работа");
	strcpy(Z2.semI[2].theor[2].teach, "Фриск");
	strcpy(Z2.semI[2].theor[2].time, "09.01.19");
	Z2.semI[2].theor[2].str.type = Diff;
	Z2.semI[2].theor[2].str.value.mark = Wonder;

	strcpy(Z2.semI[2].theor[3].name, "Теория Электрических Цепей");
	strcpy(Z2.semI[2].theor[3].teach, "Фриск");
	strcpy(Z2.semI[2].theor[3].time, "09.01.19");
	Z2.semI[2].theor[3].str.type = notDiff;
	Z2.semI[2].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[4].name, "Теория Функций Комплексного Переменного");
	strcpy(Z2.semI[2].theor[4].teach, "Гудкова");
	strcpy(Z2.semI[2].theor[4].time, "08.01.19");
	Z2.semI[2].theor[4].str.type = notDiff;
	Z2.semI[2].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[2].theor[5].name, "Физические Основы Электроники");
	strcpy(Z2.semI[2].theor[5].teach, "Власов");
	strcpy(Z2.semI[2].theor[5].time, "10.01.19");
	Z2.semI[2].theor[5].str.type = notDiff;
	Z2.semI[2].theor[5].str.value.acc = 1;


	strcpy(Z2.semI[2].prack[0].name, "Дискретная Математика");
	strcpy(Z2.semI[2].prack[0].teach, "Дубнов");
	strcpy(Z2.semI[2].prack[0].time, "15.01.19");
	Z2.semI[2].prack[0].str.type = Diff;
	Z2.semI[2].prack[0].str.value.mark = Wonder;

	strcpy(Z2.semI[2].prack[1].name, "Физика");
	strcpy(Z2.semI[2].prack[1].teach, "Жилинский");
	strcpy(Z2.semI[2].prack[1].time, "22.01.19");
	Z2.semI[2].prack[1].str.type = Diff;
	Z2.semI[2].prack[1].str.value.mark = Wonder;

	strcpy(Z2.semI[2].prack[2].name, "Вычислительные Модели");
	strcpy(Z2.semI[2].prack[2].teach, "Кравченко");
	strcpy(Z2.semI[2].prack[2].time, "31.12.18");
	Z2.semI[2].prack[2].str.type = Diff;
	Z2.semI[2].prack[2].str.value.mark = Wonder;

	strcpy(Z2.semI[2].prack[3].name, "Теория Вероятности и Математическая Статистика");
	strcpy(Z2.semI[2].prack[3].teach, "Демин");
	strcpy(Z2.semI[2].prack[3].time, "66.66.66");
	Z2.semI[2].prack[3].str.type = Diff;
	Z2.semI[2].prack[3].str.value.mark = Wonder;

	//4й семестр
	Z2.semI[3].sem = 4;
	Z2.semI[3].year = 2019;

	strcpy(Z2.semI[3].theor[0].name, "Анализ Случайных процессов");
	strcpy(Z2.semI[3].theor[0].teach, "Демин");
	strcpy(Z2.semI[3].theor[0].time, "$1.33.7$");
	Z2.semI[3].theor[0].str.type = notDiff;
	Z2.semI[3].theor[0].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[1].name, "Экология");
	strcpy(Z2.semI[3].theor[1].teach, "Эколог");
	strcpy(Z2.semI[3].theor[1].time, "12.12.12");
	Z2.semI[3].theor[1].str.type = notDiff;
	Z2.semI[3].theor[1].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[2].name, "Вычислительные Модели Курсовая работа");
	strcpy(Z2.semI[3].theor[2].teach, "Кравченко");
	strcpy(Z2.semI[3].theor[2].time, "12.03.19");
	Z2.semI[3].theor[2].str.type = Diff;
	Z2.semI[3].theor[2].str.value.mark = Wonder;

	strcpy(Z2.semI[3].theor[3].name, "Математическое Описание Теории Электромагнитных Полей");
	strcpy(Z2.semI[3].theor[3].teach, "Федотова");
	strcpy(Z2.semI[3].theor[3].time, "12.04.19");
	Z2.semI[3].theor[3].str.type = notDiff;
	Z2.semI[3].theor[3].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[4].name, "Электромагнитные Поля и Волны");
	strcpy(Z2.semI[3].theor[4].teach, "Федотова");
	strcpy(Z2.semI[3].theor[4].time, "12.04.19");
	Z2.semI[3].theor[4].str.type = notDiff;
	Z2.semI[3].theor[4].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "Физическая Культура");
	strcpy(Z2.semI[3].theor[5].teach, "Горячева");
	strcpy(Z2.semI[3].theor[5].time, "00.07.19");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "Вычислительные Модели");
	strcpy(Z2.semI[3].theor[5].teach, "Кравченко");
	strcpy(Z2.semI[3].theor[5].time, "12.03.19");
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;

	strcpy(Z2.semI[3].theor[5].name, "Безопасные Практические Занятия");
	strcpy(Z2.semI[3].theor[5].teach, "Барков");
	strcpy(Z2.semI[3].theor[5].time, "СЕЙЧАС");//пожалуйста
	Z2.semI[3].theor[5].str.type = notDiff;
	Z2.semI[3].theor[5].str.value.acc = 1;


	strcpy(Z2.semI[3].prack[0].name, "Электроника");
	strcpy(Z2.semI[3].prack[0].teach, "Власов");
	strcpy(Z2.semI[3].prack[0].time, "19.06.19");
	Z2.semI[3].prack[0].str.type = Diff;
	Z2.semI[3].prack[0].str.value.mark = Wonder;

	strcpy(Z2.semI[3].prack[1].name, "Теория Электрических Цепей");
	strcpy(Z2.semI[3].prack[1].teach, "Фриск");
	strcpy(Z2.semI[3].prack[1].time, "20.06.19");
	Z2.semI[3].prack[1].str.type = Diff;
	Z2.semI[3].prack[1].str.value.mark = Wonder;

	strcpy(Z2.semI[3].prack[2].name, "Общая Теория Связи");
	strcpy(Z2.semI[3].prack[2].teach, "Сухоруков");
	strcpy(Z2.semI[3].prack[2].time, "21.06.19");
	Z2.semI[3].prack[2].str.type = Diff;
	Z2.semI[3].prack[2].str.value.mark = Wonder;

	strcpy(Z2.semI[3].prack[3].name, "Схемотехника Телекоммуникационных Устройств");
	strcpy(Z2.semI[3].prack[3].teach, "Андреев");
	strcpy(Z2.semI[3].prack[3].time, "вчера");
	Z2.semI[3].prack[3].str.type = Diff;
	Z2.semI[3].prack[3].str.value.mark = Wonder;

	return &Z2;
}

void strocher(struct ZACH* Z, int n)
{
	if (*Z->semI[n].prack[0].name)
	{
		printf("Результаты промежуточной аттестации (экзамены):\n\n%-65s %-10s %-10s %-60s\n\n", "Наименование дисциплины", "Оценка", "Дата", "Фамилия преподавателя");
		for (int i = 0; *Z->semI[n].prack[i].name; i++)
		{
			printf("%-65s %-10d %-10s %-60s\n", Z->semI[n].prack[i].name, Z->semI[n].prack[i].str.value.mark, Z->semI[n].prack[i].time, Z->semI[n].prack[i].teach);
		}
	}
	else
	{
		printf("Данные об экзаменах отсутствуют\n");
	}
	printf("\n");
	if (*Z->semI[n].theor[0].name)
	{
		printf("Результаты промежуточной аттестации (зачеты):\n\n%-65s %-10s %-10s %-60s\n\n", "Наименование дисциплины", "Оценка", "Дата", "Фамилия преподавателя");
		for (int i = 0; *Z->semI[n].theor[i].name; i++)
		{
			if (Z->semI[n].theor[i].str.type == notDiff)
			{
				printf("%-65s %-10s %-10s %-60s\n", Z->semI[n].theor[i].name, Z->semI[n].theor[i].str.value.acc ? "Зачтено" : "Не зачтено", Z->semI[n].theor[i].time, Z->semI[n].theor[i].teach);
			}
			else
			{
				printf("%-65s %-10d %-10s %-60s\n", Z->semI[n].theor[i].name, Z->semI[n].theor[i].str.value.mark, Z->semI[n].theor[i].time, Z->semI[n].theor[i].teach);
			}
		}
	}
	else
	{
		printf("Данные о зачетах отсутствуют\n");
	}
}
void menu(struct ZACH* Z)
{
	do
	{
		printf("Номер зачетной книжки: %s\nФИО студента: %s %s %s\n", Z->number, Z->lastName, Z->firstName, Z->dadName);
		printf("2. Выберите вариант:\n1 - семестр №1\n2 - семестр №2\n3 - семестр №3\n4 - семестр №4\n5 - все семестры\n6 - в меню\n");
		switch (_getch())
		{
		case'1':
			system("cls");
			printf("Семестр 1:\n\n");
			strocher(Z, 0);
			break;
		case'2':
			system("cls");
			printf("Семестр 2:\n\n");
			strocher(Z, 1);
			break;
		case'3':
			system("cls");
			printf("Семестр 3:\n\n");
			strocher(Z, 2);
			break;
		case'4':
			system("cls");
			printf("Семестр 4:\n\n");
			strocher(Z, 3);
			break;
		case'5':
			system("cls");
			printf("Семестр 1:\n\n");
			strocher(Z, 0);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Семестр 2:\n\n");
			strocher(Z, 1);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Семестр 3:\n\n");
			strocher(Z, 2);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			printf("Семестр 4:\n\n");
			strocher(Z, 3);
			printf("--------------------------------------------------------------------------------------------------------------------------------\n");
			break;
		case'6':
			return;
		}
		system("pause");
		system("cls");
	} while (1);
}
void main(void)
{
	setlocale(LC_ALL, "Rus");
	struct ZACH* Z1 = write1();
	struct ZACH* Z2 = write2();
	do
	{
		printf("1. Выберите вариант:\n1 - вариант 1\n2 - вариант 2\n3 - выход\n");
		switch (_getch())
		{
		case '1':
			system("cls");
			printf("Выбран первый вариант.\n");
			menu(Z1);
			break;
		case '2':
			system("cls");
			printf("Выбран второй вариант.\n");
			menu(Z2);
			break;
		case '3':
			exit(0);
		}
		system("pause");
		system("cls");
	} while (1);
}

