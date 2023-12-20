#pragma once
#include <iostream>
#include <list>
#include <stack>
#include <math.h>
#include <windows.h>
#include <windowsx.h>

using namespace std;

class MyException { // класс исключений
private:
	string resultError;
public:
	MyException(string message);

	string getError();

	~MyException();
};