#include "washingmachine.h"

WashingMachine::WashingMachine()
{

}

void WashingMachine::Show()
{
    Product::Show();
    ConsumerElectronic::Show();
    std :: cout << "�����: " << (m_dry ? "��" : "���") << std::endl
                << "�����: " << (m_spin ? "��" : "���");
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
