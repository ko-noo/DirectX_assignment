#include <iostream>
#include "h1.h"
#include "h2.h"

using namespace std;

//Enter your code
TV TV1;

int main() {

	//Enter your code
	TV1.setvol(50);
	TV1.channel = MBC;

	print << "TV의 소리는: " << TV1.usevol() << endl;
		print << "TV의 채널은: " << TV1.channel << endl;

}
