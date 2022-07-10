#ifndef PORTABLEELECTRONIC_H
#define PORTABLEELECTRONIC_H
#include "ielectronic.h"

class PortableElectronic : virtual public IElectronic
{
public:
    PortableElectronic();
    PortableElectronic(bool accumulator, int battery = 1000, bool charge = false) : m_accumulator(accumulator), m_batteryLife(battery), m_wirelessCharge(charge) {};
    void Show() override;

    int getBatteryLife() const;
    void setBatteryLife(int batteryLife);

    bool getWirelessCharge() const;
    void setWirelessCharge(bool wirelessCharge);

    void setAccumulator(bool);
    bool getAccumulator() const;

protected:
    bool m_accumulator;
    int m_batteryLife;
    bool m_wirelessCharge;
};

#endif // PORTABLEELECTRONIC_H
