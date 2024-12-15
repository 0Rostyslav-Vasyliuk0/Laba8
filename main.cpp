#include "passenger_plane.h"
#include "cargo_plane.h"

int main() {
    PassengerPlane passengerPlane;
    CargoPlane cargoPlane;

    std::cout << "Введення даних пасажирського літака:" << std::endl;
    passengerPlane.inputPassengerPlane();

    std::cout << "\nВведення даних транспортного літака:" << std::endl;
    cargoPlane.inputCargoPlane();

    std::cout << "\nДані про пасажирський літак:" << std::endl;
    passengerPlane.displayPassengerPlane();
    std::cout << "Вартість обслуговування: $"
              << passengerPlane.calculateServiceCost() << std::endl;

    std::cout << "\nДані про транспортний літак:" << std::endl;
    cargoPlane.displayCargoPlane();
    std::cout << "Вартість обслуговування: $"
              << cargoPlane.calculateServiceCost() << std::endl;

    return 0;
}
