#pragma once
#include"Scanner.h"
#include"Printer.h"
class Copier : public Scanner, public Printer
{
public:
	Copier(int pid, int sid, int pdid);
};

