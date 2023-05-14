#ifndef LIBNYA_HPP
#define LIBNYA_HPP

#include <fstream>
#include <string>

#define LIBNYA_FILENAME "libnya.nyasm"

namespace libnya {
    static inline std::string source;
    
    static inline void refresh() {
        source = "";
        std::ifstream ifile(LIBNYA_FILENAME);
        while(ifile.good()) source += ifile.get();
        if(source != "") source.pop_back();
        ifile.close();
    }

    static inline const std::string& copy() noexcept {
        if(source == "") refresh();
        return source;
    }
}

#endif