#pragma once
class swimmingPool
{
private:
	double length;
	double width;
	double depth;
	double fillingRate;
	double drainingRate;
public:
	void setLength(double _length); //feets
	void setWidth(double _width); //feets
	void setDepth(double _depth); //feets
	void setFillingRate(double _fillingRate); //galoons per minute
	void setDrainingRate(double _drainingRate); //galoons per minute

	double getVolumeinGallons();
	double getLength();
	double getWidth();
	double getDepth();
	double getFillingRate();
	double getDrainingRate();
	double getEmptyPoolFillTime();
	double getEmptyPoolDrainTime();
};

