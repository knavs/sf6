#include "consumerelectronic.h"

ConsumerElectronic::ConsumerElectronic()
{

}

void ConsumerElectronic::Show() {
   std::cout << "÷вет: "          << getColor() << std::endl
             << "“ип вилки: "     << getCableType() << std::endl
             << "ƒлина кабел€: "   << getCableLength() << " м." << std::endl
             << "ѕотр. мощность: " << getPower() << " ¬т" << std::endl
             << "Ёффективность: "  << getEnergyClass() << std::endl;
}

std::string ConsumerElectronic::getEnergyClass() {
    switch (m_energyClass) {
    case EClass::A:
        return "ј Ч расход менее 0.19 к¬т*ч";
    case EClass::Ap:
        return  "ј+ Ч расход менее 0.17 к¬т*ч";
    case EClass::App:
        return "ј++ (менее 0.15 к¬т*ч/кг)";
    case EClass::D:
        return "D Ч средний показатель";
    default:
        return "≈, F  Ч высокое и очень высокое потребление";
    }
}

std::string ConsumerElectronic::getColor()
{
    switch (m_color) {
    case EColor::RED:
        return "красный";
    case EColor::BLUE:
        return "синий";
    case EColor::BLACK:
        return "черный";
    case EColor::GREEN:
        return "зеленый";
    case EColor::ORANGE:
        return "оранжевый";
    case EColor::YELLOW:
        return  "желтый";
    case EColor::PURLPLE:
        return  "сиреневый";
    default:
        return "белый";
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
