#include "Rectangle_my.h"


Rectangle_my::Rectangle_my(double w, double h, char s) {
	width = w;
	height = h;
	symbol = s;
}

void Rectangle_my::showFigure()
{
	
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << symbol << " ";
		}
		cout << endl;
	}
	
}

void change_symbol(Rectangle_my* r, char _s)
{
	r->symbol = _s;
}

void change_symbol_byUser(Rectangle_my* r)
{
	char s;
	cout << "Enter the symbol: ";
	cin >> s;
	r->symbol = s;
}


void showPlainFigure (Rectangle_my *r)
{
	for (int i = 0; i < r->height; i++) {
		for (int j = 0; j < r->width; j++) {
			if (i == 0 || j == 0 || i == r->height - 1 || j == r->width - 1)
				cout << r->symbol << " ";
			else
				cout << "  ";
		}
		cout << endl;
	}
}

void changeSizeByUser(Rectangle_my* r)
{
	cout << "Enter new size: ";
	double w;
	cin >> w;
	double h;
	cin >> h;
	r->width = w;
	r->height = h;
	
}
