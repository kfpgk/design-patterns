#ifndef BUSINESS_LOGIC_HPP
#define BUSINESS_LOGIC_HPP

#include <memory>

#include <design-patterns/MeansOfTransport.hpp>

class BusinessLogic {

    public:
        virtual ~BusinessLogic() = default;
        void run();

    private:
        virtual std::unique_ptr<MeansOfTransport> createProduct() = 0;
};

class Flight : public BusinessLogic {
    private:
        virtual std::unique_ptr<MeansOfTransport> createProduct();
};

class RoadTrip : public BusinessLogic {
    private:
        virtual std::unique_ptr<MeansOfTransport> createProduct();
};

class BoatRide : public BusinessLogic {
    private:
        virtual std::unique_ptr<MeansOfTransport> createProduct();
};

#endif