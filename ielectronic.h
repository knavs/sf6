#ifndef IELECTRONIC_H
#define IELECTRONIC_H
#include <iostream>
#include <string>

/**
 * @brief Èםעונפויס The IElectronic class
 */
class IElectronic
{

public:
    virtual void Show() = 0;
    virtual ~IElectronic() = default;
};

#endif // IELECTRONIC_H
