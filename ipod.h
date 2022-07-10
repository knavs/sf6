#ifndef IPOD_H
#define IPOD_H
#include "portableelectronic.h"
#include <string>
#include "product.h"

class Ipod : public Product, public PortableElectronic
{
public:
    Ipod();
    Ipod(double price, bool accum, int mah);

    void Show() override;

    std::string getFormats();
    void setFormats(const std::string& format);
private:
    std::string m_supportedFormats;
};

#endif // IPOD_H
