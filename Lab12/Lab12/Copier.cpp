#include "Copier.h"
Copier::Copier(int pid, int sid, int pdid) : Scanner(sid,pdid), Printer(pid,pdid), PowerDevice(pdid){}