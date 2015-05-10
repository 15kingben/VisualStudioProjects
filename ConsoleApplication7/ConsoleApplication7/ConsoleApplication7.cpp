// ConsoleApplication7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct ListNode{
	int data;
	ListNode *next;
};

void PrintList2(ListNode *node){
	using namespace std;
	ListNode *node2 = node;
	if(node2 != NULL){
		cout<< (*+node2).data << endl;
		PrintList2((*node2).next);
	}
}

void PrintList(ListNode *node){
	using namespace std;
	ListNode *node2 = node;
	while(node2 != NULL){
		cout<< (*node2).data << endl;
		node2 = (*node2).next;
	}
}

void sumInput(){
	int x[10];
	using namespace std;
	for(int i = 0; i < 10; i++){
	cout << "enter number" << i + 1<< " ";
	cin >> x[i];
	cout << "\n";
	}
	int total = 0;
	for(int i = 0; i < 10; i++){
		total += x[i];
	}
	cout << "total is " << total;
}

int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	//short p[4];
	//cout << &p[1] <<" "<< &p[2] <<" "<< &p[3]<< " " << &p[0];
	sumInput();
	system("pause");
	return 0;
}

