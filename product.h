#ifndef GOOD_H
#define GOOD_H
#include <iostream>
#include <string>

class Product
{
public:
    Product();
    Product(const std::string& name, const std::string& brand, double price);

    void Show();

    std::string getName() const;
    void setName(const std::string&);
    double getPrice() const;
    void setPrice(double);
    std::string getBrand() const;
    void setBrand(const std::string&);
    double getWeight() const;
    void setWeight(double);
    double getWidth() const;
    void setWidth(double);
    double getHeight() const;
    void setHeight(double);

private:
    std::string m_name;
    std::string m_brand;
    double m_price;
    double m_weight;
    double m_height;
    double m_width;
};

#endif // GOOD_H
