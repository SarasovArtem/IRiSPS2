#pragma once
#include "MyException.h"

class Figure {
protected:
	int x, y;
	HWND hwnd;       // �������������� ����
	HDC hdc;         // �������� �����������
	RECT rt;         // ������������� ����
public:
	Figure();
	Figure(int _x, int _y);

	virtual void draw() = 0;
	virtual void hide() = 0;
	void move(int new_x, int new_y);

	~Figure();
};
