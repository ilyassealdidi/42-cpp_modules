#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate()
{
    static bool seeded = false;
    if (!seeded) {
        std::srand(std::time(NULL));
        seeded = true;
    }
    int random = std::rand() % 3;

    switch (random)
    {
        case 0:
            std::cout << "Generated class A" << std::endl;
            return new A();
        case 1:
            std::cout << "Generated class B" << std::endl;
            return new B();
        default:
            std::cout << "Generated class C" << std::endl;
            return new C();
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    }
    catch (const std::exception &)
    {
    }

    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch (const std::exception &)
    {
    }

    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch (const std::exception &)
    {
    }

    std::cout << "Unknown type" << std::endl;
}