#include "xkb.hpp"
#include "implementation.hpp"

namespace X {

KeySym XkbKeycodeToKeysym(Display *display, KeyCode code, int group,
                          int shift_state) {
  return ::XkbKeycodeToKeysym((::Display *)display, code, group, shift_state);
}

bool XkbQueryExtension(Display *display, int *op_code, int *event_code,
                       int *error, int *major_version, int *minor_version) {
  return ::XkbQueryExtension((::Display *)display, op_code, event_code, error,
                             major_version, minor_version);
}

bool XkbSelectEventDetails(Display *display, unsigned int device_spec,
                           unsigned int event_type,
                           unsigned long bits_to_change,
                           unsigned long values_for_bit) {
  return ::XkbSelectEventDetails((::Display *)display, device_spec, event_type,
                                 bits_to_change, values_for_bit);
}

Status XkbGetState(Display *display, unsigned int device_spec,
                   XkbStatePtr state_return) {
  return ::XkbGetState((::Display *)display, device_spec,
                       (::XkbStatePtr)state_return);
}

} // namespace X
