#include "xutil.hpp"
#include "implementation.hpp"

#undef XDestroyImage
#undef XGetPixel
#undef XPutPixel
#undef XSubImage
#undef XAddPixel

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

int DestroyImage(Image *ximage) {
  return ((*(ximage->f.destroy_image))(ximage));
}

unsigned long GetPixel(Image *ximage, int x, int y) {
  return ((*(ximage->f.get_pixel))(ximage, x, y));
}

int PutPixel(Image *ximage, int x, int y, unsigned long pixel) {
  return ((*(ximage->f.put_pixel))(ximage, x, y, pixel));
}

Image *SubImage(Image *ximage, int x, int y, unsigned int width,
                  unsigned int height) {
  return ((*(ximage->f.sub_image))(ximage, x, y, width, height));
}

int AddPixel(Image *ximage, long value) {
  return ((*(ximage->f.add_pixel))(ximage, value));
}

} // namespace X
