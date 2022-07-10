#include "washingmachine.h"

WashingMachine::WashingMachine(const std::string& model, const std::string& brand, double price, EColor color) :  ConsumerElectronic(color), Product(model, brand, price) {}

void WashingMachine::Show()
{
    Product::Show();
    ConsumerElectronic::Show();
    std :: cout << "Сушка: " << (m_dry ? "Да" : "Нет") << std::endl
                << "Отжим: " << (m_spin ? "Да" : "Нет");
}

bool WashingMachine::getDry() const
{
    return m_dry;
}

void WashingMachine::setDry(bool value)
{
    m_dry = value;
}

bool WashingMachine::getSpin() const
{
    return m_spin;
}

void WashingMachine::setSpin(bool value)
{
    m_spin = value;
}
