#include <iostream>
#include <cmath> // Dla stałej M_PI

// Abstrakcyjna klasa Figure
class Figure {
public:
    // Czysta wirtualna metoda area()
    virtual double area() const = 0;

    // Czysta wirtualna metoda show()
    virtual void show() const = 0;

    // Wirtualny destruktor
    virtual ~Figure() = default;
};

// Klasa Circle dziedzicząca po Figure
class Circle : public Figure {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementacja metody area()
    double area() const override {
        return M_PI * radius * radius;
    }

    // Implementacja metody show()
    void show() const override {
        std::cout << "Circle with radius: " << radius << " and area: " << area() << std::endl;
    }
};

// Klasa Rectangle dziedzicząca po Figure
class Rectangle : public Figure {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    // Implementacja metody area()
    double area() const override {
        return width * height;
    }

    // Implementacja metody show()
    void show() const override {
        std::cout << "Rectangle with width: " << width << ", height: " << height << " and area: " << area()
                  << std::endl;
    }
};

// Klasa Triangle dziedzicząca po Figure
class Triangle : public Figure {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Implementacja metody area()
    double area() const override {
        return base * height * 0.5;
    }

    // Implementacja metody show()
    void show() const override {
        std::cout << "Triangle with width: " << base << ", height: " << height << " and area: " << area()
                  << std::endl;
    }
};

int main() {
    // Tablica wskaźników na obiekty klasy Figure
    Figure *figures[5];

    // Tworzenie obiektów i przypisywanie wskaźników do tablicy
    figures[0] = new Circle(5.0);
    figures[1] = new Rectangle(4.0, 6.0);
    figures[2] = new Circle(3.0);
    figures[3] = new Rectangle(2.5, 5.5);
    figures[4] = new Triangle(2, 5);

    // Iteracja przez tablicę i wyświetlanie informacji o obiektach
    for (int i = 0; i < 5; ++i) {
        figures[i]->show();
    }

    // Zwolnienie pamięci
    for (int i = 0; i < 5; ++i) {
        delete figures[i];
    }

    return 0;
}