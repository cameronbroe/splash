#ifndef SPLASH_MODIFIER_H
#define SPLASH_MODIFIER_H

#include <string>
#include <vector>

#include "attributes.h"

namespace splash {

class modifier {
private:
    std::vector<splash::attribute> m_attributes;

    std::string _attributeString();
public:
    void addAttribute(splash::attribute attr);

    std::string wrap(std::string in);
};

}

#endif
