#include "portableelectronic.h"

PortableElectronic::PortableElectronic()
{

}

void PortableElectronic::Show()
{
   std::cout << "��� �������: " << (getAccumulator() ? "�����������" : "���������") << std::endl
             << "������� ������������: " << getBatteryLife() << " ��*�" << std::endl
             << "������������ �������: " << (getWirelessCharge() ? "��" : "���");

}

void PortableElectronic::setAccumulator(bool is_accum)
{
    m_accumulator = is_accum;
}

int PortableElectronic::getBatteryLife() const
{
    return m_batteryLife;
}

void PortableElectronic::setBatteryLife(int batteryLife)
{
    m_batteryLife = batteryLife;
}

bool PortableElectronic::getWirelessCharge() const
{
    return m_wirelessCharge;
}

void PortableElectronic::setWirelessCharge(bool wirelessCharge)
{
    m_wirelessCharge = wirelessCharge;
}

bool PortableElectronic::getAccumulator() const
{
    return m_accumulator;
}
