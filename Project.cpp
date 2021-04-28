#include <iostream>
#include <exception>
#include <cstring>
#include "Math.h"
#include "Arrays.h"
#include "Pointers.h"

using namespace std;
int result;

int choice()
{
	int n;
	cout<<"Выберите пункт, с чем хотите поработать: \n 1 - математические модели \n 2 - массивы \n 3 - указатели \n 0 - завершить порграмму "<<endl;

	try
	{
		cin>>n;
		if(n<0 || n>3 || cin.fail())
			throw exception();
	}
	catch(exception& err)
	{
		cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
		cin.clear();
		cin.ignore();
	}

	return n;
}

int main()
{

	while(true)
	{
		int n = choice();
		if(n==1)
		{

			int math;
			while(math!=0)
			{
				cout<<" 1 - Числа фибоначчи \n 2 - Тетрация \n 3 - Факториал \n 4 - Калькулятор \n 5 - Конвертер денег \n 6 - Конвертер времени \n 7 - Треугольник паскаля \n 8 - Вывод треугольника \n 0 - Вернуться назад"<<endl;

				try
				{
					cin>>math;;
					if(math<0 || math>8 ||cin.fail())
						throw exception();
				}
				catch(exception& err)
				{
					cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
					cin.clear();
					cin.ignore();
					break;
				}

				if(math==0)
				{
					break;
				}

				if(math>0 && math<=8)
				{

					while(math==1)
					{
						result=fibonacci();
						if(result==1)
						{
							result=fibonacci();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==2)
					{
						result=tetration();
						if(result==1)
						{
							result=tetration();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==3)
					{
						result=factorial();
						if(result==1)
						{
							result=factorial();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==4)
					{
						result=calculator();
						if(result==1)
						{
							result=calculator();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==5)
					{
						result=money_converter();
						if(result==1)
						{
							result=money_converter();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==6)
					{
						result=time_converter();
						if(result==1)
						{
							result=time_converter();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==7)
					{
						result=pascal_triangle();
						if(result==1)
						{
							result=pascal_triangle();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(math==8)
					{
						result=triangle();
						if(result==1)
						{
							result=triangle();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

				}
			}

		}



		if(n==2)
		{
			int arr;
			while(arr!=0)
			{
				cout<<" 1 - Найти в массиве элементы которые меньше 5 \n 2 - Вывести на консоль элементы первого массива, если они есть во втором \n 3 - Отсортировать массив по возрастанию и убыванию \n "
						"4 - Объединить 2 массива \n 5 - Найти 3 наибольших элемента массива "
						"\n 6 - Проверить, является ли строка палиндромом \n 7 - Записать в массив последовательность чисел с консоли \n 8 - Вывести первый и последний элемент массива "
						"\n 9 - Вывести четные числа заданного массива и остановить выполнение, если в массиве евстретилось число 237 \n 10 - Вывести на консоль элементы первого массива, которых нет во втором "
						"\n 11 - Проверить все ли элементы массива чисел уникальны \n 12 - Страны и города \n 0 - Вернуться назад "<<endl;

				try
				{
					cin>>arr;;
					if(arr<0 || arr>12 || cin.fail())
						throw exception();
				}

				catch(exception& err)
				{
					cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
					cin.clear();
					cin.ignore();
					break;
				}

				if(arr==0)
				{
					break;
				}

				if(arr>0 && arr<=12)
				{
					while(arr==1)
					{
						result=less_than_5();
						if(result==1)
						{
							result=less_than_5();
						}
						if(result==0)
						{
							//cout<<"test"<<endl;
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==2)
					{
						result=common_elems();
						if(result==1)
						{
							result=common_elems();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==3)
					{
						result=bubble_sort();
						if(result==1)
						{
							result=bubble_sort();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==4)
					{
						result=united_arrays();
						if(result==1)
						{
							result=united_arrays();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==5)
					{
						result=max_3_in_array();
						if(result==1)
						{
							result=max_3_in_array();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==6)
					{
						result=palindrome_check();
						if(result==1)
						{
							result=palindrome_check();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==7)
					{
						result=input_array();
						if(result==1)
						{
							result=input_array();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==8)
					{
						result=first_and_last_in_array();
						if(result==1)
						{
							result=first_and_last_in_array();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==9)
					{
						result=even_numbers_237();
						if(result==1)
						{
							result=even_numbers_237();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==10)
					{
						result=uncommon_numbers();
						if(result==1)
						{
							result=uncommon_numbers();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==11)
					{
						result=unique_check();
						if(result==1)
						{
							result=unique_check();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(arr==12)
					{
						result=cities();
						if(result==1)
						{
							result=cities();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}
				}

			}

		}

		if(n==3)
		{
			int pointers;
			while(pointers!=0)
			{
				cout<<" 1 - Двойной указатель \n 2 - Создать и заполнить динамический массив, вывести на экран и освободить память \n 3 - Поменять значения четных и нечетных ячеек массива \n 4 - Заполнить двумерный динамический массив случайными числами от 10 до 50 \n 0 - Вернуться назад"<<endl;

				try
				{
					cin>>pointers;
					if(pointers<0 || pointers>4 ||cin.fail())
					throw exception();
				}

				catch(exception& err)
				{
					cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
					cin.clear();
					cin.ignore();
					break;
				}

				if(pointers==0)
				{
					break;
				}

				if(pointers>0 && pointers<=4)
				{

					while(pointers==1)
					{
						result=dpointer();
						if(result==1)
						{
							result=dpointer();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(pointers==2)
					{
						result=dynamic_massive();
						if(result==1)
						{
							result=dynamic_massive();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(pointers==3)
					{
						result=massiveSwap();
						if(result==1)
						{
							result=massiveSwap();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}

					while(pointers==4)
					{
						result=twodimArrayFill();
						if(result==1)
						{
							result=twodimArrayFill();
						}
						if(result==0)
						{
							break;
						}
						else
						{
							cout<<"Ввод должен соответствовать предложенным вариантам."<<endl;
							break;
						}
					}
				}

			}
		}

		if(n==0)
		{
			break;
		}
	}


return 0;

}


int input_check(int b)
{
	while(true)
	{
		if(!cin)
		{
			//cout<<b<<endl;
			//b=0;
			cout<<"Вводимые данные должны быть только числами."<<endl;
			//cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else if(b<0)
		{
			cout<<"Ввод не может быть отрицательным числом."<<endl;
			throw underflow_error("");
			cin.clear();
			cin.ignore();
			break;
		}

		else if(b==0)
		{
			cout<<"Размер массива не должен быть равен нулю."<<endl;
			throw runtime_error("");
			cin.clear();
			cin.ignore();
			break;
		}

		else if(b>0)
		{
			break;
		}

		else
		{
			cin.clear();
			cin.ignore();
			break;
		}
	}

	return b;

}

int mass_input_check(int c)
{
	while(true)
	{
		if(!cin)
		{
			//cout<<b<<endl;
			//b=0;
			cout<<"Вводимые данные должны быть только числами."<<endl;
			cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else
		{
			cin.clear();
			cin.ignore();
			break;
		}
	}

	return c;

}

double calc_input_check(double x)
{
	while(true)
	{
		if(!cin)
		{
			//cout<<b<<endl;
			//b=0;
			cout<<"Вводимые данные должны быть только числами."<<endl;
			cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else
		{
			cin.clear();
			cin.ignore();
			break;
		}
	}

	return x;
}


int tetration_base_check(int x)
{
	while(true)
	{
		if(!cin)
		{
			//cout<<b<<endl;
			//b=0;
			cout<<"Вводимые данные должны быть только числами."<<endl;
			cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else if(x<0)
		{
			cout<<"Ввод не может быть меньше 0."<<endl;
			throw underflow_error("");
			cin.clear();
			cin.ignore();
			break;
		}

		else
		{
			cin.clear();
			cin.ignore();
			break;
		}
	}

	return x;
}



int tetration_power_check(int y)
{
	while(true)
	{
		if(!cin)
		{
			//cout<<b<<endl;
			//b=0;
			cout<<"Вводимые данные должны быть только числами."<<endl;
			cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else if(y<0)
		{
			cout<<"Ввод не может быть отрицательным числом."<<endl;
				throw underflow_error("");
				cin.clear();
				cin.ignore();
				break;
		}

		else
		{
			cin.clear();
			cin.ignore();
			break;
		}
	}

	return y;
}


string cities_input_check(string s)
{
	if(s.length()!=0)
	{
		for (int i = 0; i < s.length(); i++)
					{
						if (isdigit(s[i]))
						{
							cout<<"Ввод не может быть числом."<<endl;
							throw invalid_argument("");
							break;
						}
					}
	}




	return s;
}



