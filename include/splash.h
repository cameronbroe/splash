#ifndef CPP_SHARED_LIB_TEMPLATE_SPLASH_H
#define CPP_SHARED_LIB_TEMPLATE_SPLASH_H

#include <string>

#include "attributes.h"
#include "modifier.h"

namespace splash {
    std::string bold(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::BOLD);
        return mod.wrap(in);
    }

    std::string underline(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::UNDERLINE);
        return mod.wrap(in);
    }


    std::string black(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_BLACK);
        return mod.wrap(in);
    }

    std::string red(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_RED);
        return mod.wrap(in);
    }

    std::string green(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_GREEN);
        return mod.wrap(in);
    }

    std::string yellow(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_YELLOW);
        return mod.wrap(in);
    }

    std::string blue(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_BLUE);
        return mod.wrap(in);
    }

    std::string magenta(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_MAGENTA);
        return mod.wrap(in);
    }

    std::string cyan(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_CYAN);
        return mod.wrap(in);
    }

    std::string white(std::string in) {
        splash::modifier mod;
        mod.addAttribute(splash::attribute::FG_WHITE);
        return mod.wrap(in);
    }
}

#endif //CPP_SHARED_LIB_TEMPLATE_SPLASH_H
