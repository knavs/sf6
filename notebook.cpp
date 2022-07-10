#include "notebook.h"

Notebook::Notebook()
{

}

void Notebook::Show()
{
    // Обращаемся за помощью к родителям
    Product::Show();
    ConsumerElectronic::Show();
    PortableElectronic::Show();
}

std::string Notebook::getDiagonal() const
{
    return m_diagonal;
}

void Notebook::setDiagonal(const std::string &value)
{
    m_diagonal = value;
}

std::string Notebook::getProcessor() const
{
    return m_processor;
}

void Notebook::setProcessor(const std::string &value)
{
    m_processor = value;
}

std::string Notebook::getVideocard() const
{
    return m_videocard;
}

void Notebook::setVideocard(const std::string &value)
{
    m_videocard = value;
}
