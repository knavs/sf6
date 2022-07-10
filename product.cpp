#include "product.h"

Product::Product()
{

}

Product::Product(const std::string &name, const std::string &brand, double price):m_name(name), m_brand(brand), m_price(price) {}

void Product::Show()
{
    std::cout << "Производитель: "  << getBrand() << std::endl
              << "Модель: "         << getName()  <<  std::endl
              << "Цена: "           << getPrice() << " руб.\n"
              << "Размеры: "        << getWidth() << "x" << getHeight() << " cм.\n"
              << "Вес: "            << getWeight() << " кг." << std::endl;
}

double Product::getPrice() const
{
    return m_price;

}

std::string Product::getName() const
{
    return m_name;
}

void Product::setPrice(double myprice) {
    m_price = myprice;
}

std::string Product::getBrand() const
{
    return m_brand;
}

void Product::setBrand(const std::string& brand)
{
    m_brand = brand;
}

double Product::getWeight() const
{
    return m_weight;
}

void Product::setWeight(double weight)
{
    m_weight = weight;
}

double Product::getWidth() const
{
    return m_width;
}

void Product::setWidth(double width)
{
    m_width = width;
}

double Product::getHeight() const
{
    return m_height;
}

void Product::setHeight(double height)
{
    m_height = height;
}

void Product::setName(const std::string& myname)
{
    m_name = myname;
}
