#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include "consumerelectronic.h"
#include "product.h"

class WashingMachine final: public ConsumerElectronic, public Product
{
public:
    WashingMachine();
    WashingMachine(std::string model, std::string brand, double price, EColor color) :  ConsumerElectronic(color), Product(model, brand, price) {};

    virtual void Show() override;
    bool getDry() const;
    void setDry(bool value);

    bool getSpin() const;
    void setSpin(bool value);

private:
    bool m_dry = false;
    bool m_spin = true;
};

#endif // WASHINGMACHINE_H
