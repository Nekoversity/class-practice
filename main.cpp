#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;
using std::to_string;

class Room {
private:
    double length;
    double breadth;
    double height;
public:
    Room(double _length, double _breadth, double _height) {
        length = _length;
        breadth = _breadth;
        height = _height;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

    void printData() {
        cout << "Room(length=" << length << ", breadth=" << breadth << ", height=" << height << ")";
    }

    friend Room operator+(const Room& r1, const Room& r2) {
        return Room {
            r1.length + r2.length,
            r1.breadth + r2.breadth,
            r1.height + r2.height
        };
    }

    friend Room operator-(const Room& r1, const Room& r2) {
        return Room {
                r1.length - r2.length,
                r1.breadth - r2.breadth,
                r1.height - r2.height
        };
    }

    friend std::ostream& operator<< (std::ostream& out, const Room& r) {
        return out << "Room(length=" << r.length << ", breadth=" << r.breadth << ", height=" << r.height << ")";
    }

    operator string() const {
        return "Room(length=" + to_string(length) + ", breadth=" + to_string(breadth)
            + ", height=" + to_string(height) + ")";
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
