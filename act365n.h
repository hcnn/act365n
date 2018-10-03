#ifndef ACT365N_H
#define ACT365N_H

#include "isaleapyear/isaleapyear.h"
#include "julianday/julianday.h"
#include <stdlib.h> //exit
#include <stdio.h>

double act365n(int y1, int m1, int d1, 
               int y2, int m2, int d2);

#endif /* ACT365N_H */
