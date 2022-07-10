#include "pocketbook.h"

PocketBook::PocketBook()
{

}

void PocketBook::Show()
{
    Product::Show();
    PortableElectronic::Show();
}

std::string PocketBook::getInktype() const
{
    return inktype;
}

void PocketBook::setInktype(const std::string &value)
{
    inktype = value;
}

double PocketBook::getDiagonal() const
{
    return diagonal;
}

void PocketBook::setDiagonal(double value)
{
    diagonal = value;
}
