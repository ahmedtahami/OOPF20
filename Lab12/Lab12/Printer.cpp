#include "Printer.h"
Printer::Printer(int pid, int pdid) : PowerDevice(pdid){
	PID = pid;
	std::cout << "Printer : " << PID << std::endl;
}