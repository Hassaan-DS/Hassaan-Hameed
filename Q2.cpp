#include<iostream>
using namespace std;

class Point {
private:
	double x;
	double y;
public:
	Point(double xco, double yco)
	{
		x = xco;
        y = yco;
	}

    double getx() const
    { 
        return x; 
    }
    double gety() const
    { 
        return y; 
    }

    void setx(double newX)
    { 
        x = newX; 
    }
    void sety(double newY)
    { 
        y = newY; 
    }

    //Distance between two points
    double distance(const Point& otherPoint) const 
    {
        double xDiff = x - otherPoint.getx();
        double yDiff = y - otherPoint.gety();
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }
};

int main() {
    
    Point p1(3.0, 2.0);
    Point p2(1.0, 5.0);

    cout << "Point 1 coordinates: (" << p1.getx() << ", " << p1.gety() << ")" << endl;
    cout << "Point 2 coordinates: (" << p2.getx() << ", " << p2.gety() << ")" << endl;
    
    cout << "Distance between points is: " << p1.distance(p2) << endl;

    return 0;
}

