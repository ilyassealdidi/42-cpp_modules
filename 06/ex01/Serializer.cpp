#include "Serializer.hpp"

#pragma region Constructors and Destructor

Serializer::Serializer() {
}

Serializer::Serializer(Serializer& other) {
    (void)other;
}

Serializer& Serializer::operator=(Serializer& other) {
    (void)other;
    return *this;
}

Serializer::~Serializer() {
}

#pragma endregion

#pragma region Member Functions

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}

#pragma endregion

