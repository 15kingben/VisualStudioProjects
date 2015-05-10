// ConsoleApplication9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void f(int *p){
	*p = 5;
	p = NULL;
}

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	int a;
	int b;
	int x;
	int *q = &x;
	f(q);
	cout << add(a,b) << endl;
	system("pause");
	return 0;
}

