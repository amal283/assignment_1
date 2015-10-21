#include <iostream>
#include <string>
using namespace std;
class Person{
private:
	static const int LIMIT = 25;
	string lname;
	char fname[LIMIT];
public:
	Person () {
		lname = ""; fname[0] = '\0';
	}
	Person (const string & ln, const char * fn = "Heyyyou"){
		lname = ln;
		int i=0;
		while (i<25){
		        fname [i] = fn [i];
				i++;

		}
	}
	void show () const{
		cout << fname << " " <<lname << endl;
	}
	void FormalShow () const{
		cout << lname << ", " << fname << endl;
	}
};
void main(){
	Person one;
	one.show ();
    one.FormalShow();
	Person two ("Smuthecraft");
	two.show ();
	two.FormalShow ();
	Person three ("Dimwiddy", "Sam");
	three.show ();
	three.FormalShow ();
}
