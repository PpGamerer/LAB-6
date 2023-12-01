#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double x){
    return M_PI*x/180.0;
}

double rad2deg(double y){
    return 180.0/M_PI*y;
}
double xcomp;
double findXComponent(double l1, double l2, double a1, double a2){
    xcomp = (l1*cos(a1))+(l2*cos(a2));
    return xcomp;
}
double ycomp;
double findYComponent(double l1, double l2, double a1, double a2){
    ycomp = (l1*sin(a1))+(l2*sin(a2));
    return ycomp;
}

double pythagoras(double xcomp,double ycomp){ //pythagoras function
    return sqrt((pow(xcomp,2))+(pow(ycomp,2)));
}

void showResult(double result_vec_length,double result_vec_direction){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout << "Length of the resultant vector = " << result_vec_length << endl;
    cout << "Direction of the resultant vector (deg) = " << result_vec_direction << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
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