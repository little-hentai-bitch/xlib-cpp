#pragma once
#include "data_types.hpp"
#include "events.hpp"
#include "xkb_defines.hpp"
#include "xkb_str.hpp"
#include "keysymdef.hpp"

namespace X {

typedef struct _XkbAnyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  unsigned int device;
} XkbAnyEvent;

typedef struct _XkbNewKeyboardNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  int old_device;
  int min_key_code;
  int max_key_code;
  int old_min_key_code;
  int old_max_key_code;
  unsigned int changed;
  char req_major;
  char req_minor;
} XkbNewKeyboardNotifyEvent;

typedef struct _XkbMapNotifyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int changed;
  unsigned int flags;
  int first_type;
  int num_types;
  KeyCode min_key_code;
  KeyCode max_key_code;
  KeyCode first_key_sym;
  KeyCode first_key_act;
  KeyCode first_key_behavior;
  KeyCode first_key_explicit;
  KeyCode first_modmap_key;
  KeyCode first_vmodmap_key;
  int num_key_syms;
  int num_key_acts;
  int num_key_behaviors;
  int num_key_explicit;
  int num_modmap_keys;
  int num_vmodmap_keys;
  unsigned int vmods;
} XkbMapNotifyEvent;

typedef struct _XkbStateNotifyEvent {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int changed;
  int group;
  int base_group;
  int latched_group;
  int locked_group;
  unsigned int mods;
  unsigned int base_mods;
  unsigned int latched_mods;
  unsigned int locked_mods;
  int compat_state;
  unsigned char grab_mods;
  unsigned char compat_grab_mods;
  unsigned char lookup_mods;
  unsigned char compat_lookup_mods;
  int ptr_buttons;
  KeyCode keycode;
  char event_type;
  char req_major;
  char req_minor;
} XkbStateNotifyEvent;

typedef struct _XkbControlsNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int changed_ctrls;
  unsigned int enabled_ctrls;
  unsigned int enabled_ctrl_changes;
  int num_groups;
  KeyCode keycode;
  char event_type;
  char req_major;
  char req_minor;
} XkbControlsNotifyEvent;

typedef struct _XkbIndicatorNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int changed;
  unsigned int state;
} XkbIndicatorNotifyEvent;

typedef struct _XkbNamesNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int changed;
  int first_type;
  int num_types;
  int first_lvl;
  int num_lvls;
  int num_aliases;
  int num_radio_groups;
  unsigned int changed_vmods;
  unsigned int changed_groups;
  unsigned int changed_indicators;
  int first_key;
  int num_keys;
} XkbNamesNotifyEvent;

typedef struct _XkbCompatMapNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int changed_groups;
  int first_si;
  int num_si;
  int num_total_si;
} XkbCompatMapNotifyEvent;

typedef struct _XkbBellNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  int percent;
  int pitch;
  int duration;
  int bell_class;
  int bell_id;
  Atom name;
  Window window;
  bool event_only;
} XkbBellNotifyEvent;

typedef struct _XkbActionMessage {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  KeyCode keycode;
  bool press;
  bool key_event_follows;
  int group;
  unsigned int mods;
  char message[XkbActionMessageLength + 1];

} XkbActionMessageEvent;

typedef struct _XkbAccessXNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  int detail;
  int keycode;
  int sk_delay;
  int debounce_delay;
} XkbAccessXNotifyEvent;

typedef struct _XkbExtensionDeviceNotify {
  int type;
  unsigned long serial;
  bool send_event;
  Display *display;
  Time time;
  int xkb_type;
  int device;
  unsigned int reason;
  unsigned int supported;
  unsigned int unsupported;

  int first_btn;
  int num_btns;
  unsigned int leds_defined;
  unsigned int led_state;
  int led_class;
  int led_id;
} XkbExtensionDeviceNotifyEvent;

