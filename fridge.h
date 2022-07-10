#ifndef FRIDGE_H
#define FRIDGE_H
#include "consumerelectronic.h"
#include "product.h"

class Fridge final: public ConsumerElectronic, public Product
{
public:
    Fridge() = default;
    Fridge(const std::string& model, const std::string& brand, double price, EColor color, bool nofrost = true);

    void Show() override;

    bool getNofrost() const;
    void setNofrost(bool value);

private:
    bool m_nofrost;
};

#endif // FRIDGE_H
