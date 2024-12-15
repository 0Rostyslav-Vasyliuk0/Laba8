#ifndef CARGO_PLANE_H
#define CARGO_PLANE_H

#include "airplane.h"

// Клас "Вантажний літак", успадкований від базового класу "Літак"
class CargoPlane : public Airplane {
private:
    int cargoWeight; // Вага вантажу

public:
    CargoPlane();  // Конструктор
    ~CargoPlane(); // Деструктор

    void inputCargoPlane(); // Метод для введення даних про вантажний літак
    void displayCargoPlane() const; // Метод для виведення даних про вантажний літак
    double calculateServiceCost() const override; // Метод для обчислення вартості обслуговування
};

#endif