typedef union _XkbEvent {
  int type;
  XkbAnyEvent any;
  XkbNewKeyboardNotifyEvent new_kbd;
  XkbMapNotifyEvent map;
  XkbStateNotifyEvent state;
  XkbControlsNotifyEvent ctrls;
  XkbIndicatorNotifyEvent indicators;
  XkbNamesNotifyEvent names;
  XkbCompatMapNotifyEvent compat;
  XkbBellNotifyEvent bell;
  XkbActionMessageEvent message;
  XkbAccessXNotifyEvent accessx;
  XkbExtensionDeviceNotifyEvent device;
  XEvent core;
} XkbEvent;

typedef struct _XkbKbdDpyState XkbKbdDpyStateRec, *XkbKbdDpyStatePtr;

constexpr auto XkbOD_Success = 0;
constexpr auto XkbOD_BadLibraryVersion = 1;
constexpr auto XkbOD_ConnectionRefused = 2;
constexpr auto XkbOD_NonXkbServer = 3;
constexpr auto XkbOD_BadServerVersion = 4;

constexpr auto XkbLC_ForceLatin1Lookup = (1 << 0);
constexpr auto XkbLC_ConsumeLookupMods = (1 << 1);
constexpr auto XkbLC_AlwaysConsumeShiftAndLock = (1 << 2);
constexpr auto XkbLC_IgnoreNewKeyboards = (1 << 3);
constexpr auto XkbLC_ControlFallback = (1 << 4);
constexpr auto XkbLC_ConsumeKeysOnComposeFail = (1 << 29);
constexpr auto XkbLC_ComposeLED = (1 << 30);
constexpr auto XkbLC_BeepOnComposeFail = (1 << 31);

constexpr auto XkbLC_AllComposeControls = (0xc0000000);
constexpr auto XkbLC_AllControls = (0xc000001f);

extern bool XkbIgnoreExtension(bool);

extern Display *XkbOpenDisplay(const char *, int *, int *, int *, int *, int *);

extern bool XkbQueryExtension(Display *, int *, int *, int *, int *, int *);

extern bool XkbUseExtension(Display *, int *, int *);

extern bool XkbLibraryVersion(int *, int *);

extern unsigned int XkbSetXlibControls(Display *, unsigned int, unsigned int);

extern unsigned int XkbGetXlibControls(Display *);

extern unsigned int XkbXlibControlsImplemented(void);

typedef Atom (*XkbInternAtomFunc)(Display *, const char *, bool);

typedef char *(*XkbGetAtomNameFunc)(Display *, Atom);

extern void XkbSetAtomFuncs(XkbInternAtomFunc, XkbGetAtomNameFunc);

extern KeySym XkbKeycodeToKeysym(Display *, KeyCode, int, int);

extern unsigned int XkbKeysymToModifiers(Display *, KeySym);

extern bool XkbLookupKeySym(Display *, KeyCode, unsigned int, unsigned int *,
                            KeySym *);

extern int XkbLookupKeyBinding(Display *, KeySym, unsigned int, char *, int,
                               int *);

extern bool XkbTranslateKeyCode(XkbDescPtr, KeyCode, unsigned int,
                                unsigned int *, KeySym *);

extern int XkbTranslateKeySym(Display *, KeySym *, unsigned int, char *, int,
                              int *);

extern bool XkbSetAutoRepeatRate(Display *, unsigned int, unsigned int,
                                 unsigned int);

extern bool XkbGetAutoRepeatRate(Display *, unsigned int, unsigned int *,
                                 unsigned int *);

extern bool XkbChangeEnabledControls(Display *, unsigned int, unsigned int,
                                     unsigned int);

extern bool XkbDeviceBell(Display *, Window, int, int, int, int, Atom);

extern bool XkbForceDeviceBell(Display *, int, int, int, int);

extern bool XkbDeviceBellEvent(Display *, Window, int, int, int, int, Atom);

extern bool XkbBell(Display *, Window, int, Atom);

extern bool XkbForceBell(Display *, int);

extern bool XkbBellEvent(Display *, Window, int, Atom);

