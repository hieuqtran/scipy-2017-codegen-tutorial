/******************************************************************************
 *                      Code generated with sympy 1.1.1                       *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                       This file is part of 'project'                       *
 ******************************************************************************/
#include "c_odes.h"
#include <math.h>

void c_odes(double *y, double *dY) {

   dY[0] = -14520000.0*pow(y[0], 2) - 0.0158*y[0]*y[1] - 27600000.0*y[0]*y[4] - 35500000.0*y[0]*y[5] - 13600000.0*y[0]*y[6] - 22900000.0*y[0]*y[7] - 13000000.0*y[0]*y[8] - 13000000.0*y[0]*y[9] - 20900000.0*y[0]*y[11] + 24400.0*y[2]*y[4] + 5.83*y[4] + 0.0854;
   dY[1] = -14520000.0*pow(y[0], 2) - 0.0158*y[0]*y[1] - 27600000.0*y[0]*y[4] - 26000000.0*y[0]*y[8] - 4.58e-8*y[1]*y[4] - 0.000155*y[1]*y[8] - 1270.0*y[1]*y[10] - 1270.0*y[1]*y[12] - 2.12e-5*y[1] + 24400.0*y[2]*y[4] + 13300000.0*y[2]*y[5] + 13300000.0*y[2]*y[6] + 13300000.0*y[2]*y[9] + 118000000.0*y[2]*y[11] + 39500.0*y[3]*y[5] + 10900000.0*y[4]*y[5] + 36500.0*y[4]*y[6] + 29200.0*y[5]*y[6] + 8840000.0*y[5]*y[9] + 4070000.0*y[5]*y[10] + 2.6e-7*y[6] - 101000.0*y[8]*y[9] - 0.131;
   dY[2] = 14520000.0*pow(y[0], 2) + 0.0158*y[0]*y[1] + 27600000.0*y[0]*y[4] + 35500000.0*y[0]*y[5] + 13600000.0*y[0]*y[6] + 26000000.0*y[0]*y[8] + 0.000155*y[1]*y[8] + 1270.0*y[1]*y[10] + 1270.0*y[1]*y[12] + 2.12e-5*y[1] - 24400.0*y[2]*y[4] - 13300000.0*y[2]*y[5] - 13300000.0*y[2]*y[6] - 13300000.0*y[2]*y[9] - 118000000.0*y[2]*y[11] + 128000.0*y[3]*y[12] + 11000000.0*y[5]*y[8] + 4070000.0*y[6]*y[12] + 101000.0*y[8]*y[9] + 786000.0*y[10]*y[12];
   dY[3] = 7260000.0*pow(y[0], 2) + 27600000.0*y[0]*y[4] + 4.58e-8*y[1]*y[4] - 39500.0*y[3]*y[5] - 128000.0*y[3]*y[12] + 5140000.0*pow(y[4], 2) + 0.0136;
   dY[4] = 0.0158*y[0]*y[1] - 27600000.0*y[0]*y[4] + 20900000.0*y[0]*y[11] - 4.58e-8*y[1]*y[4] - 24400.0*y[2]*y[4] + 39500.0*y[3]*y[5] + 128000.0*y[3]*y[12] - 10280000.0*pow(y[4], 2) - 10900000.0*y[4]*y[5] - 36500.0*y[4]*y[6] - 13100000.0*y[4]*y[7] - 11400000.0*y[4]*y[8] - 11400000.0*y[4]*y[9] - 5.83*y[4] + 0.0188;
   dY[5] = -35500000.0*y[0]*y[5] + 13600000.0*y[0]*y[6] + 4.58e-8*y[1]*y[4] + 1270.0*y[1]*y[12] - 13300000.0*y[2]*y[5] - 39500.0*y[3]*y[5] - 10900000.0*y[4]*y[5] + 36500.0*y[4]*y[6] + 22800000.0*y[4]*y[9] - 9620000.0*pow(y[5], 2) - 29200.0*y[5]*y[6] - 11000000.0*y[5]*y[8] - 8840000.0*y[5]*y[9] - 4070000.0*y[5]*y[10] - 0.0943*y[5] + 50200000.0*y[11]*y[12] + 0.0871;
   dY[6] = -13600000.0*y[0]*y[6] + 13000000.0*y[0]*y[8] + 1270.0*y[1]*y[10] - 13300000.0*y[2]*y[6] - 36500.0*y[4]*y[6] + 4810000.0*pow(y[5], 2) - 29200.0*y[5]*y[6] - 4070000.0*y[6]*y[12] - 0.09430026*y[6] + 101000.0*y[8]*y[9] + 840.0*pow(y[9], 2) + 50200000.0*y[10]*y[11] + 0.0221;
   dY[7] = -22900000.0*y[0]*y[7] - 13100000.0*y[4]*y[7] + 11000000.0*y[5]*y[8] + 8840000.0*y[5]*y[9] + 1.3e-7*y[6] - 3750000.0*y[7]*y[12] + 101000.0*y[8]*y[9] + 840.0*pow(y[9], 2) + 2620.0*y[13] + 8.19e-7;
   dY[8] = 22900000.0*y[0]*y[7] - 13000000.0*y[0]*y[8] - 0.000155*y[1]*y[8] + 13300000.0*y[2]*y[9] - 11400000.0*y[4]*y[8] - 11000000.0*y[5]*y[8] + 4070000.0*y[5]*y[10] - 101000.0*y[8]*y[9] - 50200000.0*y[8]*y[11] + 773000.0*y[9] + 786000.0*y[10]*y[12];
   dY[9] = -13000000.0*y[0]*y[9] + 0.000155*y[1]*y[8] - 13300000.0*y[2]*y[9] + 13100000.0*y[4]*y[7] - 11400000.0*y[4]*y[9] + 29200.0*y[5]*y[6] - 8840000.0*y[5]*y[9] + 4070000.0*y[6]*y[12] - 101000.0*y[8]*y[9] + 50200000.0*y[8]*y[11] - 1680.0*pow(y[9], 2) - 773000.0*y[9];
   dY[10] = 13000000.0*y[0]*y[9] - 1270.0*y[1]*y[10] + 13300000.0*y[2]*y[6] + 11400000.0*y[4]*y[8] - 4070000.0*y[5]*y[10] + 0.0943*y[6] - 50200000.0*y[10]*y[11] - 786000.0*y[10]*y[12];
   dY[11] = -20900000.0*y[0]*y[11] + 2.12e-5*y[1] - 118000000.0*y[2]*y[11] + 5.83*y[4] + 0.0943*y[5] + 0.0943*y[6] - 50200000.0*y[8]*y[11] + 773000.0*y[9] - 50200000.0*y[10]*y[11] - 50200000.0*y[11]*y[12] + 0.0854;
   dY[12] = -1270.0*y[1]*y[12] + 13300000.0*y[2]*y[5] - 128000.0*y[3]*y[12] + 0.0943*y[5] - 4070000.0*y[6]*y[12] - 3750000.0*y[7]*y[12] - 786000.0*y[10]*y[12] - 50200000.0*y[11]*y[12] + 2620.0*y[13];
   dY[13] = 3750000.0*y[7]*y[12] - 2620.0*y[13];

}
