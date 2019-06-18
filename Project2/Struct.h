#pragma once
struct Point
{
	double x;
	double y;
};

struct Segment
{
	Point p1;
	Point p2;
};

double lenght(Segment *s);
