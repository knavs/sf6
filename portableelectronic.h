#ifndef PORTABLEELECTRONIC_H
#define PORTABLEELECTRONIC_H
#include "ielectronic.h"

class PortableElectronic : virtual public IElectronic
{
public:
    PortableElectronic() = default;
    explicit PortableElectronic(bool accumulator, int battery = 1000, bool charge = false);

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
