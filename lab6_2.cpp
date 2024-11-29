#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x) {
    return x * M_PI/180;
}

double rad2deg(double x) {
    return x * 180 / M_PI;
}  

double findXComponent(double l1, double l2, double d1, double d2) {
    return l1*cos(d1) + l2*cos(d2);
}

double findYComponent(double l1, double l2, double d1, double d2) {
    return l1*sin(d1) + l2*sin(d2);
}

double pythagoras(double x, double y) {
    return sqrt(x*x + y*y);
}

void showResult(double x, double y) {
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << x << endl;
    cout << "Direction of the resultant vector (deg) = " << y << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main() {
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}
