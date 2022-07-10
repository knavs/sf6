#include "fridge.h"

Fridge::Fridge(const std::string& model, const std::string& brand, double price, EColor color, bool nofrost) :  ConsumerElectronic(color), Product(model, brand, price), m_nofrost(nofrost) {}

void Fridge::Show()
{
    Product::Show();
    ConsumerElectronic::Show();
    std::cout << "НоуФрост: " << (getNofrost() ? "Да" : "Нет" ) << std::endl;
}

bool Fridge::getNofrost() const
{
    return m_nofrost;
}

void Fridge::setNofrost(bool value)
{
    m_nofrost = value;
}
