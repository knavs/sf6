#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H
#include "consumerelectronic.h"
#include "product.h"

class WashingMachine final: public ConsumerElectronic, public Product
{
public:
    WashingMachine() = default;
    WashingMachine(const std::string& model, const std::string& brand, double price, EColor color);

    void Show() override;

    bool getDry() const;
    void setDry(bool value);
    bool getSpin() const;
    void setSpin(bool value);

private:
    bool m_dry = false;
    bool m_spin = true;
};

#endif // WASHINGMACHINE_H
