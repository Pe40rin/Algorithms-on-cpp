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
	cout<<"�������� �����, � ��� ������ ����������: \n 1 - �������������� ������ \n 2 - ������� \n 3 - ��������� \n 0 - ��������� ��������� "<<endl;

	try
	{
		cin>>n;
		if(n<0 || n>3 || cin.fail())
			throw exception();
	}
	catch(exception& err)
	{
		cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
				cout<<" 1 - ����� ��������� \n 2 - �������� \n 3 - ��������� \n 4 - ����������� \n 5 - ��������� ����� \n 6 - ��������� ������� \n 7 - ����������� ������� \n 8 - ����� ������������ \n 0 - ��������� �����"<<endl;

				try
				{
					cin>>math;;
					if(math<0 || math>8 ||cin.fail())
						throw exception();
				}
				catch(exception& err)
				{
					cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
				cout<<" 1 - ����� � ������� �������� ������� ������ 5 \n 2 - ������� �� ������� �������� ������� �������, ���� ��� ���� �� ������ \n 3 - ������������� ������ �� ����������� � �������� \n "
						"4 - ���������� 2 ������� \n 5 - ����� 3 ���������� �������� ������� "
						"\n 6 - ���������, �������� �� ������ ����������� \n 7 - �������� � ������ ������������������ ����� � ������� \n 8 - ������� ������ � ��������� ������� ������� "
						"\n 9 - ������� ������ ����� ��������� ������� � ���������� ����������, ���� � ������� ������������ ����� 237 \n 10 - ������� �� ������� �������� ������� �������, ������� ��� �� ������ "
						"\n 11 - ��������� ��� �� �������� ������� ����� ��������� \n 12 - ������ � ������ \n 0 - ��������� ����� "<<endl;

				try
				{
					cin>>arr;;
					if(arr<0 || arr>12 || cin.fail())
						throw exception();
				}

				catch(exception& err)
				{
					cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
				cout<<" 1 - ������� ��������� \n 2 - ������� � ��������� ������������ ������, ������� �� ����� � ���������� ������ \n 3 - �������� �������� ������ � �������� ����� ������� \n 4 - ��������� ��������� ������������ ������ ���������� ������� �� 10 �� 50 \n 0 - ��������� �����"<<endl;

				try
				{
					cin>>pointers;
					if(pointers<0 || pointers>4 ||cin.fail())
					throw exception();
				}

				catch(exception& err)
				{
					cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
							cout<<"���� ������ ��������������� ������������ ���������."<<endl;
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
			cout<<"�������� ������ ������ ���� ������ �������."<<endl;
			//cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else if(b<0)
		{
			cout<<"���� �� ����� ���� ������������� ������."<<endl;
			throw underflow_error("");
			cin.clear();
			cin.ignore();
			break;
		}

		else if(b==0)
		{
			cout<<"������ ������� �� ������ ���� ����� ����."<<endl;
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
			cout<<"�������� ������ ������ ���� ������ �������."<<endl;
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
			cout<<"�������� ������ ������ ���� ������ �������."<<endl;
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
			cout<<"�������� ������ ������ ���� ������ �������."<<endl;
			cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else if(x<0)
		{
			cout<<"���� �� ����� ���� ������ 0."<<endl;
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
			cout<<"�������� ������ ������ ���� ������ �������."<<endl;
			cin.clear();
			fflush(stdin);
			//cin.ignore(1,'\n');
			throw invalid_argument("");
			break;
		}

		else if(y<0)
		{
			cout<<"���� �� ����� ���� ������������� ������."<<endl;
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
							cout<<"���� �� ����� ���� ������."<<endl;
							throw invalid_argument("");
							break;
						}
					}
	}




	return s;
}



