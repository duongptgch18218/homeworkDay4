#include <iostream>
#include "../include/line.h"

using namespace std;
int main(int argc, char *argv[])
{
	Line a("ab", 5);
	// cout << t.get_length() <<endl;
	// t.set_length(10);
	// cout << t.get_length() << endl;

	Line b("cd", 7);
	if(b == a){
		cout << "A == B" << endl;
	}else{
		cout << "A != B" << endl;
	}

	a = a + 5;
	b = b - 3;

	if(b == a){
		cout << "A == B" << endl;
	}else{
		cout << "A != B" << endl;
	}

	


}