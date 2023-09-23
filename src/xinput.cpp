#include "xinput.hpp"
#include "implementation.hpp"

namespace X {

int IQueryVersion(Display *display, int *major, int *minor) {
  return XIQueryVersion((::Display *)display, major, minor);
}

int ISelectEvents(Display *display, Window window, XIEventMask *mask, int num) {
  return ::XISelectEvents((::Display *)display, window, (::XIEventMask *)mask,
                          num);
}

int ISetMask(unsigned char *ptr, int event) {
  return ptr[(event) >> 3] |= (1 << ((event)&7));
}

int IClearMask(unsigned char *ptr, int event) {
  return ptr[(event) >> 3] &= ~(1 << ((event)&7));
}

int IMaskIsSet(unsigned char *ptr, int event) {
  return ptr[(event) >> 3] & (1 << ((event)&7));
}

int IMaskLen(int event) { return (((event) >> 3) + 1); }

int XISelectEvents(Display *display, Window window, XIEventMask *mask,
                   int num) {
  return ::XISelectEvents((::Display *)display, window, (::XIEventMask *)mask,
                          num);
}

} // namespace X
