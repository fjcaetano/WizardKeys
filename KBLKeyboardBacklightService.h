/* MacKeyLEDAPI.h
 * This header defines functions for accessing and modifying keyboard lights on
 * Mac laptops in OS X 10.6 and above. Inspired by (and some code taken from) Amit 
 * Singh's OSX Internals website, see header file for details.
 *
 * Ensure that you compile with -framework IOKit -framework CoreFoundation when
 * compiling your programs to include the appropriate frameworks.
 *
 * By Mario Villaplana http://www.stanford.edu/~mariojv
 *
 *
 *  UPDATE
 * Renamed by Flávio Caetano in 2015-06-24
 */

#include <CoreFoundation/CoreFoundation.h>


/* KBLStartLightService is a setup function that must be called before any other
 * method in this file in order to set up communication between the program and
 * the hardware.
 *
 *  UPDATE
 * Renamed by Flávio Caetano in 2015-06-24
 */
void KBLStartLightService();

 /* KBLGetKeyboardLEDValue returns a value between 0 and 0xfff indicating the
  * brightness of the keyboard light.
  *
  *  UPDATE
  * Renamed by Flávio Caetano in 2015-06-24
  */

uint64_t KBLGetKeyboardLEDValue();

/* KBLSetKeyboardLEDValue sets the keyboard brightness to a value between 0 and
 * 0xfff.
 *
 *  UPDATE
 * Renamed by Flávio Caetano in 2015-06-24
 */
void KBLSetKeyboardLEDValue(uint64_t ledValue);

/* KBLSetKeyboardLEDValueFade sets keyboard LED brightness to a value between 0 and 0xfff, fading the
 change in brightness over time_ms milliseconds.
 *
 *  UPDATE
 * Renamed by Flávio Caetano in 2015-06-24
 */
void KBLSetKeyboardLEDValueFade(uint64_t ledValue, uint64_t time_ms);
