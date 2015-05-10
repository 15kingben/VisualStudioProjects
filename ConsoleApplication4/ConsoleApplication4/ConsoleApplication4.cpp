// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void print();


int _tmain(int argc, _TCHAR* argv[])
{
	print();
	


	return 0;
}

void print(){
	int total = 0;
	for(int i = 1;i < 11; i++){
		total +=i;
	}
	cout<< total<< endl;
	system("pause");
}