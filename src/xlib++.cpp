#include "xlib++.hpp"

#include "implementation.hpp"

#undef DefaultScreenOfDisplay
#undef RootWindowOfScreen

namespace X {

Display *OpenDisplay(const char *display_name) {
  return (Display *)::XOpenDisplay("");
}

Screen *DefaultScreenOfDisplay(Display *display) {
  int screen_i = ((_XPrivDisplay)(display))->default_screen;
  ::Screen *native_screen = (&((_XPrivDisplay)(display))->screens[screen_i]);
  return (X::Screen *)native_screen;
}

Window RootWindowOfScreen(Screen *screen) { return (screen->root); }

int GetGeometry(Display *display, Window window, Window *root_window, int *x,
                int *y, uint *width, uint *height, uint *borders, uint *depth) {
  return ::XGetGeometry((::Display *)display, window, root_window, x, y, width,
                        height, borders, depth);
}

int NextEvent(Display *display, XEvent *event) {
  return XNextEvent((::Display *)display, (::XEvent *)event);
}

int XGetEventData(Display *display, XGenericEventCookie *cookie) {
  return XGetEventData((::Display *)display, (::XGenericEventCookie *)cookie);
}

int QueryExtension(Display *display, const char *name, int *xi_opcode,
                   int *event, int *error) {
  return XQueryExtension((::Display *)display, name, xi_opcode, event, error);
}

int Sync(Display *display, bool discard) {
  return XSync((::Display *)display, discard);
}

int XQueryKeymap(Display *display, char *keys_return) {
  return ::XQueryKeymap((::Display *)display, keys_return);
}

int XPending(Display *display) { return ::XPending((::Display *)display); }

GC XCreateGC(Display *display, Drawable drawable, unsigned long flags,
             XGCValues *xgc_values) {
  return ::XCreateGC((::Display *)display, (::Drawable)drawable, flags,
                     (::XGCValues *)xgc_values);
}

int XClearWindow(Display *display, Window window) {
  return ::XClearWindow((::Display *)display, (::Window)window);
}

int XFree(void *ptr) { return ::XFree(ptr); }

Atom XInternAtom(Display *display, const char *atom_name, bool only_if_exist) {
  return ::XInternAtom((::Display *)display, atom_name, only_if_exist);
}

int XGetWindowProperty(Display *display, Window window, Atom property,
                       long long_offset, long long_length, bool _delete,
                       Atom req_type, Atom *actual_type_return,
                       int *actual_format_return, unsigned long *nitems_return,
                       unsigned long *bytes_after_return,
                       unsigned char **prop_return) {
  return ::XGetWindowProperty((::Display *)display, (::Window)window, property,
                              long_offset, long_length, _delete, req_type,
                              actual_type_return, actual_format_return,
                              nitems_return, bytes_after_return, prop_return);
}

int XGetGCValues(Display *display, GC gc, unsigned long mask,
                 XGCValues *values) {
  return ::XGetGCValues((::Display *)display, (::GC)gc, mask,
                        (::XGCValues *)values);
}

int XConnectionNumber(Display *display) {
  return XConnectionNumber((::Display *)display);
}

int XFlush(Display *display) { return ::XFlush((::Display *)display); }

} // namespace X
