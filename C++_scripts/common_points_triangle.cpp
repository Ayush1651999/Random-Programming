#include <bits/stdc++.h>
using namespace std;

class triangle{

    public:

	float x0, y0, x1, y1, x2, y2;
};

float area_triangle(triangle t)
{
	return 0.5*abs((t.x1 - t.x0)*(t.y2 - t.y0) - (t.x2 - t.x0)*(t.y1 - t.y0));
}

bool point_in_out(float x, float y, triangle t)
{
	bool in;

	float area = area_triangle(t);

	triangle t0;
	t0.x0 = x;
	t0.y0 = y;
	t0.x1 = t.x1;
	t0.y1 = t.y1;
	t0.x2 = t.x2;
	t0.y2 = t.y2;

	triangle t1;
	t1.x0 = x;
	t1.y0 = y;
	t1.x1 = t.x0;
	t1.y1 = t.y0;
	t1.x2 = t.x2;
	t1.y2 = t.y2;

	triangle t2;
	t2.x0 = x;
	t2.y0 = y;
	t2.x1 = t.x1;
	t2.y1 = t.y1;
	t2.x2 = t.x0;
	t2.y2 = t.y0;

	float area0 = area_triangle(t0);
	float area1 = area_triangle(t1);
	float area2 = area_triangle(t2);

	if((area0+area1+area2) == area){
		in = true;
	}

	return in;
}

int main(){
	triangle t1;
	triangle t2;

	cin >> t1.x0 >> t1.y0 >> t1.x1 >> t1.y1 >> t1.x2 >> t1.y2;
	cin >> t2.x0 >> t2.y0 >> t2.x1 >> t2.y1 >> t2.x2 >> t2.y2;

	bool c1 = point_in_out(t1.x0, t1.y0, t2);
	bool c2 = point_in_out(t1.x1, t1.y1, t2);
	bool c3 = point_in_out(t1.x2, t1.y2, t2);
	bool c4 = point_in_out(t2.x0, t2.y0, t1);
	bool c5 = point_in_out(t2.x1, t2.y1, t1);
	bool c6 = point_in_out(t2.x2, t2.y2, t1);

	bool c = c1+c2+c3+c4+c5+c6;

	// cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6 ;
	cout << c << endl;
}