#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
#include <iostream>

// Базовий клас "Літак"
class Airplane {
protected:
    std::string model;     // Модель літака
    int capacity;          // Місткість літака

public:
    Airplane();  // Конструктор
    virtual ~Airplane(); // деструктор

    void inputAirplane(); // Метод для введення даних про літак
    void displayAirplane() const; // Метод для виведення даних про літак
    virtual double calculateServiceCost() const = 0; // Метод для обчислення вартості обслуговування
};

#endif