extern bool XkbSelectEvents(Display *, unsigned int, unsigned int,
                            unsigned int);

extern bool XkbSelectEventDetails(Display *, unsigned int, unsigned int,
                                  unsigned long, unsigned long);

extern void XkbNoteMapChanges(XkbMapChangesPtr, XkbMapNotifyEvent *,
                              unsigned int);

extern void XkbNoteNameChanges(XkbNameChangesPtr, XkbNamesNotifyEvent *,
                               unsigned int);

extern Status XkbGetIndicatorState(Display *, unsigned int, unsigned int *);

extern Status XkbGetDeviceIndicatorState(Display *, unsigned int, unsigned int,
                                         unsigned int, unsigned int *);

extern Status XkbGetIndicatorMap(Display *, unsigned long, XkbDescPtr);

extern bool XkbSetIndicatorMap(Display *, unsigned long, XkbDescPtr);

template <typename R, typename O, typename N, typename W>
R XkbNoteIndicatorMapChanges(O &o, N &n, W &w) {
  (o->map_changes |= (n->map_changes & w));
}

template <typename R, typename O, typename N, typename W>
R XkbNoteIndicatorStateChanges(O &o, N &n, W &w) {
  (o->state_changes |= (n->state_changes & w));
}

template <typename R, typename D, typename X, typename C>
R XkbGetIndicatorMapChanges(D &d, X &x, C &c) {
  (XkbGetIndicatorMap(d, c->map_changes, x));
}

template <typename R, typename D, typename X, typename C>
R XkbChangeIndicatorMaps(D &d, X &x, C &c) {
  (XkbSetIndicatorMap(d, c->map_changes, x));
}

extern bool XkbGetNamedIndicator(Display *, Atom, int *, bool *,
                                 XkbIndicatorMapPtr, bool *);

extern bool XkbGetNamedDeviceIndicator(Display *, unsigned int, unsigned int,
                                       unsigned int, Atom, int *, bool *,
                                       XkbIndicatorMapPtr, bool *);

extern bool XkbSetNamedIndicator(Display *, Atom, bool, bool, bool,
                                 XkbIndicatorMapPtr);

extern bool XkbSetNamedDeviceIndicator(Display *, unsigned int, unsigned int,
                                       unsigned int, Atom, bool, bool, bool,
                                       XkbIndicatorMapPtr);

extern bool XkbLockModifiers(Display *, unsigned int, unsigned int,
                             unsigned int);

extern bool XkbLatchModifiers(Display *, unsigned int, unsigned int,
                              unsigned int);

extern bool XkbLockGroup(Display *, unsigned int, unsigned int);

extern bool XkbLatchGroup(Display *, unsigned int, unsigned int);

extern bool XkbSetServerInternalMods(Display *, unsigned int, unsigned int,
                                     unsigned int, unsigned int, unsigned int);

extern bool XkbSetIgnoreLockMods(Display *, unsigned int, unsigned int,
                                 unsigned int, unsigned int, unsigned int);

extern bool XkbVirtualModsToReal(XkbDescPtr, unsigned int, unsigned int *);

extern bool XkbComputeEffectiveMap(XkbDescPtr, XkbKeyTypePtr, unsigned char *);

extern Status XkbInitCanonicalKeyTypes(XkbDescPtr, unsigned int, int);

extern XkbDescPtr XkbAllocKeyboard(void);

extern void XkbFreeKeyboard(XkbDescPtr, unsigned int, bool);

extern Status XkbAllocClientMap(XkbDescPtr, unsigned int, unsigned int);

extern Status XkbAllocServerMap(XkbDescPtr, unsigned int, unsigned int);

extern void XkbFreeClientMap(XkbDescPtr, unsigned int, bool);

extern void XkbFreeServerMap(XkbDescPtr, unsigned int, bool);

extern XkbKeyTypePtr XkbAddKeyType(XkbDescPtr, Atom, int, bool, int);

extern Status XkbAllocIndicatorMaps(XkbDescPtr);

