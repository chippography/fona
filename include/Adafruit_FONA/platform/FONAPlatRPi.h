/*
 * FONAPlatStd.h -- standard AVR/Arduino platform.
 *
 * This is part of the library for the Adafruit FONA Cellular Module
 *
 * Designed specifically to work with the Adafruit FONA
 * ----> https://www.adafruit.com/products/1946
 * ----> https://www.adafruit.com/products/1963
 * ----> http://www.adafruit.com/products/2468
 * ----> http://www.adafruit.com/products/2542
 *
 * Adafruit invests time and resources providing this open source code,
 * please support Adafruit and open-source hardware by purchasing
 * products from Adafruit!
 *
 * Written by Chipp Jansen for inclusion in
 * the Adafruit_FONA_Library and released under the
 * BSD license, all text above must be included in any redistribution.
 */


#ifndef ADAFRUIT_FONA_LIBRARY_SRC_INCLUDES_PLATFORM_FONAPLATRPI_H_
#define ADAFRUIT_FONA_LIBRARY_SRC_INCLUDES_PLATFORM_FONAPLATRPI_H_

#include "../FONAConfig.h"

#include "arduPi/arduPi.h"

#include <cmath>
#include <cstdio>

#ifdef ADAFRUIT_FONA_DEBUG
// need to do some debugging...
#define DEBUG_PRINT(...) debug_print(__VA_ARGS__)
#define DEBUG_PRINTLN(...) debug_println(__VA_ARGS__)

#endif


// a few typedefs to keep things portable
typedef	SerialPi FONAStreamType;
typedef const char *	FONAFlashStringPtr;

#define F(a)                (a)
#define prog_char  					char
#define PSTR(a)             (a)

/*=============================================================================
  max - return the maximum of two numbers
=============================================================================*/

/* http://arduino.cc/forum/index.php/topic,84364.msg640438.html#msg640438 */

#define max(a,b) \
  ({ \
    typeof (a) _a = (a); \
    typeof (b) _b = (b); \
    _a > _b ? _a : _b; \
  })


/*=============================================================================
  min - return the minimum of two numbers
=============================================================================*/

/* http://arduino.cc/forum/index.php/topic,84364.msg640438.html#msg640438 */

#define min(a,b) \
  ({ \
    typeof (a) _a = (a); \
    typeof (b) _b = (b); \
    _a < _b ? _a : _b; \
  })


#endif /* ADAFRUIT_FONA_LIBRARY_SRC_INCLUDES_PLATFORM_FONAPLATRPI_H_ */
