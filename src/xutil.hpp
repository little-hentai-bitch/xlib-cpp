#pragma once
#include "xkb_defines.hpp"
#include "xlib++.hpp"

namespace X {

constexpr auto NoValue = 0x0000;
constexpr auto XValue = 0x0001;
constexpr auto YValue = 0x0002;
constexpr auto WidthValue = 0x0004;
constexpr auto HeightValue = 0x0008;
constexpr auto AllValues = 0x000F;
constexpr auto XNegative = 0x0010;
constexpr auto YNegative = 0x0020;

typedef struct {
  long flags;
  int x, y;
  int width, height;
  int min_width, min_height;
  int max_width, max_height;
  int width_inc, height_inc;
  struct {
    int x;
    int y;
  } min_aspect, max_aspect;
  int base_width, base_height;
  int win_gravity;
} XSizeHints;

constexpr unsigned int USPosition = (1L << 0);
constexpr unsigned int USSize = (1L << 1);

constexpr unsigned int PPosition = (1L << 2);
constexpr unsigned int PSize = (1L << 3);
constexpr unsigned int PMinSize = (1L << 4);
constexpr unsigned int PMaxSize = (1L << 5);
constexpr unsigned int PResizeInc = (1L << 6);
constexpr unsigned int PAspect = (1L << 7);
constexpr unsigned int PBaseSize = (1L << 8);
constexpr unsigned int PWinGravity = (1L << 9);

constexpr auto PAllHints =
    (PPosition | PSize | PMinSize | PMaxSize | PResizeInc | PAspect);

typedef struct {
  long flags;
  bool input;
  int initial_state;
  Pixmap icon_pixmap;
  Window icon_window;
  int icon_x, icon_y;
  Pixmap icon_mask;
  XID window_group;

} XWMHints;

constexpr unsigned int InputHint = (1L << 0);
constexpr unsigned int StateHint = (1L << 1);
constexpr unsigned int IconPixmapHint = (1L << 2);
constexpr unsigned int IconWindowHint = (1L << 3);
constexpr unsigned int IconPositionHint = (1L << 4);
constexpr unsigned int IconMaskHint = (1L << 5);
constexpr unsigned int WindowGroupHint = (1L << 6);
constexpr auto AllHints =
    (InputHint | StateHint | IconPixmapHint | IconWindowHint |
     IconPositionHint | IconMaskHint | WindowGroupHint);
constexpr unsigned int XUrgencyHint = (1L << 8);

constexpr auto WithdrawnState = 0;
constexpr auto NormalState = 1;
constexpr auto IconicState = 3;

constexpr auto DontCareState = 0;
constexpr auto ZoomState = 2;
constexpr auto InactiveState = 4;

typedef struct {
  unsigned char *value;
  Atom encoding;
  int format;
  unsigned long nitems;
} XTextProperty;

constexpr auto XNoMemory = -1;
constexpr auto XLocaleNotSupported = -2;
constexpr auto XConverterNotFound = -3;

typedef enum {
  XStringStyle,
  XCompoundTextStyle,
  XTextStyle,
  XStdICCTextStyle,

  XUTF8StringStyle
} XICCEncodingStyle;

typedef struct {
  int min_width, min_height;
  int max_width, max_height;
  int width_inc, height_inc;
} XIconSize;

typedef struct {
  char *res_name;
  char *res_class;
} XClassHint;

int DestroyImage(Image *ximage);

unsigned long GetPixel(Image *ximage, int x, int y);

int PutPixel(Image *ximage, int x, int y, unsigned long pixel);

Image *SubImage(Image *ximage, int x, int y, unsigned int width,
                  unsigned int height);

int AddPixel(Image *ximage, long value);

typedef struct _XComposeStatus {
  XPointer compose_ptr;
  int chars_matched;
} XComposeStatus;

// #define IsKeypadKey(keysym)                                                    \
//   (((KeySym)(keysym) >= XK_KP_Space) && ((KeySym)(keysym) <= XK_KP_Equal))

// #define IsPrivateKeypadKey(keysym)                                             \
//   (((KeySym)(keysym) >= 0x11000000) && ((KeySym)(keysym) <= 0x1100FFFF))

// #define IsCursorKey(keysym)                                                    \
//   (((KeySym)(keysym) >= XK_Home) && ((KeySym)(keysym) < XK_Select))

// #define IsPFKey(keysym)                                                        \
//   (((KeySym)(keysym) >= XK_KP_F1) && ((KeySym)(keysym) <= XK_KP_F4))

// #define IsFunctionKey(keysym)                                                  \
//   (((KeySym)(keysym) >= XK_F1) && ((KeySym)(keysym) <= XK_F35))

// #define IsMiscFunctionKey(keysym)                                              \
//   (((KeySym)(keysym) >= XK_Select) && ((KeySym)(keysym) <= XK_Break))

// #ifdef XK_XKB_KEYS
// #define IsModifierKey(keysym) \
//   ((((KeySym)(keysym) >= XK_Shift_L) && ((KeySym)(keysym) <= XK_Hyper_R)) ||
//   \
//    (((KeySym)(keysym) >= XK_ISO_Lock) && \
//     ((KeySym)(keysym) <= XK_ISO_Level5_Lock)) || \
//    ((KeySym)(keysym) == XK_Mode_switch) || ((KeySym)(keysym) == XK_Num_Lock))
// #else
// #define IsModifierKey(keysym) \
//   ((((KeySym)(keysym) >= XK_Shift_L) && ((KeySym)(keysym) <= XK_Hyper_R)) ||
//   \
//    ((KeySym)(keysym) == XK_Mode_switch) || ((KeySym)(keysym) == XK_Num_Lock))
// #endif

typedef struct _XRegion *Region;

constexpr auto RectangleOut = 0;
constexpr auto RectangleIn = 1;
constexpr auto RectanglePart = 2;

typedef struct {
  Visual *visual;
  VisualID visualid;
  int screen;
  int depth;
  int c_class;
  unsigned long red_mask;
  unsigned long green_mask;
  unsigned long blue_mask;
  int colormap_size;
  int bits_per_rgb;
} XVisualInfo;

constexpr auto VisualNoMask = 0x0;
constexpr auto VisualIDMask = 0x1;
constexpr auto VisualScreenMask = 0x2;
constexpr auto VisualDepthMask = 0x4;
constexpr auto VisualClassMask = 0x8;
constexpr auto VisualRedMaskMask = 0x10;
constexpr auto VisualGreenMaskMask = 0x20;
constexpr auto VisualBlueMaskMask = 0x40;
constexpr auto VisualColormapSizeMask = 0x80;
constexpr auto VisualBitsPerRGBMask = 0x100;
constexpr auto VisualAllMask = 0x1FF;

typedef struct {
  Colormap colormap;
  unsigned long red_max;
  unsigned long red_mult;
  unsigned long green_max;
  unsigned long green_mult;
  unsigned long blue_max;
  unsigned long blue_mult;
  unsigned long base_pixel;
  VisualID visualid;
  XID killid;
} XStandardColormap;

constexpr auto ReleaseByFreeingColormap = ((XID)1L);

constexpr auto BitmapSuccess = 0;
constexpr auto BitmapOpenFailed = 1;
constexpr auto BitmapFileInvalid = 2;
constexpr auto BitmapNoMemory = 3;

constexpr auto XCSUCCESS = 0;
constexpr auto XCNOMEM = 1;
constexpr auto XCNOENT = 2;

typedef int XContext;

// XContext XUniqueContext() { return (XContext)XrmUniqueQuark(); }

template <typename T> XContext XStringToContext(T str) {
  return (XContext)XrmStringToQuark(str);
};

XClassHint *XAllocClassHint(void);

XIconSize *XAllocIconSize(void);

XSizeHints *XAllocSizeHints(void);

XStandardColormap *XAllocStandardColormap(void);

XWMHints *XAllocWMHints(void);

int XClipBox(Region, XRectangle *);

Region XCreateRegion(void);

const char *XDefaultString(void);

int XDeleteContext(Display *, XID, XContext);

int XDestroyRegion(Region);

int XEmptyRegion(Region);

int XEqualRegion(Region, Region);

int XFindContext(Display *, XID, XContext, XPointer *);

Status XGetClassHint(Display *, Window, XClassHint *);

Status XGetIconSizes(Display *, Window, XIconSize **, int *);

Status XGetNormalHints(Display *, Window, XSizeHints *);

Status XGetRGBColormaps(Display *, Window, XStandardColormap **, int *, Atom);

Status XGetSizeHints(Display *, Window, XSizeHints *, Atom);

Status XGetStandardColormap(Display *, Window, XStandardColormap *, Atom);

Status XGetTextProperty(Display *, Window, XTextProperty *, Atom);

XVisualInfo *XGetVisualInfo(Display *, long, XVisualInfo *, int *);

Status XGetWMClientMachine(Display *, Window, XTextProperty *);

XWMHints *XGetWMHints(Display *, Window);

Status XGetWMIconName(Display *, Window, XTextProperty *);

Status XGetWMName(Display *, Window, XTextProperty *);

Status XGetWMNormalHints(Display *, Window, XSizeHints *, long *);

Status XGetWMSizeHints(Display *, Window, XSizeHints *, long *, Atom);

Status XGetZoomHints(Display *, Window, XSizeHints *);

int XIntersectRegion(Region, Region, Region);

void XConvertCase(KeySym, KeySym *, KeySym *);

int XLookupString(XKeyEvent *, char *, int, KeySym *, XComposeStatus *);

Status XMatchVisualInfo(Display *, int, int, int, XVisualInfo *);

int XOffsetRegion(Region, int, int);

bool XPointInRegion(Region, int, int);

Region XPolygonRegion(XPoint *, int, int);

int XRectInRegion(Region, int, int, unsigned int, unsigned int);

int XSaveContext(Display *, XID, XContext, const char *);

int XSetClassHint(Display *, Window, XClassHint *);

int XSetIconSizes(Display *, Window, XIconSize *, int);

int XSetNormalHints(Display *, Window, XSizeHints *);

void XSetRGBColormaps(Display *, Window, XStandardColormap *, int, Atom);

int XSetSizeHints(Display *, Window, XSizeHints *, Atom);

int XSetStandardProperties(Display *, Window, const char *, const char *,
                           Pixmap, char **, int, XSizeHints *);

void XSetTextProperty(Display *, Window, XTextProperty *, Atom);

void XSetWMClientMachine(Display *, Window, XTextProperty *);

int XSetWMHints(Display *, Window, XWMHints *);

void XSetWMIconName(Display *, Window, XTextProperty *);

void XSetWMName(Display *, Window, XTextProperty *);

void XSetWMNormalHints(Display *, Window, XSizeHints *);

void XSetWMProperties(Display *, Window, XTextProperty *, XTextProperty *,
                      char **, int, XSizeHints *, XWMHints *, XClassHint *);

void XmbSetWMProperties(Display *, Window, const char *, const char *, char **,
                        int, XSizeHints *, XWMHints *, XClassHint *);

void Xutf8SetWMProperties(Display *, Window, const char *, const char *,
                          char **, int, XSizeHints *, XWMHints *, XClassHint *);

void XSetWMSizeHints(Display *, Window, XSizeHints *, Atom);

int XSetRegion(Display *, GC, Region);

void XSetStandardColormap(Display *, Window, XStandardColormap *, Atom);

int XSetZoomHints(Display *, Window, XSizeHints *);

int XShrinkRegion(Region, int, int);

Status XStringListToTextProperty(char **, int, XTextProperty *);

int XSubtractRegion(Region, Region, Region);

int XmbTextListToTextProperty(Display *display, char **list, int count,
                              XICCEncodingStyle style,
                              XTextProperty *text_prop_return);

int XwcTextListToTextProperty(Display *display, wchar_t **list, int count,
                              XICCEncodingStyle style,
                              XTextProperty *text_prop_return);

int Xutf8TextListToTextProperty(Display *display, char **list, int count,
                                XICCEncodingStyle style,
                                XTextProperty *text_prop_return);

void XwcFreeStringList(wchar_t **list);

Status XTextPropertyToStringList(XTextProperty *, char ***, int *);

int XmbTextPropertyToTextList(Display *display, const XTextProperty *text_prop,
                              char ***list_return, int *count_return);

int XwcTextPropertyToTextList(Display *display, const XTextProperty *text_prop,
                              wchar_t ***list_return, int *count_return);

int Xutf8TextPropertyToTextList(Display *display,
                                const XTextProperty *text_prop,
                                char ***list_return, int *count_return);

int XUnionRectWithRegion(XRectangle *, Region, Region);

int XUnionRegion(Region, Region, Region);

int XWMGeometry(Display *, int, const char *, const char *, unsigned int,
                XSizeHints *, int *, int *, int *, int *, int *);

int XXorRegion(Region, Region, Region);

} // namespace X
