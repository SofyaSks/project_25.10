#include <iostream>;
using namespace std;

class Rectangle_my{
private:
	double width, height;
	char symbol;

public:

	Rectangle_my(double w, double h, char s);

	void showFigure();

	friend void change_symbol(Rectangle_my *r, char _s);

	friend void change_symbol_byUser(Rectangle_my* r);

	friend void showPlainFigure(Rectangle_my *r);
	
	friend void changeSizeByUser(Rectangle_my* r);
};

