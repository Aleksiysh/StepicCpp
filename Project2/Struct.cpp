#include "Struct.h"
#include <cmath>

double lenght(Segment *s) {
	double dx = s->p1.x - s->p2.x;
	double dy = s->p1.y - s->p2.y;
	return sqrt(dx*dx + dy * dy);
}