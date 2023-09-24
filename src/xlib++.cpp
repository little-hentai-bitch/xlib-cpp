#include "xlib++.hpp"

#include "implementation.hpp"

#undef ScreenOfDisplay
#undef DefaultDepth
#undef DefaultVisual
#undef DefaultScreen
#undef RootWindow
#undef DefaultScreenOfDisplay
#undef RootWindowOfScreen

namespace X {

int CloseDisplay(Display *display) {
  return ::XCloseDisplay((::Display *)display);
}

Display *OpenDisplay(const char *display_name) {
  return (Display *)::XOpenDisplay("");
}

int DefaultScreen(Display *display) {
  return (((_XPrivDisplay)(display))->default_screen);
}

Screen *DefaultScreenOfDisplay(Display *display) {
  int screen_num = DefaultScreen(display);
  ::Screen *native_screen = (&((_XPrivDisplay)(display))->screens[screen_num]);
  return (X::Screen *)native_screen;
}

Screen *ScreenOfDisplay(Display *display, int screen_number) {
  return (X::Screen *)(&((_XPrivDisplay)(display))->screens[screen_number]);
}

Window RootWindowOfScreen(Screen *screen) { return (screen->root); }

Window RootWindow(Display *display, int screen_number) {
  return ScreenOfDisplay(display, screen_number)->root;
}

Window CreateWindow(Display *display, Window parent, int x, int y,
                    unsigned int width, unsigned int height,
                    unsigned int border_width, int depth,
                    unsigned int window_class, Visual *visual,
                    unsigned long valuemask, SetWindowAttributes *attributes) {
  return ::XCreateWindow((::Display *)display, parent, x, y, width, height,
                         border_width, depth, window_class, (::Visual *)visual,
                         valuemask, (::XSetWindowAttributes *)attributes);
}

int MapWindow(Display *display, Window window) {
  return ::XMapWindow((::Display *)display, window);
}

int DestroyWindow(Display *display, Window window) {
  return ::XDestroyWindow((::Display *)display, window);
}

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

Image *XGetImage(Display *display, Drawable drawable, int x, int y,
                 unsigned int width, unsigned int height,
                 unsigned long plane_mask, int format) {
  return (Image *)::XGetImage((::Display *)display, drawable, x, y, width,
                              height, plane_mask, format);
}

int DefaultDepth(Display *display, int screen_num) {
  return ScreenOfDisplay(display, screen_num)->root_depth;
}

Visual *DefaultVisual(Display *display, int screen_num) {
  return ScreenOfDisplay(display, screen_num)->root_visual;
}

Colormap CreateColormap(Display *display, Window window, Visual *visual,
                        int alloc) {
  return (Colormap)::XCreateColormap((::Display *)display, window,
                                     (::Visual *)visual, alloc);
}

int GrabKeyboard(Display *display, Window window, bool owner_events,
                 int pointer_mode, int keyboard_mode, Time time) {
  return ::XGrabKeyboard((::Display *)display, window, owner_events,
                         pointer_mode, keyboard_mode, time);
}

int GrabPointer(Display *display, Window window, bool owner_events,
                unsigned int event_mask, int pointer_mode, int keyboard_mode,
                Window confine_to, Cursor cursor, Time time) {
  return ::XGrabPointer((::Display *)display, window, owner_events, event_mask,
                        pointer_mode, keyboard_mode, confine_to, cursor, time);
}

int UngrabKeyboard(Display *display, Time time) {
  return ::XUngrabKeyboard((::Display *)display, time);
}

int UngrabPointer(Display *display, Time time) {
  return ::XUngrabPointer((::Display *)display, time);
}

KeySym LookupKeysym(XKeyEvent *key_event, int index) {
  return XLookupKeysym((::XKeyEvent *)key_event, index);
}

} // namespace X
