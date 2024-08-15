#ifndef MEANS_OF_TRANSPORT_HPP
#define MEANS_OF_TRANSPORT_HPP

class MeansOfTransport {

    public:
        virtual ~MeansOfTransport() = default;

    public:
        virtual void load() = 0;
        virtual void move() = 0;
        virtual void stop() = 0;

};

class Plane : public MeansOfTransport {

    private:
        virtual void load();
        virtual void move();
        virtual void stop();

};

class Car : public MeansOfTransport {

    private:
        virtual void load();
        virtual void move();
        virtual void stop();

};

class Ship : public MeansOfTransport {

    private:
        virtual void load();
        virtual void move();
        virtual void stop();

};

#endif