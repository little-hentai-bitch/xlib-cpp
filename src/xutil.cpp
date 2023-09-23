#include "xutil.hpp"
#include "implementation.hpp"

namespace X {

Status XMatchVisualInfo(Display *display, int screen, int depth, int type,
                        XVisualInfo *vinfo_return) {
  return ::XMatchVisualInfo((::Display *)display, screen, depth, type,
                            (::XVisualInfo *)vinfo_return);
}

XVisualInfo *XGetVisualInfo(Display *display, long vinfo_mask,
                            XVisualInfo *vinfo_template, int *nitems_return) {
  return (XVisualInfo *)::XGetVisualInfo((::Display *)display, vinfo_mask,
                                         (::XVisualInfo *)vinfo_template,
                                         nitems_return);
}

} // namespace X
