#include <iostream>
#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->key = "login";
    data->value = "ialdidi";

    std::cout << "Before serialization:" << std::endl;
    std::cout << "Data pair " << std::endl;
    std::cout << "Key: " << data->key  << std::endl;
    std::cout << "Value: " << data->value << std::endl;

    std::cout << std::endl;

    uintptr_t serialized = Serializer::serialize(data);
    std::cout << "Serialized: " << serialized << std::endl;

    std::cout << std::endl;

    Data *deserialized = Serializer::deserialize(serialized);
    
    std::cout << "After deserialization:" << std::endl;
    std::cout << "Data pair " << std::endl;
    std::cout << "Key: " << deserialized->key  << std::endl;
    std::cout << "Value: " << deserialized->value << std::endl;

    std::cout << std::endl;

    std::cout << "Address of data: " << data << std::endl;
    std::cout << "Address of deserialized: " << deserialized << std::endl;
    delete data;
    return 0;
}