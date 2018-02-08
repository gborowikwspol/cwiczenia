#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include "dane.h"
#include "stos.h"

struct Lisc {
    struct Dane dane;
    struct Lisc *lewy, *prawy;
};

#endif //TREE_H
