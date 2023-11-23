#pragma once
#include "xinput_defines.hpp"
#include "xinput_events.hpp"

namespace X {

int IQueryVersion(Display *display, int *major, int *minor);

bool QueryPointer(Display *display, Window window, Window *window_return,
                  Window *child_return, int *root_x, int *root_y, int *win_x,
                  int *win_y, unsigned int *mask_return);

int ISetMask(unsigned char *ptr, int event);
int IClearMask(unsigned char *ptr, int event);
int IMaskIsSet(unsigned char *ptr, int event);
int IMaskLen(int event);

int XISelectEvents(Display *display, Window window, XIEventMask *mask, int num);

} // namespace X
