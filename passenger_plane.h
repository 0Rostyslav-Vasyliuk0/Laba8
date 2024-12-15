#ifndef PASSENGER_PLANE_H
#define PASSENGER_PLANE_H

#include "airplane.h"

// Клас "Пасажирський літак", успадкований від базового класу "Літак"
class PassengerPlane : public Airplane {
private:
    int numberOfPassengers; // Кількість пасажирів

public:
    PassengerPlane();  // Конструктор
    ~PassengerPlane(); // Деструктор

    void inputPassengerPlane(); // Метод для введення даних про пасажирський літак
    void displayPassengerPlane() const; // Метод для виведення даних про пасажирський літак
    double calculateServiceCost() const override; // Метод для обчислення вартості обслуговування
};

#endif
