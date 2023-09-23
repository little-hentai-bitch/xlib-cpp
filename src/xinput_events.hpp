#pragma once
#include "data_types.hpp"

namespace X {

struct XIAddMasterInfo {
  int type;
  char *name;
  bool send_core;
  bool enable;
};

struct XIRemoveMasterInfo {
  int type;
  int deviceid;
  int return_mode;
  int return_pointer;
  int return_keyboard;
};

struct XIAttachSlaveInfo {
  int type;
  int deviceid;
  int new_master;
};

struct XIDetachSlaveInfo {
  int type;
  int deviceid;
};

union XIAnyHierarchyChangeInfo {
  int type;
  XIAddMasterInfo add;
  XIRemoveMasterInfo remove;
  XIAttachSlaveInfo attach;
  XIDetachSlaveInfo detach;
};

struct XIModifierState {
  int base;
  int latched;
  int locked;
  int effective;
};

typedef XIModifierState XIGroupState;

struct XIButtonState {
  int mask_len;
  unsigned char *mask;
};

struct XIValuatorState {
  int mask_len;
  unsigned char *mask;
  double *values;
};

struct XIEventMask {
  int deviceid;
  int mask_len;
  unsigned char *mask;
};

struct XIAnyClassInfo {
  int type;
  int sourceid;
};

struct XIButtonClassInfo {
  int type;
  int sourceid;
  int num_buttons;
  Atom *labels;
  XIButtonState state;
};

struct XIKeyClassInfo {
  int type;
  int sourceid;
  int num_keycodes;
  int *keycodes;
};

struct XIValuatorClassInfo {
  int type;
  int sourceid;
  int number;
  Atom label;
  double min;
  double max;
  double value;
  int resolution;
  int mode;
};

struct XIScrollClassInfo {
  int type;
  int sourceid;
  int number;
  int scroll_type;
  double increment;
  int flags;
};

struct XITouchClassInfo {
  int type;
  int sourceid;
  int mode;
  int num_touches;
};

struct XIGestureClassInfo {
  int type;
  int sourceid;
  int num_touches;
};

struct XIDeviceInfo {
  int deviceid;
  char *name;
  int use;
  int attachment;
  bool enabled;
  int num_classes;
  XIAnyClassInfo **classes;
};

struct XIGrabModifiers {
  int modifiers;
  int status;
};

typedef unsigned int BarrierEventID;

struct XIBarrierReleasePointerInfo {
  int deviceid;
  PointerBarrier barrier;
  BarrierEventID eventid;
};

struct XIEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
};

struct XIHierarchyInfo {
  int deviceid;
  int attachment;
  int use;
  bool enabled;
  int flags;
};

struct XIHierarchyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int flags;
  int num_info;
  XIHierarchyInfo *info;
};

struct XIDeviceChangedEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  int reason;
  int num_classes;
  XIAnyClassInfo **classes;
};

struct XIDeviceEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  int detail;
  Window root;
  Window event;
  Window child;
  double root_x;
  double root_y;
  double event_x;
  double event_y;
  int flags;
  XIButtonState buttons;
  XIValuatorState valuators;
  XIModifierState mods;
  XIGroupState group;
};

struct XIRawEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  int detail;
  int flags;
  XIValuatorState valuators;
  double *raw_values;
};

struct XIEnterEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  int detail;
  Window root;
  Window event;
  Window child;
  double root_x;
  double root_y;
  double event_x;
  double event_y;
  int mode;
  bool focus;
  bool same_screen;
  XIButtonState buttons;
  XIModifierState mods;
  XIGroupState group;
};

typedef XIEnterEvent XILeaveEvent;
typedef XIEnterEvent XIFocusInEvent;
typedef XIEnterEvent XIFocusOutEvent;

struct XIPropertyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  Atom property;
  int what;
};

struct XITouchOwnershipEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  unsigned int touchid;
  Window root;
  Window event;
  Window child;
  int flags;
};

struct XIBarrierEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  Window event;
  Window root;
  double root_x;
  double root_y;
  double dx;
  double dy;
  int dtime;
  int flags;
  PointerBarrier barrier;
  BarrierEventID eventid;
};

struct XIGesturePinchEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  int detail;
  Window root;
  Window event;
  Window child;
  double root_x;
  double root_y;
  double event_x;
  double event_y;
  double delta_x;
  double delta_y;
  double delta_unaccel_x;
  double delta_unaccel_y;
  double scale;
  double delta_angle;
  int flags;
  XIModifierState mods;
  XIGroupState group;
};

struct XIGestureSwipeEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  int extension;
  int evtype;
  Time time;
  int deviceid;
  int sourceid;
  int detail;
  Window root;
  Window event;
  Window child;
  double root_x;
  double root_y;
  double event_x;
  double event_y;
  double delta_x;
  double delta_y;
  double delta_unaccel_x;
  double delta_unaccel_y;
  int flags;
  XIModifierState mods;
  XIGroupState group;
};

// extern bool XIQueryPointer(Display *display, int deviceid, Window win,
//                            Window *root, Window *child, double *root_x,
//                            double *root_y, double *win_x, double *win_y,
//                            XIButtonState *buttons, XIModifierState *mods,
//                            XIGroupState *group);

// extern bool XIWarpPointer(Display *display, int deviceid, Window src_win,
//                           Window dst_win, double src_x, double src_y,
//                           unsigned int src_width, unsigned int src_height,
//                           double dst_x, double dst_y);

// extern Status XIDefineCursor(Display *display, int deviceid, Window win,
//                              Cursor cursor);

// extern Status XIUndefineCursor(Display *display, int deviceid, Window win);

