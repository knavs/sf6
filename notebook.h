#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include "portableelectronic.h"
#include "consumerelectronic.h"
#include "product.h"
#include <string>

class Notebook final: virtual public PortableElectronic, public ConsumerElectronic, public Product
{
public:
    Notebook();
    Notebook(std::string model, std::string brand, double price, EColor color = EColor::RED) :  PortableElectronic(), ConsumerElectronic(color), Product(model, brand, price) {};
    virtual void Show() override;
    std::string getDiagonal() const;
    void setDiagonal(const std::string &value);

    std::string getProcessor() const;
    void setProcessor(const std::string &value);

    std::string getVideocard() const;
    void setVideocard(const std::string &value);

private:
    std::string m_diagonal;
    std::string m_processor;
    std::string m_videocard;
};

#endif // NOTEBOOK_H