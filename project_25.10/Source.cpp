#include "Rectangle_my.h"




int main() {

	Rectangle_my r1(10, 5, '@');
	r1.showFigure();
	change_symbol(&r1, 'x');
	cout << endl;
	r1.showFigure();
	cout << endl;
	change_symbol_byUser(&r1);
	cout << endl;
	r1.showFigure();
	cout << endl;
	showPlainFigure(&r1);
	cout << endl;
	changeSizeByUser(&r1);
	cout << endl;
	r1.showFigure();

	return 0;
}

// создать метод замена символа через юзера
// заполняем только периметр сравнить первую и последнюю строчку и колонку