// extern Status XIChangeHierarchy(Display *display,
//                                 XIAnyHierarchyChangeInfo *changes,
//                                 int num_changes);

// extern Status XISetClientPointer(Display *dpy, Window win, int deviceid);

// extern bool XIGetClientPointer(Display *dpy, Window win, int *deviceid);

// extern int XISelectEvents(Display *dpy, Window win, XIEventMask *masks,
//                           int num_masks);

// extern XIEventMask *XIGetSelectedEvents(Display *dpy, Window win,
//                                         int *num_masks_return);

// extern Status XIQueryVersion(Display *dpy, int *major_version_inout,
//                              int *minor_version_inout);

// extern XIDeviceInfo *XIQueryDevice(Display *dpy, int deviceid,
//                                    int *ndevices_return);

// extern Status XISetFocus(Display *dpy, int deviceid, Window focus, Time
// time);

// extern Status XIGetFocus(Display *dpy, int deviceid, Window *focus_return);

// extern Status XIGrabDevice(Display *dpy, int deviceid, Window grab_window,
//                            Time time, Cursor cursor, int grab_mode,
//                            int paired_device_mode, bool owner_events,
//                            XIEventMask *mask);

// extern Status XIUngrabDevice(Display *dpy, int deviceid, Time time);

// extern Status XIAllowEvents(Display *display, int deviceid, int event_mode,
//                             Time time);

// extern Status XIAllowTouchEvents(Display *display, int deviceid,
//                                  unsigned int touchid, Window grab_window,
//                                  int event_mode);

// extern int XIGrabButton(Display *display, int deviceid, int button,
//                         Window grab_window, Cursor cursor, int grab_mode,
//                         int paired_device_mode, int owner_events,
//                         XIEventMask *mask, int num_modifiers,
//                         XIGrabModifiers *modifiers_inout);

// extern int XIGrabKeycode(Display *display, int deviceid, int keycode,
//                          Window grab_window, int grab_mode,
//                          int paired_device_mode, int owner_events,
//                          XIEventMask *mask, int num_modifiers,
//                          XIGrabModifiers *modifiers_inout);

// extern int XIGrabEnter(Display *display, int deviceid, Window grab_window,
//                        Cursor cursor, int grab_mode, int paired_device_mode,
//                        int owner_events, XIEventMask *mask, int
//                        num_modifiers, XIGrabModifiers *modifiers_inout);

// extern int XIGrabFocusIn(Display *display, int deviceid, Window grab_window,
//                          int grab_mode, int paired_device_mode,
//                          int owner_events, XIEventMask *mask, int
//                          num_modifiers, XIGrabModifiers *modifiers_inout);

// extern int XIGrabTouchBegin(Display *display, int deviceid, Window
// grab_window,
//                             int owner_events, XIEventMask *mask,
//                             int num_modifiers,
//                             XIGrabModifiers *modifiers_inout);

// extern int XIGrabPinchGestureBegin(Display *display, int deviceid,
//                                    Window grab_window, int grab_mode,
//                                    int paired_device_mode, int owner_events,
//                                    XIEventMask *mask, int num_modifiers,
//                                    XIGrabModifiers *modifiers_inout);

// extern int XIGrabSwipeGestureBegin(Display *display, int deviceid,
//                                    Window grab_window, int grab_mode,
//                                    int paired_device_mode, int owner_events,
//                                    XIEventMask *mask, int num_modifiers,
//                                    XIGrabModifiers *modifiers_inout);

// extern Status XIUngrabButton(Display *display, int deviceid, int button,
//                              Window grab_window, int num_modifiers,
//                              XIGrabModifiers *modifiers);

// extern Status XIUngrabKeycode(Display *display, int deviceid, int keycode,
//                               Window grab_window, int num_modifiers,
//                               XIGrabModifiers *modifiers);

// extern Status XIUngrabEnter(Display *display, int deviceid, Window
// grab_window,
//                             int num_modifiers, XIGrabModifiers *modifiers);

// extern Status XIUngrabFocusIn(Display *display, int deviceid,
//                               Window grab_window, int num_modifiers,
//                               XIGrabModifiers *modifiers);

// extern Status XIUngrabTouchBegin(Display *display, int deviceid,
//                                  Window grab_window, int num_modifiers,
//                                  XIGrabModifiers *modifiers);

// extern Status XIUngrabPinchGestureBegin(Display *display, int deviceid,
//                                         Window grab_window, int
//                                         num_modifiers, XIGrabModifiers
//                                         *modifiers);

// extern Status XIUngrabSwipeGestureBegin(Display *display, int deviceid,
//                                         Window grab_window, int
//                                         num_modifiers, XIGrabModifiers
//                                         *modifiers);

// extern Atom *XIListProperties(Display *display, int deviceid,
//                               int *num_props_return);

// extern void XIChangeProperty(Display *display, int deviceid, Atom property,
//                              Atom type, int format, int mode,
//                              unsigned char *data, int num_items);

// extern void XIDeleteProperty(Display *display, int deviceid, Atom property);

// extern Status XIGetProperty(Display *display, int deviceid, Atom property,
//                             long offset, long length, bool delete_property,
//                             Atom type, Atom *type_return, int *format_return,
//                             unsigned long *num_items_return,
//                             unsigned long *bytes_after_return,
//                             unsigned char **data);

// extern void XIBarrierReleasePointers(Display *display,
//                                      XIBarrierReleasePointerInfo *barriers,
//                                      int num_barriers);

// extern void XIBarrierReleasePointer(Display *display, int deviceid,
//                                     PointerBarrier barrier,
//                                     BarrierEventID eventid);

// extern void XIFreeDeviceInfo(XIDeviceInfo *info);

} // namespace X
