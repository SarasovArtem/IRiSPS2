#include "Figures.h"

const int NotUsed = system("color F0");

int main() {

	try {
		Figures stack;
		Triangle t(250, 400, 100, RGB(0, 0, 255));
		Circle c(100, 400, 50, RGB(255, 255, 0));
		ComplexFigure tc(400, 400, 80, RGB(255, 0, 0), RGB(0, 255, 0));
		stack.add(&t);
		stack.add(&c);
		stack.add(&tc);
		stack.show();
		c.draw();
		Sleep(3000);
		c.move(100, 300);
		Sleep(3000);
		t.hide();
		c.hide();
		tc.hide();
		Sleep(3000);
		stack.add(&tc);
		stack.clearStack();
		stack.show();
		Sleep(3000);
		return 0;
	}
	catch (MyException message) {
		cout << message.getError();
	}
}