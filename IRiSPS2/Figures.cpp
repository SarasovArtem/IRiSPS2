#include "Figures.h"

void Figures::add(Figure* f) {
	s.push(f);
}

void Figures::show() {
	int len = s.size();
	cout << "This stack contains " << len << " elements." << endl;
	stack<Figure*, list<Figure*>> sbufer;
	for (int i = 0; i < len; i++) {
		Figure* figure = s.top();
		figure->draw();
		sbufer.push(figure);
		s.pop();
	};
	for (int i = 0; i < len; i++) {
		s.push(sbufer.top());
		sbufer.pop();
	}
}

void Figures::clearStack() {
	while (!s.empty()) {
		Figure* figure = s.top();
		figure->hide();
		s.pop();
	}
	cout << "Stack is cleared!" << endl;
}

Figures::~Figures() {};
