#ifndef CONSUMERELECTRONIC_H
#define CONSUMERELECTRONIC_H
#include "ielectronic.h"

enum EColor {

    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
    ORANGE,
    YELLOW,
    PURLPLE

};

enum EClass {
/**
* � � � ������ ����� 0.19 ���*�;
* � �+ � ������ ����� 0.17 ���*�;
* � �++ (����� 0.15 ���*�/��);
* � D � ������� ����������;
* � �, F � � ������� � ����� ������� �����������.
*/
    A,
    Ap,
    App,
    D,
    E,
    F,
};

enum ECableType {
    RU,
    EU,
    US
};

class ConsumerElectronic : virtual public IElectronic
{
public:
    ConsumerElectronic();
    ConsumerElectronic(EColor color, EClass eclass = EClass::A, ECableType cable = ECableType::RU)
        : m_color(color), m_energyClass(eclass), m_cableType(cable) {};
    void Show() override;
    std::string getEnergyClass();
    std::string getColor();
    std::string getCableType();
    double getCableLength();
    double getPower();
    void setPower(int power);
    void setEnergyClass(EClass);
    void setCableType(ECableType);
    void setCableLength(double value);

protected:
    EColor m_color;
    EClass m_energyClass;
    ECableType m_cableType;
    double m_cableLength;
    double m_power;
};


#endif // CONSUMERELECTRONIC_H
