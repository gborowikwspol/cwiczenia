#ifndef TREE_H
#define TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dane.h"
#include "stos.h"

struct Lisc {
    struct Dane dane;
    struct Lisc *lewy, *prawy;
};

void add(struct Dane dane, struct Lisc **korzen);

void usunDrzewo(struct Lisc *korzen);

bool isTreeEmpty(struct Lisc *korzen);

void zapiszDrzewo(FILE *file, struct Lisc *korzen);

void flaten(struct Wezel **pWezel, struct Lisc *korzen);

void drukujDrzewo(int poziom, struct Lisc *korzen);

#endif //TREE_H
