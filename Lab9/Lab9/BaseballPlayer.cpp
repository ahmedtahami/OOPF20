#include "BaseballPlayer.h"
#include<iostream>
using namespace std;
BaseballPlayer::BaseballPlayer() : Person(){
	totalRuns = 0;
	battingAverage = 0;
}
BaseballPlayer::BaseballPlayer(const BaseballPlayer& ref) : Person(ref) {
	totalRuns = ref.totalRuns;
	battingAverage = ref.battingAverage;
}
BaseballPlayer::BaseballPlayer(const char* name, int age, const int _totalRuns, double _battingAverage) : Person(name, age){
	totalRuns = _totalRuns;
	battingAverage = _battingAverage;
}
void BaseballPlayer::setbattingAverage(double _battingAverage) {
	battingAverage = _battingAverage;
}
void BaseballPlayer::settotalRuns(int _totalRuns) {
	totalRuns = _totalRuns;
}
int BaseballPlayer::gettotalRuns() {
	double temp = totalRuns;
	return temp;
}
double BaseballPlayer::getbattingAverage() {
	double temp = battingAverage;
	return temp;
}
void BaseballPlayer::Display() {
	Person::Display();
	cout << "Total Runs : " << totalRuns << endl;
	cout << "Batting Avg. : " << battingAverage << endl;
}
BaseballPlayer::~BaseballPlayer() {
	totalRuns = 0;
	battingAverage = 0;
}