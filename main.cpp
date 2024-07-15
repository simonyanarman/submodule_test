#include <iostream>

#include "submodule/names.h"


int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << arman::name[i] << std::endl;
    }
    return 0;
}
