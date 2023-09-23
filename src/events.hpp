#pragma once
#include "data_types.hpp"

namespace X {

struct XKeyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Window root;
  Window subwindow;
  Time time;
  int x, y;
  int x_root, y_root;
  unsigned int state;
  unsigned int keycode;
  bool same_screen;
};
typedef XKeyEvent XKeyPressedEvent;
typedef XKeyEvent XKeyReleasedEvent;

struct XButtonEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Window root;
  Window subwindow;
  Time time;
  int x, y;
  int x_root, y_root;
  unsigned int state;
  unsigned int button;
  bool same_screen;
};
typedef XButtonEvent XButtonPressedEvent;
typedef XButtonEvent XButtonReleasedEvent;

struct XMotionEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Window root;
  Window subwindow;
  Time time;
  int x, y;
  int x_root, y_root;
  unsigned int state;
  char is_hint;
  bool same_screen;
};
typedef XMotionEvent XPointerMovedEvent;

struct XCrossingEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Window root;
  Window subwindow;
  Time time;
  int x, y;
  int x_root, y_root;
  int mode;
  int detail;

  bool same_screen;
  bool focus;
  unsigned int state;
};
typedef XCrossingEvent XEnterWindowEvent;
typedef XCrossingEvent XLeaveWindowEvent;

struct XFocusChangeEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  int mode;
  int detail;
};
typedef XFocusChangeEvent XFocusInEvent;
typedef XFocusChangeEvent XFocusOutEvent;

struct XKeymapEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  char key_vector[32];
};

struct XExposeEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  int x, y;
  int width, height;
  int count;
};

struct XGraphicsExposeEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Drawable drawable;
  int x, y;
  int width, height;
  int count;
  int major_code;
  int minor_code;
};

struct XNoExposeEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Drawable drawable;
  int major_code;
  int minor_code;
};

struct XVisibilityEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  int state;
};

struct XCreateWindowEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window parent;
  Window window;
  int x, y;
  int width, height;
  int border_width;
  bool override_redirect;
};

struct XDestroyWindowEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
};

struct XUnmapEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
  bool from_configure;
};

struct XMapEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
  bool override_redirect;
};

struct XMapRequestEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window parent;
  Window window;
};

struct XReparentEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
  Window parent;
  int x, y;
  bool override_redirect;
};

struct XConfigureEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
  int x, y;
  int width, height;
  int border_width;
  Window above;
  bool override_redirect;
};

struct XGravityEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
  int x, y;
};

struct XResizeRequestEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  int width, height;
};

struct XConfigureRequestEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window parent;
  Window window;
  int x, y;
  int width, height;
  int border_width;
  Window above;
  int detail;
  unsigned long value_mask;
};

struct XCirculateEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window event;
  Window window;
  int place;
};

struct XCirculateRequestEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window parent;
  Window window;
  int place;
};

struct XPropertyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Atom atom;
  Time time;
  int state;
};

struct XSelectionClearEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Atom selection;
  Time time;
};

struct XSelectionRequestEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window owner;
  Window requestor;
  Atom selection;
  Atom target;
  Atom property;
  Time time;
};

struct XSelectionEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window requestor;
  Atom selection;
  Atom target;
  Atom property;
  Time time;
};

struct XColormapEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Colormap colormap;
#if defined(__cplusplus) || defined(c_plusplus)
  bool c_new;
#else
  bool new;
#endif
  int state;
};

struct XClientMessageEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  Atom message_type;
  int format;
  union {
    char b[20];
    short s[10];
    long l[5];
  };
};

struct XMappingEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
  int request;
  int first_keycode;
  int count;
};

struct XErrorEvent {
  int type;
  Display *display;
  XID resourceid;
  unsigned long serial;
  unsigned char error_code;
  unsigned char request_code;
  unsigned char minor_code;
};

struct XAnyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Window window;
};

struct XGenericEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
};

struct XGenericEventCookie {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  unsigned int cookie;
  void *data;
};

union XEvent {
  int type;
  XAnyEvent xany;
  XKeyEvent xkey;
  XButtonEvent xbutton;
  XMotionEvent xmotion;
  XCrossingEvent xcrossing;
  XFocusChangeEvent xfocus;
  XExposeEvent xexpose;
  XGraphicsExposeEvent xgraphicsexpose;
  XNoExposeEvent xnoexpose;
  XVisibilityEvent xvisibility;
  XCreateWindowEvent xcreatewindow;
  XDestroyWindowEvent xdestroywindow;
  XUnmapEvent xunmap;
  XMapEvent xmap;
  XMapRequestEvent xmaprequest;
  XReparentEvent xreparent;
  XConfigureEvent xconfigure;
  XGravityEvent xgravity;
  XResizeRequestEvent xresizerequest;
  XConfigureRequestEvent xconfigurerequest;
  XCirculateEvent xcirculate;
  XCirculateRequestEvent xcirculaterequest;
  XPropertyEvent xproperty;
  XSelectionClearEvent xselectionclear;
  XSelectionRequestEvent xselectionrequest;
  XSelectionEvent xselection;
  XColormapEvent xcolormap;
  XMappingEvent xmapping;
  XErrorEvent xerror;
  XKeymapEvent xkeymap;
  XGenericEvent xgeneric;
  XGenericEventCookie xcookie;
  long pad[24];
};

}; // namespace X
