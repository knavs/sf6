#include "fridge.h"

Fridge::Fridge()
{

}

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
