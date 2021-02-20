#include "burger.h"

Packing *Burger::packing() {
    return new Wrapper();
}