#ifndef IPOD_H
#define IPOD_H
#include "portableelectronic.h"
#include <string>
#include "product.h"

class Ipod : public Product, public PortableElectronic
{
public:
    Ipod();
    Ipod(double price, bool accum, int mah) :  Product("iPod", "Apple", price), PortableElectronic(accum, mah, false), m_supportedFormats("MP3, FLAC, WAV, OGG, ACC") {
        setWidth(68);
        setHeight(300);
        setWeight(88);
    };
    //Ipod(double, bool, int);
    void Show() override;
    std::string getFormats();
    void setFormats(const std::string& format);
private:
    std::string m_supportedFormats = "MP3, FLAC, WAV, OGG, ACC";
};

#endif // IPOD_H
