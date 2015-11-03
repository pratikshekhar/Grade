#include<iostream>
#include<cmath>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string a = "",f,d; int b, i; double gpa,sum=0.0,e,credit=0.0; string g[] = { "A+", "A", "A-", "B+", "B", "B-", "C+", "C", "C-", "D+", "D", "D-", "WD", "F" };

	cout << "Enter the name of the file : " << endl;
	cin >> a;
	ofstream fout(a.c_str());
	cout << "Would you please enter the number of subjects : " << endl;
	cin >> b;
	for (i = 1; i <= b; i++)
	{
		cout << "Please enter the name of the subject :" << endl;
		cin >> d;
		cout << "Please enter credit hours :" << endl;
		cin >> e;
		sum += e;
		top:
		cout << "Please enter the grade :" << endl;
		cin >> f;
		
		if (f == g[0]||f==g[1])
		{
			credit += e*4.0;
		}
		else if (f == g[2])
		{
			credit += e*3.70;
		}
		else if (f == g[3])
		{
			credit += e*3.33;
		}
		else if (f == g[4])
		{
			credit += e*3.0;
		}
		else if (f == g[5])
		{
			credit += e*2.70;
		}
		else if (f == g[6])
		{
			credit += e*2.30;
		}
		else if (f == g[7])
		{
			credit += e*2.0;
		}
		else if (f == g[8])
		{
			credit += e*1.70;
		}
		else if (f == g[9])
		{
			credit += e*1.30;
		}
		else if (f == g[10])
		{
			credit += e*1.0;
		}
		else if (f == g[11])
		{
			credit += e*0.70;
		}
		else if (f == g[12]||f==g[13])
		{
			credit += e*0.0;
		}
		
		else
		{
			cout << "Please enter a vaild input :" << endl;
			goto top;
		}
		fout <<i<<":"<< "\t" << setw(20) << d << setw(20) << e <<setw(20)<< f << endl;
	}
	gpa = credit / sum;
	cout << "GPA :" << gpa<<endl;
	fout << "GPA :" << gpa<<endl;
	fout.close();
	system("pause");
	return 0;
}