extern void XkbFreeIndicatorMaps(XkbDescPtr);

extern XkbDescPtr XkbGetMap(Display *, unsigned int, unsigned int);

extern Status XkbGetUpdatedMap(Display *, unsigned int, XkbDescPtr);

extern Status XkbGetMapChanges(Display *, XkbDescPtr, XkbMapChangesPtr);

extern Status XkbRefreshKeyboardMapping(XkbMapNotifyEvent *);

extern Status XkbGetKeyTypes(Display *, unsigned int, unsigned int, XkbDescPtr);

extern Status XkbGetKeySyms(Display *, unsigned int, unsigned int, XkbDescPtr);

extern Status XkbGetKeyActions(Display *, unsigned int, unsigned int,
                               XkbDescPtr);

extern Status XkbGetKeyBehaviors(Display *, unsigned int, unsigned int,
                                 XkbDescPtr);

extern Status XkbGetVirtualMods(Display *, unsigned int, XkbDescPtr);

extern Status XkbGetKeyExplicitComponents(Display *, unsigned int, unsigned int,
                                          XkbDescPtr);

extern Status XkbGetKeyModifierMap(Display *, unsigned int, unsigned int,
                                   XkbDescPtr);

extern Status XkbGetKeyVirtualModMap(Display *, unsigned int, unsigned int,
                                     XkbDescPtr);

extern Status XkbAllocControls(XkbDescPtr, unsigned int);

extern void XkbFreeControls(XkbDescPtr, unsigned int, bool);

extern Status XkbGetControls(Display *, unsigned long, XkbDescPtr);

extern bool XkbSetControls(Display *, unsigned long, XkbDescPtr);

extern void XkbNoteControlsChanges(XkbControlsChangesPtr,
                                   XkbControlsNotifyEvent *, unsigned int);

template <typename R, typename D, typename X, typename C>
R XkbGetControlsChanges(D &d, X &x, C &c) {
  return XkbGetControls(d, c->changed_ctrls, x);
}

template <typename R, typename D, typename X, typename C>
R XkbChangeControls(D &d, X &x, C &c) {
  return XkbSetControls(d, c->changed_ctrls, x);
}

extern Status XkbAllocCompatMap(XkbDescPtr, unsigned int, unsigned int);

extern void XkbFreeCompatMap(XkbDescPtr, unsigned int, bool);

extern Status XkbGetCompatMap(Display *, unsigned int, XkbDescPtr);

extern bool XkbSetCompatMap(Display *, unsigned int, XkbDescPtr, bool);

extern XkbSymInterpretPtr XkbAddSymInterpret(XkbDescPtr, XkbSymInterpretPtr,
                                             bool, XkbChangesPtr);

extern Status XkbAllocNames(XkbDescPtr, unsigned int, int, int);

extern Status XkbGetNames(Display *, unsigned int, XkbDescPtr);

extern bool XkbSetNames(Display *, unsigned int, unsigned int, unsigned int,
                        XkbDescPtr);

extern bool XkbChangeNames(Display *, XkbDescPtr, XkbNameChangesPtr);

extern void XkbFreeNames(XkbDescPtr, unsigned int, bool);

extern Status XkbGetState(Display *, unsigned int, XkbStatePtr);

extern bool XkbSetMap(Display *, unsigned int, XkbDescPtr);

extern bool XkbChangeMap(Display *, XkbDescPtr, XkbMapChangesPtr);

extern bool XkbSetDetectableAutoRepeat(Display *, bool, bool *);

extern bool XkbGetDetectableAutoRepeat(Display *, bool *);

extern bool XkbSetAutoResetControls(Display *, unsigned int, unsigned int *,
                                    unsigned int *);

extern bool XkbGetAutoResetControls(Display *, unsigned int *, unsigned int *);

extern bool XkbSetPerClientControls(Display *, unsigned int, unsigned int *);

extern bool XkbGetPerClientControls(Display *, unsigned int *);

