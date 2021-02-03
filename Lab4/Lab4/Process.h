#pragma once
class Process
{
private:
	const int p_id;
	static int sharedLocation;
public:
	Process();
	Process(int);
	int getID();
	static int getStatus();
	static void setStatus();
};

