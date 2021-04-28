#include <iostream>
#include <ctime>

using namespace std;

int repeat_p=0;

int input_check(int);
int mass_input_check(int);
double* arrayMem(double*,int);
void arrayFill(double*,int);
void arrayOutput(double*, int);
double* clearMem(double*);


void arrayFillInt(int*,int);
void arrayOutputInt(int*, int);
void arrSwap(int*, int);

void showtwodimArr(int** array, int rowsofArray, int columnsofArray);
void filltwodimArray(int** array, int rowsofArray, int columnsofArray);




int dpointer()
{

	double **p=0;
	p=new double*;//в р записываю адрес памяти, выделенной для указателя double*
	*p=new double; // разыменование, по адресу который хранится в р запись значения указателя выделенного под переменную double
	**p=2; // в выделенную память записываем значение 2

	cout << **p << endl;
	delete *p;
	delete p;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_p;

	return repeat_p;
}

int dynamic_massive()
{

	int sizeOfArray=0;
	double* array = 0;

	while(true)
	{

		try
		{
			cout<<"Введите количество элементов массива: "<<endl;
			cin>>sizeOfArray;
			input_check(sizeOfArray);
			break;
		}

		catch(runtime_error& err)
		{
			continue;
		}

		catch(underflow_error &err)
		{
			continue;
		}

		catch(invalid_argument &err)
		{
			cin.clear();
			continue;
		}
	}

	array = arrayMem(array,sizeOfArray);
	arrayFill(array,sizeOfArray);
	arrayOutput(array,sizeOfArray);
	array=clearMem(array);

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_p;

	return repeat_p;
}


int massiveSwap()
{

	int sizeOfArray=0;

	while(true)
	{

		try
		{
			cout<<"Введите количество элементов массива: "<<endl;
			cin>>sizeOfArray;
			input_check(sizeOfArray);
			break;
		}

		catch(runtime_error& err)
		{
			continue;
		}

		catch(underflow_error &err)
		{
			continue;
		}

		catch(invalid_argument &err)
		{
			cin.clear();
			continue;
		}
	}

	int* array = new int[sizeOfArray];
	arrayFillInt(array,sizeOfArray);
	arrSwap(array,sizeOfArray);
	arrayOutputInt(array,sizeOfArray);

	delete []array;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_p;

	return repeat_p;
}


int twodimArrayFill()
{
	int rows = 0;
	int columns = 0;

	while(true)
	{

		try
		{
			cout<<"Введите количество строк двумерного массива: "<<endl;
			cin>>rows;
			input_check(rows);
			break;
		}

		catch(runtime_error& err)
		{
			continue;
		}

		catch(underflow_error &err)
		{
			continue;
		}

		catch(invalid_argument &err)
		{
			cin.clear();
			continue;
		}
	}

	while(true)
	{

		try
		{
			cout<<"Введите количество столбцов двумерного массива: "<<endl;
			cin>>columns;
			input_check(columns);
			break;
		}

		catch(runtime_error& err)
		{
			continue;
		}

		catch(underflow_error &err)
		{
			continue;
		}

		catch(invalid_argument &err)
		{
			cin.clear();
			continue;
		}
	}

	 int** array = new int*[rows];
	 for (int i = 0; i < rows; i++)
	 {
		 array[i] = new int[columns];
	 }

	 filltwodimArray(array,rows,columns);
	 showtwodimArr(array, rows, columns);

	 for (int i = 0; i < rows; i++)
	 {
	 delete[] array[i];
	 }
	 delete[] array;


	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_p;

	return repeat_p;

}







double* arrayMem(double* arr, int sizeOfArray)
{
	arr = new double[sizeOfArray];
	return arr;
}

void arrayFill(double* arr, int sizeOfArray)
{

	int razmer=0;

	while(true)
	{
		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<sizeOfArray;i++)
		{
			try
			{
				cin>>arr[i];
				mass_input_check(arr[i]);
			}

			catch(invalid_argument &err)
			{

				break;
			}
				razmer++;
			}

		if(razmer==sizeOfArray)
		{
			break;
		}

	}
}

void arrayOutput(double* arr, int sizeOfArray)
{
	for(int i=0;i<sizeOfArray;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

double* clearMem(double* arr)
{

	delete []arr;

	return arr;
}


void arrayFillInt(int* arr, int sizeOfArray)
{

	int razmer=0;

	while(true)
	{
		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<sizeOfArray;i++)
		{
			try
			{
				cin>>arr[i];
				mass_input_check(arr[i]);
			}

			catch(invalid_argument &err)
			{

				break;
			}
				razmer++;
			}

		if(razmer==sizeOfArray)
		{
			break;
		}

	}
}

void arrSwap(int* arr, int sizeOfArray)
{
	int tmp=0;
	if(sizeOfArray%2==0)
	{
		for(int i=0;i<sizeOfArray;i++)
			{
				if(i%2==0)
				{
					tmp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=tmp;
				}
			}
	}

	else
	{
		for(int i=0;i<sizeOfArray-1;i++)
			{
				if(i%2==0)
				{
					tmp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=tmp;
				}
			}
	}

}


void arrayOutputInt(int* arr, int sizeOfArray)
{
	for(int i=0;i<sizeOfArray;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void filltwodimArray(int** array, int rowsofArray, int columnsofArray)
{
	srand(time(0));
	 for (int i = 0; i < rowsofArray; i++)
	 {
		 for (int j = 0; j < columnsofArray; j++)
		 {
			 array[i][j] = 10 + rand() % 41;
		 }
	 }
}




void showtwodimArr(int** array, int rowsofArray, int columnsofArray)
{
	for (int i = 0; i < rowsofArray; i++)
	{
		for (int j = 0; j < columnsofArray; j++)
		{
			cout << array[i][j] << "  ";
		}
		cout <<  endl;
	}
}




