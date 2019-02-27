#include "splash/modifier.h"

#include <sstream>
#include <vector>
#include <iostream>

namespace splash {
    void modifier::addAttribute(splash::attribute attr) {
        this->m_attributes.push_back(attr);
    }

    std::string modifier::wrap(std::string in) {
        if(!this->m_attributes.empty()) {
            std::stringstream generator;
            generator << this->_attributeString() << in;
            generator << "\033[0m";
            return generator.str();
        } else {
            return in;
        }
    }

    std::string modifier::_attributeString() {
        std::stringstream generator;
        generator << "\033[";
        for(auto attr: this->m_attributes) {
            generator << attr;
            if(attr != this->m_attributes.back()) {
                generator << ";";
            }
        }
        generator << "m";
        return generator.str();
    }
}
