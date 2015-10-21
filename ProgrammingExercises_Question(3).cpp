#include <iostream>
using namespace std;
class Move{
private:
	double x;
	double y;
public:
    Move (double a = 0, double b = 0){
		x = a;
		y = b;
	}
	void showmove () const{
		cout << x << endl;
		cout <<  y << endl;
	}
	void reset (double a = 0, double b = 0){
		x = a;
		y = b;
	}
};
void main (){
}
