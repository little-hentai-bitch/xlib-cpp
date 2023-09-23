#pragma once

namespace X {

typedef unsigned long XID;

typedef XID Window;
typedef XID Colormap;
typedef XID Drawable;
typedef XID PointerBarrier;
typedef XID Cursor;
typedef int Status;
struct _Display;
typedef _Display *Display;
typedef char *Pointer;
typedef unsigned long VisualID;
typedef unsigned long Time;
typedef unsigned long Atom;
typedef int KeyCode;
typedef XID Pixmap;
typedef XID Font;

typedef void *GC;

typedef char *XPointer;

typedef struct {
  short x, y;
  unsigned short width, height;
} XRectangle;

typedef struct {
  short x, y;
} XPoint;

struct XExtData {
  int number;
  XExtData *next;
  int (*free_private)(XExtData *extension);
  Pointer private_data;
};

struct Visual {
  XExtData *ext_data;
  VisualID visualid;
#if defined(__cplusplus) ||                                                    \
    defined(c_plusplus) // need to test this, maybe i can remove it
  int c_class;
#else
  int class;
#endif
  unsigned long red_mask, green_mask, blue_mask;
  int bits_per_rgb;
  int map_entries;
};

typedef struct {
  int depth;
  int nvisuals;
  Visual *visuals;
} Depth;

struct Screen {
  XExtData *ext_data;
  struct _XDisplay *display;
  Window root;
  int width, height;
  int mwidth, mheight;
  int ndepths;
  Depth *depths;
  int root_depth;
  Visual *root_visual;
  GC default_gc;
  Colormap cmap;
  unsigned long white_pixel;
  unsigned long black_pixel;
  int max_maps, min_maps;
  int backing_store;
  bool save_unders;
  long root_input_mask;
};

struct XGCValues {
  int function;
  unsigned long plane_mask;
  unsigned long foreground;
  unsigned long background;
  int line_width;
  int line_style;
  int cap_style;
  int join_style;
  int fill_style;
  int fill_rule;
  int arc_mode;
  Pixmap tile;
  Pixmap stipple;
  int ts_x_origin;
  int ts_y_origin;
  Font font;
  int subwindow_mode;
  bool graphics_exposures;
  int clip_x_origin;
  int clip_y_origin;
  Pixmap clip_mask;
  int dash_offset;
  char dashes;
};

} // namespace X