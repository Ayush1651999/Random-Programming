// A C++ program to check if two given line segments intersect
// vertical lines haven't been included  yet 
#include <bits/stdc++.h>
using namespace std;

class Point
{
	public:
	double x; double y;

};

class LineSeg
{
	public :
	Point p1, p2;
};

bool equal_points(Point p1, Point p2)
{
	bool equal = false;
	if(p1.x == p2.x){
		if(p1.y == p2.y){
			equal = true;
		}
	}
	return equal;
}

float distance(Point p1, Point p2)
{
	float d;
	d = pow((pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2)),0.5);
	return d;
}

bool point_on_line(Point p, LineSeg l)
{
	bool online;

	float d = distance(l.p1, l.p2);
	float d1 = distance(p, l.p1);
	float d2 = distance(p, l.p2);
	float d12 = d1 + d2;

	cout << d <<" "<<d12<<endl;


	if(d12 == d){
		online = true;
	}
	else{
		online = false;
	}

	return online;
}

float slope(LineSeg l)
{
	float m;
	m = (l.p1.y - l.p2.y)/(l.p1.x - l.p2.x);
	return m;
}

bool if_intersect(LineSeg l1, LineSeg l2)
{
	bool intersection;

	float x,y;

	if(l1.p1.x == l1.p2.x){
		float m2 = slope(l2);
		x = l1.p1.x;
		y = l2.p2.y + m2*(l1.p2.x - l2.p2.x);
		// cout << "entered and passed" <<endl;
	}

	else{
		if(l2.p1.x == l2.p2.x){
			float m1 = slope(l1);
			x = l2.p1.x;
			y = l1.p2.y + m1*(l2.p2.x - l1.p2.x);
			// cout << "entered and passed" <<endl;
		}

		else{

			float m1 = slope(l1);
			float m2 = slope(l2);

			if(m1 == m2){
				cout << "entered and passed" <<endl;
				if (equal_points(l1.p1, l2.p1) || equal_points(l1.p1, l2.p2) || equal_points(l1.p2, l2.p1) || equal_points(l1.p2, l2.p2)){
					// cout << "entered and passed" <<endl;
					return true;
				}
				if(point_on_line(l1.p1,l2) || point_on_line(l1.p2,l2) || point_on_line(l2.p1, l1) || point_on_line(l2.p2,l1)){
					return true;
				}

				else{
					return false;
				}
			}

			else{
				x = ((l2.p2.y - l1.p2.y) + (l1.p2.x)*m1 - (l2.p2.x)*m2)/(m1-m2);
				y = m2*((l2.p2.y - l1.p2.y + m1*(l1.p2.x - l2.p2.x))/(m1-m2)) + l2.p2.y;
			}
		}			
	}


	Point p = {x,y};

	bool p_on_l1 = point_on_line(p,l1);
	bool p_on_l2 = point_on_line(p,l2);

	if(p_on_l1 && p_on_l2){
		intersection = true;
	}
	else{
		intersection = false;
	}

	return intersection;
}

int main()
{
	int T;
	cin >> T;
	while(T--){
		Point p1, p2, p3, p4;
		cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y;

		LineSeg l1 = {p1, p2}, l2 = {p3, p4};
		// cout << if_intersect(l1, l2)<<endl;
		cout << point_on_line(l1.p2,l2)<<endl;	
	}
	return 0;
}