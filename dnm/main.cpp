#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
#include <vector>



class Shape {
public:

    virtual double area() = 0;
};

class Circle : public Shape {
protected:
    double width;
public:
    Circle (double w) : width{w} {}

    double area() override {
        return 3.14 * std::pow((width / 2 ),2);
    }
};

class Rectangle : public Shape {
protected:
    double height,width;
public:
    Rectangle ( double h, double w) : height {h}, width {w} {}

    double area () override {
        return height * width ;
    }
};


class Square : public Rectangle {
public:
    Square( double h, double w) : Rectangle( h, w) {

        std::cout << "Height of Square : " << this->height << std::endl;
    }

    double area() override {
        return height * height;
    }


};


void ShowArea(Shape& shape) {
    std::cout << "Area : " << shape.area() << "\n";
}

int main() {

    srand(time(NULL));

    int random = rand() % 100;

    std::cout << "Random Number :" << random << std::endl;

    Circle circle {random % 10};
    Rectangle rect {random % 10 ,random % 20};
    Square squ {random % 10 , random % 10};


    ShowArea(circle);
    ShowArea(rect);
    ShowArea(squ);

}

