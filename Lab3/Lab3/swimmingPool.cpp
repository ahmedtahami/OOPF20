#include "swimmingPool.h"

void swimmingPool::setDepth(double _depth)
{
	depth = _depth;
}
void swimmingPool::setLength(double _length)
{
	length = _length;
}
void swimmingPool::setWidth(double _width)
{
	width = _width;
}
void swimmingPool::setDrainingRate(double _drainingRate)
{
	drainingRate = _drainingRate;
}
void swimmingPool::setFillingRate(double _fillingrate)
{
	fillingRate = _fillingrate;
}
double swimmingPool::getDepth()
{
	return depth;
}
double swimmingPool::getLength()
{
	return length;
}
double swimmingPool::getWidth()
{
	return width;
}
double swimmingPool::getDrainingRate()
{
	return drainingRate;
}
double swimmingPool::getFillingRate()
{
	return fillingRate;
}
double swimmingPool::getVolumeinGallons()
{
	return length * width * depth * 7.5;
}
double swimmingPool::getEmptyPoolFillTime()
{
	double vol = getVolumeinGallons();
	double fillRate = getFillingRate();
	return vol / fillRate;
}
double swimmingPool::getEmptyPoolDrainTime()
{
	double vol = getVolumeinGallons();
	double drainRate = getDrainingRate();
	return vol/drainRate;
}
