#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    int x;
    int y;
};


int main(){
    vector<Point> point;

    point.push_back({1, 1});
    point.push_back({2, 2});
    point.push_back({3, 3});

    Point *p = &point[0];

    cout<<"Before crash: "<<endl;
    cout<<"X: "<<p->x<<endl;
    cout<<"Y: "<<p->y<<endl;

    for(int i=0;i<1000;i++){
        point.push_back({i,i});
    }

    cout<<"After crash: "<<endl;
    cout<<"X: "<<p->x<<endl;
    cout<<"Y: "<<p->y<<endl;


    return 0;
}