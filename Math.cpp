#include <iostream>
#include<cmath>
#include <iomanip>
int repeat_m=0;

using namespace std;

int input_check(int);
double calc_input_check(double x);
int tetration_base_check(int x);
int tetration_power_check(int y);


double factorial_func(int n);
void fibonacci_func(int n);
void tetration_func(int n, int m);
void calculator_func(int n,int m,int oper);
void money_converter_func(double rub, double usd, double lira);
void time_converter_func(int seconds);
void pascal_triangle_func(int level);
void triangle_func(int level);




int fibonacci()
{
	int input;

	while(true)
	{

		try
		{
			cout<<"������� ���������� ��������� ������������������ ��� ������: "<<endl;
			cin>>input;
			input_check(input);
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

	fibonacci_func(input);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}

int tetration()
{
	int base,power;

	while(true)
	{

		try
		{
			cout<<"������� ��������� �����: "<<endl;
			cin>>base;
			tetration_base_check(base);
			break;
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
			cout<<"������� ������������ �������: "<<endl;
			cin>>power;
			tetration_power_check(power);
			break;
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

	tetration_func(base,power);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}

int factorial() // ��������� ���� ����� ������� - ��� ��������� ������� ��� ����� ���������� ?
{
	int fact;

	while(true)
	{

		try
		{
			cout<<"������� ����� ��� ���������� ����������: "<<endl;
			cin>>fact;
			tetration_base_check(fact);
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

	cout<<factorial_func(fact)<<endl;

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}

int calculator() // ��� ������ �������� �� ���� � �������
{
	int operation;
	double x,y;

	while(true)
	{
		cout<<"������� ����� x: "<<endl;

		try
		{
			cin>>x;
			calc_input_check(x);
		}

		catch(invalid_argument &err)
		{
			continue;
		}
	}


	while(true)
	{
		cout<<"������� ����� y: "<<endl;

		try
		{
			cin>>y;
			calc_input_check(y);
		}

		catch(invalid_argument &err)
		{
			continue;
		}
	}

	cout<<"������� ����� ��������: \n" <<" 1 - ��������; \n 2 - ���������; \n 3 - ���������; \n 4 - �������."<<endl;
	cin>>operation;

	calculator_func(x, y, operation);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}

int money_converter()
{
	double rub;
	double usd=73.39, lira = 9.66;

	while(true)
	{
		try
		{
			cout<<"������� ����� � ������: "<<endl;
			cin>>rub;
			input_check(rub);
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

	money_converter_func( rub,  usd,  lira);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;

}



int time_converter()
{
	int seconds_input;

	while(true)
	{
		try
		{
			cout<<"������� ���������� ������: "<<endl;
			cin>>seconds_input;
			input_check(seconds_input);
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

	time_converter_func(seconds_input);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}

int pascal_triangle()
{
	int n;

	while(true)
	{
		try
		{
			cout<<"������� ���������� ������� ������������: "<<endl;
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


	pascal_triangle_func(n);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}

int triangle()
{
	int levels;

	while(true)
	{
		try
		{
			cout<<"������� ���������� ������� ������ ��� ������������: "<<endl;
			cin>>levels;
			input_check(levels);
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

	triangle_func(levels);

	cout<<"\n��� ������� ������ ������� 1, ��� ������ 0."<<endl;
	cin>>repeat_m;

	return repeat_m;
}


//������ � ���������

double factorial_func(int n)
{
	double result = 1;
	for(int i=1;i<=n;i++)
		{
			result*=i;
		}

	return result;
}

void fibonacci_func(int n)
{
	int a=1,b=1,c;

	if(n==1)
		cout<<"����������������� ��������� �� �������� � ������� 1: \n"<<a;

	else if(n==2)
		cout<<"����������������� ��������� �� �������� � ������� 2: \n"<<a<<" "<<b;

	else
	{
		cout<<"����������������� ��������� �� �������� � ������� "<<n<<": \n";
		cout<<a<<" "<<b<<" ";
		for(int i = 3; i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			cout<<b<<" ";
		}
	}
}

void tetration_func(int n, int m)
{
	long double tetration=n;
	for (int i=1;i<m;i++)
	{
		tetration=pow(n,tetration);
		//cout<<tetration<<"\n";
	}

	cout<<tetration<<endl;
}

void calculator_func(int x,int y,int oper)
{
	if(oper==1)
	{
		cout<<"����� �����: " << x+y<<endl;
	}

	else if(oper==2)
	{
		cout<<"�������� �����: " << x-y<<endl;
	}

	else if(oper==3)
	{
		cout<<"������������ �����: " << x*y<<endl;
	}

	else if(oper == 4)
	{
		/*if(y==0)
		{
			cout<<"������������ �������� - ������� �� 0."<<endl;
		}
		else
		{
			cout<<"������� �����: " << x/y<<endl;
		}*/

		try
		{
			if(y==0)
				throw exception();
		}

		catch(exception& err)
		{
			cout<<"�� ���� ������ ������."<<endl;
		}
	}

	else
	{
		cout<<"�������� �� ����������."<<endl;
	}
}

void money_converter_func(double rub, double usd, double lira)
{
	double usd_converted=rub/usd, lira_converted = rub/lira;
	//cout<<usd_converted<<"\n";
	int usd_convert_mod_100 = (int)usd_converted%100;
	int lira_convert_mod_100 = (int)lira_converted%100;

	if((int)usd_converted%10==1 &&  usd_convert_mod_100!=11)
	{
		cout<<usd_converted<<" ������ \n"<<endl;
	}

	else if(((int)usd_converted%10==2 || (int)usd_converted%10==3 || (int)usd_converted%10==4) && ( usd_convert_mod_100<11 ||  usd_convert_mod_100>14) )
	{
		cout<<usd_converted<<" ������� \n"<<endl;
	}

	else
	{
		cout<<usd_converted<<" �������� \n"<<endl;
	}

	if((int)lira_converted%10==1 &&  lira_convert_mod_100!=11)
	{
		cout<<lira_converted<<" ���� \n"<<endl;
	}

	else if(((int)lira_converted%10==2 || (int)lira_converted%10==3 || (int)lira_converted%10==4) && ( lira_convert_mod_100<11 ||  lira_convert_mod_100>14) )
	{
		cout<<lira_converted<<" ���� \n"<<endl;
	}

	else
	{
		cout<<lira_converted<<" ��� \n"<<endl;
	}
}

void time_converter_func(int seconds)
{
	int months,days,hours,minutes,remainder;

	int seconds_per_minute = 60;
	int seconds_per_hour = 60*60;
	int seconds_per_day = 60*60*24;
	int seconds_per_month = seconds_per_day*30;
	months = (int)(seconds/seconds_per_month);
	remainder = seconds - months*seconds_per_month;
	days = (int)(remainder/seconds_per_day);
	remainder-=days*seconds_per_day;
	hours = (int)(remainder/seconds_per_hour);
	remainder-=hours*seconds_per_hour;
	minutes = (int)(remainder/seconds_per_minute);
	remainder-=minutes*seconds_per_minute;

	if(months%10==1 &&  months%100!=11)
	{
		cout<<months<<" ����� ";
	}

	else if((months%10==2 || months%10==3 || months%10==4) && ( months%100<11 ||  months%100>14) )
	{
		cout<<months<<" ������ ";
	}

	else
	{
		cout<<months<<" ������� ";
	}

	if(days%10==1 &&  days%100!=11)
	{
		cout<<days<<" ���� ";
	}

	else if((days%10==2 || days%10==3 || days%10==4) && ( days%100<11 ||  days%100>14) )
	{
		cout<<days<<" ��� ";
	}

	else
	{
		cout<<days<<" ���� ";
	}

	if(hours%10==1 &&  hours%100!=11)
	{
		cout<<hours<<" ��� ";
	}

	else if((hours%10==2 || hours%10==3 || hours%10==4) && ( hours%100<11 ||  hours%100>14) )
	{
		cout<<hours<<" ���� ";
	}

	else
	{
		cout<<hours<<" ����� ";
	}

	if(minutes%10==1 &&  minutes%100!=11)
	{
		cout<<minutes<<" ������ ";
	}

	else if((minutes%10==2 || minutes%10==3 || minutes%10==4) && ( minutes%100<11 ||  minutes%100>14) )
	{
		cout<<minutes<<" ������ ";
	}

	else
	{
		cout<<minutes<<" ����� ";
	}

	if(remainder%10==1 &&  remainder%100!=11)
	{
		cout<<remainder<<" ������� ";
	}

	else if((remainder%10==2 || remainder%10==3 || remainder%10==4) && ( remainder%100<11 ||  remainder%100>14) )
	{
		cout<<remainder<<" ������� ";
	}

	else
	{
		cout<<remainder<<" ������ ";
	}
}

void pascal_triangle_func(int level)
{
	int longest_num=0,space=0;

	double coeff;
		//cout<<"1 \n";

		//longest_num=factorial_pascal(n)/(factorial_pascal(n/2)*factorial_pascal(n/2));
		//cout<<factorial_pascal(n)<<" "<<factorial_pascal(n/2)<<" "<<endl;

	for (int i=level;i<=level;i++)
	{
		for(int j=0;j<=i;j++) // ������� ����� ������� ����� � ��������� ������
		{
			coeff = factorial_func(i)/(factorial_func(j)*factorial_func(i-j));
				if(coeff>longest_num)
					longest_num=coeff;
		}
	}


	while(longest_num!=0) //������� ���������� ���� � ����� ������� �����
	{
		longest_num/=10;
		//cout<<longest_num<<endl;
		space++;
	}
		//cout<<space<<endl;


	for (int i=0;i<=level;i++) // ���� ��� �������� �����
	{
		for(int j=0;j<=level-i;j++) // ���� ��� ������ ��������
		{
			cout<<setw(space*(level-i));
			//cout<<" "*(n-i);
		}

		for(int j=0;j<=i;j++) // ���� ��� �������� �����-�
		{
			coeff = factorial_func(i)/(factorial_func(j)*factorial_func(i-j));
			//cout<<coeff<<setw(10);
			cout<<coeff<<setw(2*space);
		}

		cout<<"\n";
	}
}

void triangle_func(int level)
{
	for(int i=0; i<level; i++)
	{
		for(int j=0;j<=i;j++)
		{
			cout<<i+1;
		}

		cout<<"\n";
	 }
}
