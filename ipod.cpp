#include "ipod.h"
#include  <string>

void Ipod::Show()
{
    std::cout << "iPod::Show()" << std::endl;
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



