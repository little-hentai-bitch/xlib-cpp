#pragma once
#include "data_types.hpp"
#include "defines.hpp"
#include "events.hpp"

typedef unsigned int uint;

namespace X {

int CloseDisplay(Display *display);

Display *OpenDisplay(const char *display_name);

Screen *ScreenOfDisplay(Display *display, int screen_number);

int DefaultScreen(Display *display);

Screen *DefaultScreenOfDisplay(Display *display);

Window RootWindowOfScreen(Screen *screen);

Window RootWindow(Display *display, int screen_number);

Window CreateWindow(Display *display, Window parent, int x, int y,
                    unsigned int width, unsigned int height,
                    unsigned int border_width, int depth,
                    unsigned int window_class, Visual *visual,
                    unsigned long valuemask, SetWindowAttributes *attributes);

int MapWindow(Display *display, Window window);

int DestroyWindow(Display *display, Window window);

int GetGeometry(Display *display, Window window, Window *root_window, int *x,
                int *y, uint *width, uint *height, uint *borders, uint *depth);

int NextEvent(Display *display, XEvent *event);

int XGetEventData(Display *display, XGenericEventCookie *cookie);

int QueryExtension(Display *display, const char *name, int *xi_opcode,
                   int *event, int *error);

int Sync(Display *display, bool discard);

int XQueryKeymap(Display *display, char *keys_return);

int XPending(Display *display);

GC XCreateGC(Display *display, Drawable drawable, unsigned long flags,
             XGCValues *xgc_values);

int XClearWindow(Display *display, Window window);

int XFree(void *ptr);

Atom XInternAtom(Display *display, const char *atom_name, bool only_if_exist);

int XGetWindowProperty(Display *display, Window window, Atom property,
                       long long_offset, long long_length, bool _delete,
                       Atom req_type, Atom *actual_type_return,
                       int *actual_format_return, unsigned long *nitems_return,
                       unsigned long *bytes_after_return,
                       unsigned char **prop_return);

int XGetGCValues(Display *display, GC gc, unsigned long mask,
                 XGCValues *values);

int XConnectionNumber(Display *display);

int XFlush(Display *display);

Image *XGetImage(Display *display, Drawable drawable, int x, int y,
                 unsigned int width, unsigned int height,
                 unsigned long plane_mask, int format);

int DefaultDepth(Display *display, int screen_num);

Visual *DefaultVisual(Display *display, int screen_num);

Colormap CreateColormap(Display *display, Window window, Visual *visual,
                        int alloc);

} // namespace X
