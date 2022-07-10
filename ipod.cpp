#include "ipod.h"
#include  <string>

Ipod::Ipod(double price, bool accum, int mah) :  Product("iPod", "Apple", price), PortableElectronic(accum, mah, false), m_supportedFormats("MP3, FLAC, WAV, OGG, ACC") {
    setWidth(68);
    setHeight(300);
    setWeight(88);
}

void Ipod::Show()
{
    Product::Show();
    PortableElectronic::Show();
    std::cout << std:: endl << "Поддерживаемые форматы: " << getFormats() << std::endl;
}

std::string Ipod::getFormats()
{
    return m_supportedFormats;
}

void Ipod::setFormats(const std::string &format) {
    m_supportedFormats = format;
}



