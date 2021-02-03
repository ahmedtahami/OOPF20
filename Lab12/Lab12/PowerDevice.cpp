#include "PowerDevice.h"
PowerDevice::PowerDevice(int pdid) {
	PDID = pdid;
	std::cout << "Power Device : " << PDID << std::endl;
}