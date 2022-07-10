#include "consumerelectronic.h"

ConsumerElectronic::ConsumerElectronic()
{

}

void ConsumerElectronic::Show() {
   std::cout << "����: "          << getColor() << std::endl
             << "��� �����: "     << getCableType() << std::endl
             << "����� ������: "   << getCableLength() << " �." << std::endl
             << "����. ��������: " << getPower() << " ��" << std::endl
             << "�������������: "  << getEnergyClass() << std::endl;
}

std::string ConsumerElectronic::getEnergyClass() {
    switch (m_energyClass) {
    case EClass::A:
        return "� � ������ ����� 0.19 ���*�";
    case EClass::Ap:
        return  "�+ � ������ ����� 0.17 ���*�";
    case EClass::App:
        return "�++ (����� 0.15 ���*�/��)";
    case EClass::D:
        return "D � ������� ����������";
    default:
        return "�, F  � ������� � ����� ������� �����������";
    }
}

std::string ConsumerElectronic::getColor()
{
    switch (m_color) {
    case EColor::RED:
        return "�������";
    case EColor::BLUE:
        return "�����";
    case EColor::BLACK:
        return "������";
    case EColor::GREEN:
        return "�������";
    case EColor::ORANGE:
        return "���������";
    case EColor::YELLOW:
        return  "������";
    case EColor::PURLPLE:
        return  "���������";
    default:
        return "�����";
    }
}

std::string ConsumerElectronic::getCableType() {
    switch (m_cableType) {
    case ECableType::EU:
        return "[ * * ]";
    case ECableType::US:
        return "[I I]";
    case ECableType::RU:
        return "[O O]";
    default:
        return "[o o]";

    }
}

double ConsumerElectronic::getCableLength() {
    return m_cableLength;
}

double ConsumerElectronic::getPower()
{
    return m_power;
}

void ConsumerElectronic::setPower(int power)
{
    m_power = power;
}

void ConsumerElectronic::setEnergyClass(EClass ecls)
{
    m_energyClass = ecls;
}

void ConsumerElectronic::setCableType(ECableType cable)
{
    m_cableType = cable;
}

void ConsumerElectronic::setCableLength(double value)
{
    m_cableLength = value;
}
