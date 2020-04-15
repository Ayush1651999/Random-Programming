#include <iostream>
using namespace std;
#include <math.h>
// struct point{
// 	float x,y;
// };

struct triangle{
	// point p[3];
	float x0, y0, x1, y1, x2, y2;
};

// void read_point(point &p)
// {
// 	cin >> p.x >> p.y;
// }

// void read_triangle(triangle &t)
// {
// 	read_point(t.p[0]);
// 	read_point(t.p[1]);
// 	read_point(t.p[2]);
// }

// float area_triangle(triangle t)
// {
// 	return 0.5*abs((t.p[1].x - t.p[0].x)*(t.p[2].y - t.p[0].y) - (t.p[2].x - t.p[0].x)*(t.p[1].y - t.p[0].y));
// }

float area_triangle(triangle t)
{
	return 0.5*abs((t.x1 - t.x0)*(t.y2 - t.y0) - (t.x2 - t.x0)*(t.y1 - t.y0));
}

float peri_triangle(triangle t)
{
	return pow ((pow ((t.x1 - t.x0),2) + pow ((t.y1 - t.y0),2)), 0.5) + pow ((pow ((t.x2 - t.x1),2) + pow ((t.y2 - t.y1),2)), 0.5) + pow ((pow ((t.x0 - t.x2),2) + pow ((t.y0 - t.y2),2)), 0.5);
}

int main(){
	triangle t;
	// read_triangle(t);
	cin >> t.x0 >> t.y0 >> t.x1 >> t.y1 >> t.x2 >> t.y2;
	cout<< peri_triangle(t)<< endl;
}