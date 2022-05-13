/* WARNING: Autogenerated file - see ./make-cairo-boilerplate-constructors.sh! */

#include <cairo/cairo-boilerplate-private.h>

void _cairo_boilerplate_register_all (void);

extern void _register_builtin (void);
extern void _register_xlib (void);
extern void _register_xcb (void);
extern void _register_script (void);
extern void _register_ps (void);
extern void _register_pdf (void);
extern void _register_svg (void);

void
_cairo_boilerplate_register_all (void)
{
    _register_builtin ();
    _register_xlib ();
    _register_xcb ();
    _register_script ();
    _register_ps ();
    _register_pdf ();
    _register_svg ();
}
