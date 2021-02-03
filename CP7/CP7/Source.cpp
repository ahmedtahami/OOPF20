#include<iostream>
using namespace std;
template<typename t>
class point
{
private:
	t X;
	t Y;
public:
	point() {
		X = 0;
		Y = 0;
	}
	point(t x, t y) {
		X = x;
		Y = y;
	}
	void swap() {
		t temp = X;
		X = Y;
		Y = temp;
	}
	void setX(t x) {
		X = x;
	}
	void setY(t y) {
		Y = y;
	}
	t getX() {
		return X;
	}
	t getY() {
		return Y;
	}
	void Display() {
		cout << "X: " << X << endl;
		cout << "Y = " << Y << endl;
	}
	~point() {
		X = 0;
		Y = 0;
	}
};
int main() {
	point<int> obj(12,85);
	obj.swap();
	obj.Display();
	return 0;
}