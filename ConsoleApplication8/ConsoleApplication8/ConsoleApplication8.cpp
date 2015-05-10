// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	ifstream inFile;
	inFile.open("readben.txt");
	char s[100] = "";
	int y = 0;
	while(inFile.getline(s, 100)){
	for(int x = 0; x < 100; x++){
		cout << s[x];
	}
	y++;}




	system("pause");
	return 0;
}