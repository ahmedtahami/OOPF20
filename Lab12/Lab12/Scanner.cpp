#include "Scanner.h"
Scanner::Scanner(int sid, int pdid) : PowerDevice(pdid) {
	SID = sid;
	std::cout << "Scanner : " << SID << std::endl;
}