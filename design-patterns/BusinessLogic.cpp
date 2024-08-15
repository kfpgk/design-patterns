#include <iostream>
#include <memory>

#include <design-patterns/BusinessLogic.hpp>
#include <design-patterns/MeansOfTransport.hpp>


void BusinessLogic::run() {
    std::unique_ptr<MeansOfTransport> meansOfTransport = createProduct();
    meansOfTransport->load();
    meansOfTransport->move();
    meansOfTransport->stop();
}

std::unique_ptr<MeansOfTransport> Flight::createProduct() {
    std::cout << "Create plane" << std::endl;
    return std::make_unique<Plane>();
}

std::unique_ptr<MeansOfTransport> RoadTrip::createProduct() {
    std::cout << "Create car" << std::endl;
    return std::make_unique<Car>();
}

std::unique_ptr<MeansOfTransport> BoatRide::createProduct() {
    std::cout << "Create ship" << std::endl;
    return std::make_unique<Ship>();
}