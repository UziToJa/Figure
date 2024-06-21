#ifndef UNTITLED19_CLASS_H
#define UNTITLED19_CLASS_H
#include <string>

class Triangle{
private:
    static int m_numberFigury;
    std::string m_name;
    double s1;
    double s2;
public:
    static int numberFigury();
    Triangle();
    Triangle(const std::string& name, double x = 0, double y = 0);
    ~Triangle();
    void showSides() const;
    double area() const;
    double perimeter() const;
    void name() const;
};


class Rectangle{
private:
    static int m_numberFigury;
    std::string m_name;
    double s1;
    double s2;
public:
    static int numberFigury();
    Rectangle();
    Rectangle(const std::string& name, double x = 0, double y = 0);
    ~Rectangle();
    void showSides() const;
    double area() const;
    double perimeter() const;
    void name() const;
    const Rectangle& bigger(const Rectangle& t) const;
};



class Circle{
private:
    static int m_numberFigury;
    std::string m_name;
    double r;
public:
    static int numberFigury();
    Circle();
    Circle(const std::string& name, double x = 0);
    ~Circle();
    void showCircle() const;
    double area() const;
    double perimeter() const;
    void name() const;
    const Circle&  bigger(const Circle& t) const;
};
void triangle (double *x,double *y);
void rectangle (double *x,double *y);
void circle (double *x);
void name(char *text);

#endif