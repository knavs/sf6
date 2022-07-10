#ifndef POCKETBOOK_H
#define POCKETBOOK_H
#include "portableelectronic.h"
#include "product.h"

class PocketBook : public PortableElectronic, public Product
{
public:
    PocketBook();

    void Show() override;

    std::string getInktype() const;
    void setInktype(const std::string &value);
    double getDiagonal() const;
    void setDiagonal(double value);

private:
    std::string inktype;
    double diagonal;
};

#endif // POCKETBOOK_H
