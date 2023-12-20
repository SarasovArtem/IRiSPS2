#include "MyException.h"

MyException::MyException(string message) {
	resultError = message;
}

string MyException::getError() {
	return resultError;
}

MyException::~MyException() {};