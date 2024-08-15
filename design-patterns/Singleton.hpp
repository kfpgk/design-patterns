#ifndef SINGLETON_HPP
#define SINGLETON_HPP

// Ref: https://stackoverflow.com/a/1008289
class Singleton {

    public:
        static Singleton& getInstance();

    public:    
        Singleton(Singleton const&) = delete;
        void operator=(Singleton const&) = delete;
        void doSomething();
        
    private:
        Singleton() {}        

};

#endif