extern Status XkbCopyKeyType(XkbKeyTypePtr, XkbKeyTypePtr);

extern Status XkbCopyKeyTypes(XkbKeyTypePtr, XkbKeyTypePtr, int);

extern Status XkbResizeKeyType(XkbDescPtr, int, int, bool, int);

extern KeySym *XkbResizeKeySyms(XkbDescPtr, int, int);

extern XkbAction *XkbResizeKeyActions(XkbDescPtr, int, int);

extern Status XkbChangeTypesOfKey(XkbDescPtr, int, int, unsigned int, int *,
                                  XkbMapChangesPtr);

extern Status XkbChangeKeycodeRange(XkbDescPtr, int, int, XkbChangesPtr);

extern XkbComponentListPtr XkbListComponents(Display *, unsigned int,
                                             XkbComponentNamesPtr, int *);

extern void XkbFreeComponentList(XkbComponentListPtr);

extern XkbDescPtr XkbGetKeyboard(Display *, unsigned int, unsigned int);

extern XkbDescPtr XkbGetKeyboardByName(Display *, unsigned int,
                                       XkbComponentNamesPtr, unsigned int,
                                       unsigned int, bool);

extern int XkbKeyTypesForCoreSymbols(XkbDescPtr, int, KeySym *, unsigned int,
                                     int *, KeySym *);

extern bool XkbApplyCompatMapToKey(XkbDescPtr, KeyCode, XkbChangesPtr);

extern bool XkbUpdateMapFromCore(XkbDescPtr, KeyCode, int, int, KeySym *,
                                 XkbChangesPtr);

extern XkbDeviceLedInfoPtr XkbAddDeviceLedInfo(XkbDeviceInfoPtr, unsigned int,
                                               unsigned int);

extern Status XkbResizeDeviceButtonActions(XkbDeviceInfoPtr, unsigned int);

extern XkbDeviceInfoPtr XkbAllocDeviceInfo(unsigned int, unsigned int,
                                           unsigned int);

extern void XkbFreeDeviceInfo(XkbDeviceInfoPtr, unsigned int, bool);

extern void XkbNoteDeviceChanges(XkbDeviceChangesPtr,
                                 XkbExtensionDeviceNotifyEvent *, unsigned int);

extern XkbDeviceInfoPtr XkbGetDeviceInfo(Display *, unsigned int, unsigned int,
                                         unsigned int, unsigned int);

extern Status XkbGetDeviceInfoChanges(Display *, XkbDeviceInfoPtr,
                                      XkbDeviceChangesPtr);

extern Status XkbGetDeviceButtonActions(Display *, XkbDeviceInfoPtr, bool,
                                        unsigned int, unsigned int);

extern Status XkbGetDeviceLedInfo(Display *, XkbDeviceInfoPtr, unsigned int,
                                  unsigned int, unsigned int);

extern bool XkbSetDeviceInfo(Display *, unsigned int, XkbDeviceInfoPtr);

extern bool XkbChangeDeviceInfo(Display *, XkbDeviceInfoPtr,
                                XkbDeviceChangesPtr);

extern bool XkbSetDeviceLedInfo(Display *, XkbDeviceInfoPtr, unsigned int,
                                unsigned int, unsigned int);

extern bool XkbSetDeviceButtonActions(Display *, XkbDeviceInfoPtr, unsigned int,
                                      unsigned int);

extern char XkbToControl(char);

extern bool XkbSetDebuggingFlags(Display *, unsigned int, unsigned int, char *,
                                 unsigned int, unsigned int, unsigned int *,
                                 unsigned int *);

extern bool XkbApplyVirtualModChanges(XkbDescPtr, unsigned int, XkbChangesPtr);

extern bool XkbUpdateActionVirtualMods(XkbDescPtr, XkbAction *, unsigned int);

extern void XkbUpdateKeyTypeVirtualMods(XkbDescPtr, XkbKeyTypePtr, unsigned int,
                                        XkbChangesPtr);

} // namespace X
