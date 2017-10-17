// Lab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>

using namespace std;

struct timeType
{
	int hr;
	double min;
	int sec;
};

struct tourType
{
	string cityName;
	int distance;
	timeType travelTime;
};

void init(tourType &a)
{

	a.cityName = "Nottingham";
	a.distance = 130;
	a.travelTime.hr = 3;
	a.travelTime.min = 15;
}

void disp(tourType &b)
{
	cout << b.cityName << "\n" << b.distance << "\n" << b.travelTime.hr << " " << b.travelTime.min << "\n";
}
int main()
{
	tourType destination;
	init(destination);
	disp(destination);
	return 0;
}

