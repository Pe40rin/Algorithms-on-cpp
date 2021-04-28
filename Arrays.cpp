#include <iostream>
#include <exception>
using namespace std;
int repeat_a=0;

int input_check(int);
int mass_input_check(int);
string cities_input_check(string);
void less_than_5_func(int* arr, int n);
void common_elems_func(int* arr1,int* arr2,int n, int m);
void  bubble_sort_func(int* arr, int n);
void united_arrays_func(int arr1[20], int arr2[20], int arr3[40]);
void max_3_in_array_func(int* arr, int n);
void palindrome_check_func(string s);
void first_and_last_in_array(int* arr, int n);
void even_numbers_237_func(int* arr, int n);
void uncommon_numbers_func(int* arr1,int* arr2,int n, int m);
void unique_check_func(int* arr, int n);
void cities_func(string **arr1, string* arr2, int *n, int *m);



int less_than_5()
{
	int n;

	while(true)
	{

		try
		{
			cout<<"Введите количество элементов массива: "<<endl;
			cin>>n;
			input_check(n);
			break;
		}

		catch(runtime_error& err)
		{
			//cout<<"Runtime error."<<endl;
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


	int* numbers=new int[n];
	int razmer=0;

	while(true)
	{
		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<n;i++)
		{
			try
			{
				cin>>numbers[i];
				mass_input_check(numbers[i]);
			}

			catch(invalid_argument &err)
			{
				//cin.clear();
				//fflush(stdin);
				break;
			}
				razmer++;
			}

		if(razmer==n)
		{
			//cout<<"test"<<endl;
			break;
		}

	}


	less_than_5_func (numbers,n);

	delete []numbers;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;
	return repeat_a;

}

int common_elems()
{
	int n;

	while(true)
	{
		try
		{
			cout<<"Введите количество элементов первого массива: "<<endl;
			cin>>n;
			input_check(n);
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


	int* numbers_1 = new int[n];
	int razmer1=0;


	while(true)
	{
		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<n;i++)
		{
			try
			{
				cin>>numbers_1[i];
				mass_input_check(numbers_1[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}

			razmer1++;
		}

		if(razmer1==n)
		{
			break;
		}
	}

	int m;

	while(true)
	{
		try
		{
			cout<<"Введите количество элементов второго массива: "<<endl;
			cin>>m;
			input_check(m);
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


	int* numbers_2 = new int[m];
	int razmer2=0;


	while(true)
	{
		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<m;i++)
		{
			try
			{
				cin>>numbers_2[i];
				mass_input_check(numbers_2[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}

			razmer2++;
		}

		if(razmer2==m)
		{
			break;
		}
	}


	common_elems_func(numbers_1,numbers_2,n,m);

	delete []numbers_1;
	delete []numbers_2;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;


}

int bubble_sort()
{
	int n,razmer=0;

	while(true)
	{

		try
		{
			cout<<"Введите количество элементов массива: "<<endl;
			cin>>n;
			input_check(n);
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

	int* numbers = new int[n];

	while(true)
	{

		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<n;i++)
		{
			try
			{
				cin>>numbers[i];
				mass_input_check(numbers[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}
			razmer++;
		}
		if(razmer==n)
		{
			break;
		}
	}

	if(razmer==n)
	{
		bubble_sort_func(numbers, n);
	}

	delete []numbers;


	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int united_arrays()
{

	int numbers_1[20]={1,6,42,654,5487,4313,54,865,215,4465,2654,421,10,542,16,4878,451,45,12,7};
	int numbers_2[20]={12,54,68541,54,48,98,4965,8456,98798,454,653,894,74,79,68,12,35,39,67,848};
	int united_numbers[40];

	united_arrays_func(numbers_1, numbers_2, united_numbers);

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int max_3_in_array()
{
	int n,razmer=0;;

	while(true)
	{
		try
		{
			cout<<"Введите количество элементов массива: "<<endl;
			cin>>n;
			input_check(n);
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

	int* numbers = new int [n];

	while(true)
	{

		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<n;i++)
		{
			try
			{
				cin>>numbers[i];
				mass_input_check(numbers[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}
			razmer++;
		}
		if(razmer==n)
		{
			break;
		}
	}


	if(razmer==n)
	{
		max_3_in_array_func(numbers,n);
	}

	delete []numbers;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int palindrome_check()
{
	string s;
	cout<<"Введите строку: ";
	cin >> s;

	palindrome_check_func(s);

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;
	return repeat_a;
}

int input_array()
{
	int n,razmer=0;

	while(true)
		{
			try
			{
				cout<<"Введите количество элементов массива: "<<endl;
				cin>>n;
				input_check(n);
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

		int* numbers = new int[n];

		while(true)
		{

			cout<<"Введите элементы массива: "<<endl;
			for(int i=0;i<n;i++)
			{
				try
				{
					cin>>numbers[i];
					mass_input_check(numbers[i]);
				}

				catch(invalid_argument &err)
				{
					break;
				}
				razmer++;
			}
			if(cin)
			{
				break;
			}
		}

	if(razmer==n)
	{
		cout<<"Ваш массив: "<<endl;
		for(int i=0; i<n;i++)
		{
			cout<<numbers[i]<<" ";
		}

		cout<<endl;
	}

	delete []numbers;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int first_and_last_in_array()
{
	int n,razmer=0;

	while(true)
		{
			try
			{
				cout<<"Введите количество элементов массива: "<<endl;
				cin>>n;
				input_check(n);
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

		int* numbers = new int[n];

		while(true)
		{

			cout<<"Введите элементы массива: "<<endl;
			for(int i=0;i<n;i++)
			{
				try
				{
					cin>>numbers[i];
					mass_input_check(numbers[i]);
				}

				catch(invalid_argument &err)
				{
					break;
				}
				razmer++;
			}
			if(razmer==n)
			{
				break;
			}
		}

	if(razmer==n)
	{
		first_and_last_in_array(numbers,n);
	}

	delete []numbers;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int even_numbers_237()
{
	int n,razmer=0;

	while(true)
		{
			try
			{
				cout<<"Введите количество элементов массива: "<<endl;
				cin>>n;
				input_check(n);
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

		int* numbers = new int[n];

		while(true)
		{

			cout<<"Введите элементы массива: "<<endl;
			for(int i=0;i<n;i++)
			{
				try
				{
					cin>>numbers[i];
					mass_input_check(numbers[i]);
				}

				catch(invalid_argument &err)
				{
					break;
				}
				razmer++;
			}
			if(razmer==n)
			{
				break;
			}
		}

	if(razmer==n)
	{
		even_numbers_237_func(numbers,n);
	}

	delete []numbers;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int uncommon_numbers()
{
	int n;

	while(true)
	{
		try
		{
			cout<<"Введите количество элементов массива: "<<endl;
			cin>>n;
			input_check(n);
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

	int* numbers_1 = new int[n];
	int razmer1=0;


	while(true)
	{
		cout<<"Введите элементы массива: "<<endl;
		for(int i=0;i<n;i++)
		{
			try
			{
				cin>>numbers_1[i];
				mass_input_check(numbers_1[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}

			razmer1++;
		}

		if(razmer1==n)
		{
			break;
		}
	}

	int m;
	while(true)
	{
		try
		{
			cout<<"Введите количество элементов первого массива: "<<endl;
			cin>>m;
			input_check(m);
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


	int* numbers_2 = new int[m];
	int razmer2=0;


	while(true)
	{
		cout<<"Введите элементы первого массива: "<<endl;
		for(int i=0;i<m;i++)
		{
			try
			{
				cin>>numbers_2[i];
				mass_input_check(numbers_2[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}

			razmer2++;
		}

		if(razmer2==m)
		{
			break;
		}
	}

	uncommon_numbers_func(numbers_1,numbers_2,n,m);

	delete []numbers_1;
	delete []numbers_2;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int unique_check()
{
	int n,razmer=0;

	while(true)
	{
		try
		{
			cout<<"Введите количество элементов второго массива: "<<endl;
			cin>>n;
			input_check(n);
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

	int* numbers = new int[n];

	while(true)
	{
		cout<<"Введите элементы второго массива: "<<endl;
		for(int i=0;i<n;i++)
		{
			try
			{
				cin>>numbers[i];
				mass_input_check(numbers[i]);
			}

			catch(invalid_argument &err)
			{
				break;
			}
			razmer++;
			}

		if(razmer==n)
		{
			break;
		}
	}


	unique_check_func(numbers,n);
	delete []numbers;

	cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
	cin>>repeat_a;

	return repeat_a;
}

int cities()
{
	int n,m;

	while(true)
	{
		try
		{
			cout<<"Введите количество стран - n: "<<endl;
			cin>>n;
			input_check(n);
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
			cout<<"Введите количество городов - m: "<<endl;
			cin>>m;
			input_check(m);
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

	int m1=m+1;
	int counter=0;
	string cities[n][m1];
	string checker[n*m1];
	string input[m];

	cout<<"Введите название страны и названия m городов в этой стране, аналогично на следующей строке и так n строк "<<endl;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m1;j++)
			{
				cin>>cities[i][j];
				checker[counter]=cities[i][j];
				//cout<<checker[counter]<<endl;
				counter++;
			}
	}


	int razmer=0;
	int error=0;
	while(true)
	{
		for(int i=0;i<n*m1;i++)
		{
			try
			{
				cities_input_check(checker[i]);
			}

			catch(invalid_argument &err)
			{
				error=1;
				break;
			}

			razmer++;
		}

		if(razmer==n*m1)
		{
			break;
		}

		if(error==1)
		{
			break;
		}
	}


	if(error==1)
	{
		cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
		cin>>repeat_a;

		return repeat_a;
	}

	else
	{
		cout<<"Введите m городов из перечисленных выше: "<<endl;
		for(int i=0;i<m;i++)
		{
			cin>>input[i];
		}

		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<m1;k++)
				{
					if(input[i]==cities[j][k])
					{
						cout<<cities[j][0]<<endl;
					}
				}
			}
		}

		cout<<"\nДля повтора задачи нажмите 1, для выхода 0."<<endl;
		cin>>repeat_a;

		return repeat_a;
	}

}


//РАЗДЕЛ С ФУНКЦИЯМИ



void less_than_5_func(int* arr, int n)
{

	for(int i=0;i<n;i++)
	{
		if(arr[i]<5)
			cout<<arr[i]<<" ";
	}

}

void common_elems_func(int* arr1,int* arr2,int n, int m)
{

	bool match=false;

	for (int i = 0; i <n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr1[i] == arr2[j])
			{
				match = true;
			}
		}

		if(match==true)
		{
			cout<<arr1[i]<<" ";
			match=false;
		}
	}
}

void  bubble_sort_func(int* arr, int n)
{
	int tmp=0;

	cout<<"\nСортировка по возрастанию: \n";

	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[j]>arr[j+1])
			{
				tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}

	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<"\nСортировка по убыванию: \n";


	for(int i=0; i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]<arr[j+1])
			{
				tmp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}

		}

	}


	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}


void united_arrays_func(int arr1[20], int arr2[20], int arr3[40])
{
	for(int i=0,j=0; i<20&&j<20; i++,j++)
	{
		arr3[i]=arr1[i];
		arr3[j+20]=arr2[j];
	}

	for(int i=0;i<40;i++)
	{
		cout<<arr3[i]<<" ";
	}
}

void max_3_in_array_func(int* arr, int n)
{
	int max1,max2,max3;
	max1=max2=max3=0;

	for(int i=0; i<n; i++)
	{
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}

	for(int i=0; i<n; i++)
	{
		if(arr[i]>max2 && arr[i]<max1)
		{
			max2=arr[i];
		}
	}

	for(int i=0; i<n; i++)
	{
		if(arr[i]>max3 && arr[i]<max2 && arr[i]<max1)
		{
			max3=arr[i];
		}
	}

	cout<<max1<<" "<<max2<<" "<<max3<<endl;

}



void palindrome_check_func(string s)
{
	bool palindrom=true;
		/*for (int i = 0; i < s.length()/2; i++)
		{
			//cout<<s[i]<<" "<<s[s.length() - i - 1]<<" "<<i<<endl;
			if (s[i] != s[s.length() - i - 1])
				palindrom = false;
		}*/

		// cout<<s[s.length()-1]<<" "<<s[s.length()-2]<<" "<<s[s.length()-3]<<" "<<s[s.length()-4]<<" "<<s[s.length()]<<endl; последнее значение пустое

	for(int i=0, j=s.length()-1; (i<=s.length()/2) && (j>=s.length()/2);i++,j--)
	{
		palindrom =(s[i]==s[j])?true:false;
		//cout<<s[i]<<" "<<s[j]<<" "<<palindrom<<endl;
	}

	if(palindrom == false)
		cout<<"Слово не палиндром."<<endl;
	else
		cout<<"Слово палиндром."<<endl;

}

void first_and_last_in_array(int* arr, int n)
{
	cout<<arr[0]<<" "<<arr[n-1]<<endl;
}

void even_numbers_237_func(int* arr, int n)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<" ";
		}

		else if(arr[i]==237)
		{
			cout<<"В вашем массиве есть число 237, работа остановлена."<<endl;
			break;
		}
	}
}

void uncommon_numbers_func(int* arr1,int* arr2,int n, int m)
{
	for(int i=0; i< n;i++)
	{
		bool match=false;
		for (int j=0;j<m;j++)
		{
			if(arr1[i] == arr2[j])
			{
				match=true;
			}

			if(match)
			{
				continue;
			}


		}

		if(match==false)
		{
			cout<<arr1[i]<<" ";
		}
	}
}

void unique_check_func(int* arr1, int n)
{
	bool unique=true;

	for(int i=0; i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr1[i] == arr1[j])
			{
				unique=false;
			}
		}

		if(unique==false)
		{
			cout<<"Значения не уникальны. "<<endl;
			break;
		}

	}


	if(unique)
	{
		cout<<"Значения уникальны."<<endl;
	}
}

void cities_func(string **arr1, string* arr2, int n, int m1, int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m1;k++)
			{
				if(arr2[i]==arr1[j][k])
				{
					cout<<arr1[j][0]<<endl;
				}
			}
		}
	}
}


