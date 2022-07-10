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
    ConsumerElectronic() = default;
    explicit ConsumerElectronic(EColor color, EClass eclass = EClass::A, ECableType cable = ECableType::RU);

    void Show() override;

    std::string getEnergyClass();
    void setEnergyClass(EClass);

    std::string getCableType();
    void setCableType(ECableType);

    double getCableLength();
    void setCableLength(double value);

    double getPower();
    void setPower(int power);

    std::string getColor();
    void setColor(const EColor &color);

protected:
    EColor m_color;
    EClass m_energyClass;
    ECableType m_cableType;
    double m_cableLength;
    double m_power;
};


#endif // CONSUMERELECTRONIC_H
