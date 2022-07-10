#ifndef FRIDGE_H
#define FRIDGE_H
#include "consumerelectronic.h"
#include "product.h"

class Fridge final: public ConsumerElectronic, public Product
{
public:
    Fridge();
    Fridge(std::string model, std::string brand, double price, EColor color) :  ConsumerElectronic(color), Product(model, brand, price) {};
    virtual void Show() override;
    bool getNofrost() const;

    void setNofrost(bool value);

private:
    bool m_nofrost;
};

#endif // FRIDGE_H
