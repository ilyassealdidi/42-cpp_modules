#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include "Data.hpp"

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer& other);
        Serializer& operator=(Serializer& other);
    public:
        ~Serializer();
        
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif