﻿#include <iostream>

using namespace std;

class Car
{
private:
    int distanse;
public:
    int get_distanse() {
        return distanse;

    }
    void display() {
        cout << distanse << endl;
    }
    void start() {
        cout << "я еду" << endl;
    };
    void stop() {};

    int drive(int howlong)
    {

        distanse = howlong * 60;
        return distanse;
    }
};
int main()
{
    Car Toyota;
    int a;
    cin >> a;
    int c;
    c = Toyota.drive(a);
    Toyota.display();
    return 0;
}