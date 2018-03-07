#ifndef WAVESHAPE_SIGMOID_H_
#define WAVESHAPE_SIGMOID_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include PGMSPACE_INCLUDE_H

#define WAVESHAPE_SIGMOID_NUM_CELLS 256

/** @ingroup tables
A sigmoid squashing function (sort of like an s-shape or cursive f-shape).  
Useful for waveshaping audio compression/distortion sounds, or emphasising changes in
controls around 0 and making them less sensitive in higher (or lower) ranges.
*/

CONSTTABLE_STORAGE(int8_t) WAVESHAPE_SIGMOID_DATA [256] =
        {
                -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127,
                -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126,
                -126, -126, -126, -126, -126, -126, -126, -126, -125, -125, -125,
                -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -123,
                -123, -123, -123, -122, -122, -122, -122, -121, -121, -121, -120,
                -120, -120, -119, -119, -118, -118, -117, -117, -116, -116, -115,
                -115, -114, -113, -113, -112, -111, -111, -110, -109, -108, -107,
                -107, -106, -105, -104, -103, -101, -100, -99, -98, -97, -95, -94,
                -93, -91, -90, -88, -86, -85, -83, -81, -79, -78, -76, -74, -72,
                -70, -67, -65, -63, -61, -58, -56, -54, -51, -48, -46, -43, -41,
                -38, -35, -32, -29, -27, -24, -21, -18, -15, -12, -9, -6, -3, 0, 3
                , 6, 9, 12, 15, 18, 21, 24, 27, 29, 32, 35, 38, 41, 43, 46, 48,
                51, 54, 56, 58, 61, 63, 65, 67, 70, 72, 74, 76, 78, 79, 81, 83,
                85, 86, 88, 90, 91, 93, 94, 95, 97, 98, 99, 100, 101, 103, 104,
                105, 106, 107, 107, 108, 109, 110, 111, 111, 112, 113, 113, 114,
                115, 115, 116, 116, 117, 117, 118, 118, 119, 119, 120, 120, 120,
                121, 121, 121, 122, 122, 122, 122, 123, 123, 123, 123, 124, 124,
                124, 124, 124, 124, 125, 125, 125, 125, 125, 125, 125, 126, 126,
                126, 126, 126, 126, 126, 126, 126, 126, 126, 127, 127, 127, 127,
                127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
                127
        };

#endif /* WAVESHAPE_SIGMOID_H_ */
