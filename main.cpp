#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    int x1,x2,y1,y2;
    double distance;
    cout << "enter the value for x1:";
    cin>> x1;

    cout<< "enter the value for x2: ";
    cin>> x2;

    cout<< "enter the value for y1:";
    cin>> y1;

    cout<< "enter the value for y2:";
    cin>> y2;

   distance = sqrt(pow(x1-x2,2)+ pow(y1-y2,2));

    cout<< "distance between the two point is :"<< distance<< endl;

    return 0;
}
