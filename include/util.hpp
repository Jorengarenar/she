#pragma once

#include <ncurses.h>

class EnableCursor {
public:
    EnableCursor();
    ~EnableCursor();
};

char toPrintable(int);