#include <iostream>

using std::cout;
using std::endl;

class Room {
private:
    double length;
    double breadth;
    double height;
public:
    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

    void printData() {
        cout << "Room(length=" << length << ", breadth=" << breadth << ", height=" << height << ")";
    }
};

class House {
private:
    int people;
    int cost;
    Room rooms[];
};


int main() {
    return 0;
}
