// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Student{
	int id;
	bool isGrad;
};

int NumGrads(Student students[], int size){
	int count = 0;
	for(int i = 0; i < size; i++){
		if(students[i].isGrad){
			count++;
		}
	}
	return count;

}


int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	int *p;
	int x = 5;
	p = &x;
	cout << p;
	system("pause");
	return 0;
}

