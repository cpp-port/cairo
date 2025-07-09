cmake_minimum_required(VERSION 3.16)
project(cairo C)

if(${BEOS})
  list(APPEND library_source

  src/cairo-beos-surface.cpp
  )
endif()

if(${OS2})
  list(APPEND library_source


          src/cairo-os2-surface.c
  )
endif()

if(${HAS_XCB})
  list(APPEND library_source


          src/cairo-xcb-connection.c
src/cairo-xcb-connection-core.c
src/cairo-xcb-connection-render.c
src/cairo-xcb-connection-shm.c
src/cairo-xcb-resources.c
src/cairo-xcb-screen.c
src/cairo-xcb-shm.c
src/cairo-xcb-surface.c
src/cairo-xcb-surface-core.c
src/cairo-xcb-surface-render.c

  )
endif()


if(${HAS_X11})
  list(APPEND library_source


          src/cairo-xlib-core-compositor.c
          src/cairo-xlib-display.c
          src/cairo-xlib-fallback-compositor.c
          src/cairo-xlib-render-compositor.c
          src/cairo-xlib-screen.c
          src/cairo-xlib-source.c
          src/cairo-xlib-surface.c
          src/cairo-xlib-surface-shm.c
          src/cairo-xlib-visual.c
          src/cairo-xlib-xcb-surface.c

  )
endif()


if(${HAS_COGL})
  list(APPEND library_source

          src/cairo-cogl-context.c
          src/cairo-cogl-gradient.c
          src/cairo-cogl-surface.c
          src/cairo-cogl-utils.c


  )
endif()


if(${HAS_DIRECTFB})
 list(APPEND library_source

         src/cairo-directfb-surface.c


 )
endif()

if(${HAS_GL})
  list(APPEND library_source

          src/cairo-gl-composite.c
          src/cairo-gl-device.c
          src/cairo-gl-dispatch.c
          src/cairo-gl-glyphs.c
          src/cairo-gl-gradient.c
          src/cairo-gl-info.c
          src/cairo-gl-msaa-compositor.c
          src/cairo-gl-operand.c
          src/cairo-gl-shaders.c
          src/cairo-gl-source.c
          src/cairo-gl-spans-compositor.c
          src/cairo-gl-surface.c
          src/cairo-gl-traps-compositor.c
  )
endif()


if(${HAS_GLX})
  list(APPEND library_source


          src/cairo-glx-context.c

  )
endif()

if(${HAS_EGL})
  list(APPEND library_source

src/cairo-egl-context.c

  )
endif()


if(${HAS_WGL})
  list(APPEND library_source

          src/cairo-wgl-context.c


  )
endif()



if(${__APPLE__})
  list(APPEND library_source

          src/cairo-quartz-font.c
src/cairo-quartz-image-surface.c
src/cairo-quartz-surface.c


  )
endif()


if(${HAS_QT})
  list(APPEND library_source

  src/cairo-qt-surface.cpp



  )
endif()




if(${HAS_OPENVG})
list(APPEND library_source
        src/cairo-vg-surface.c

)
endif()


if(${WIN32})
  list(APPEND library_source
          src/win32/cairo-win32-debug.c
          src/win32/cairo-win32-device.c
          src/win32/cairo-win32-display-surface.c
          src/win32/cairo-win32-font.c
          src/win32/cairo-win32-gdi-compositor.c
          src/win32/cairo-win32-printing-surface.c
          src/win32/cairo-win32-private.h
          src/win32/cairo-win32-surface.c
          src/win32/cairo-win32-system.c
  )
endif()

list(APPEND library_source
        src/cairo.c
        src/cairo-analysis-surface.c
        src/cairo-arc.c
        src/cairo-array.c
        src/cairo-atomic.c
        src/cairo-base64-stream.c
        src/cairo-base85-stream.c
        src/cairo-bentley-ottmann.c
        src/cairo-bentley-ottmann-rectangular.c
        src/cairo-bentley-ottmann-rectilinear.c
        src/cairo-botor-scan-converter.c
        src/cairo-boxes.c
        src/cairo-boxes-intersect.c
        src/cairo-cache.c
        src/cairo-cairoerror.c
        src/cairo-cff-subset.c
        src/cairo-clip.c
        src/cairo-clip-boxes.c
        src/cairo-clip-polygon.c
        src/cairo-clip-region.c
        src/cairo-clip-surface.c
        src/cairo-clip-tor-scan-converter.c
        src/cairo-color.c
        src/cairo-composite-rectangles.c
        src/cairo-compositor.c
        src/cairo-contour.c
        src/cairo-damage.c
        src/cairo-debug.c
        src/cairo-default-context.c
        src/cairo-deflate-stream.c
        src/cairo-device.c
        #src/cairo-error.c
        src/cairo-fallback-compositor.c
        src/cairo-features.pc.in
        src/cairo-features-uninstalled.pc.in
        src/cairo-fixed.c
        src/cairo-font-face.c
        src/cairo-font-face-twin.c
        src/cairo-font-face-twin-data.c
        src/cairo-font-options.c
        src/cairo-freed-pool.c
        src/cairo-freelist.c
        src/cairo-ft-font.c
        src/cairo-gstate.c
        src/cairo-hash.c
        src/cairo-hull.c
        src/cairo-image-compositor.c
        src/cairo-image-info.c
        src/cairo-image-source.c
        src/cairo-image-surface.c
        src/cairo-line.c
        src/cairo-lzw.c
        src/cairo-mask-compositor.c
        src/cairo-matrix.c
        src/cairo-mempool.c
        src/cairo-mesh-pattern-rasterizer.c
        src/cairo-misc.c
        src/cairo-mono-scan-converter.c
        src/cairo-mutex.c
        src/cairo-no-compositor.c
        src/cairo-observer.c
        src/cairo-output-stream.c
        src/cairo-paginated-surface.c
        src/cairo-path.c
        src/cairo-path-bounds.c
        src/cairo-path-fill.c
        src/cairo-path-fixed.c
        src/cairo-path-in-fill.c
        src/cairo-path-stroke.c
        src/cairo-path-stroke-boxes.c
        src/cairo-path-stroke-polygon.c
        src/cairo-path-stroke-traps.c
        src/cairo-path-stroke-tristrip.c
        src/cairo-pattern.c
        src/cairo-pdf-interchange.c
        src/cairo-pdf-operators.c
        src/cairo-pdf-shading.c
        src/cairo-pdf-surface.c
        src/cairo-pen.c
        src/cairo-png.c
        src/cairo-polygon.c
        src/cairo-polygon-intersect.c
        src/cairo-polygon-reduce.c
        src/cairo-ps-surface.c
        src/cairo-raster-source-pattern.c
        src/cairo-recording-surface.c
        src/cairo-rectangle.c
        src/cairo-rectangular-scan-converter.c
        src/cairo-region.c
        src/cairo-rtree.c
        src/cairo-scaled-font.c
        src/cairo-scaled-font-subsets.c
        src/cairo-script-surface.c
        src/cairo-shape-mask-compositor.c
        src/cairo-slope.c
        src/cairo-spans.c
        src/cairo-spans-compositor.c
        src/cairo-spline.c
        src/cairo-stroke-dash.c
        src/cairo-stroke-style.c
        src/cairo-surface.c
        src/cairo-surface-clipper.c
        src/cairo-surface-fallback.c
        src/cairo-surface-observer.c
        src/cairo-surface-offset.c
        src/cairo-surface-snapshot.c
        src/cairo-surface-subsurface.c
        src/cairo-surface-wrapper.c
        src/cairo-svg-surface.c
        src/cairo-tag-attributes.c
        src/cairo-tag-stack.c
        src/cairo-tee-surface.c
        src/cairo-time.c
        src/cairo-tor22-scan-converter.c
        src/cairo-tor-scan-converter.c
        src/cairo-toy-font-face.c
        src/cairo-traps.c
        src/cairo-traps-compositor.c
        src/cairo-tristrip.c
        src/cairo-truetype-subset.c
        src/cairo-type1-fallback.c
        src/cairo-type1-glyph-names.c
        src/cairo-type1-subset.c
        src/cairo-type3-glyph-surface.c
        src/cairo-unicode.c
        src/cairo-uninstalled.pc.in
        src/cairo-user-font.c
        src/cairo-version.c
        src/cairo-wideint.c
        src/cairo-xml-surface.c
)


list(APPEND library_references
        pixman
        png
        freetype
zlib
)

add_library(${PROJECT_NAME}
  SHARED ${library_source}
)


target_compile_definitions(${PROJECT_NAME} PRIVATE HAVE_CONFIG_H)

if(MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE /wd5286)
  target_link_libraries(${PROJECT_NAME} PRIVATE ${library_references} 	Msimg32)

  set_target_properties(${PROJECT_NAME} PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS ON )
    target_compile_options(${PROJECT_NAME} PRIVATE "/MD$<$<CONFIG:Debug>:d>")
    target_link_options(${PROJECT_NAME} PRIVATE "/DEFAULTLIB:msvcrt$<$<CONFIG:Debug>:d>")
    target_link_options(${PROJECT_NAME} PRIVATE "/IMPLIB:${LIBRARY_OUTPUT_PATH}/${PROJECT_NAME}.lib")
    #    target_link_options(${PROJECT_NAME} PRIVATE "/DEF:${CMAKE_CURRENT_SOURCE_DIR}/${PROJECT_NAME}.def")


endif()


if(${this_system_libraries})
  target_link_libraries(${PROJECT_NAME} PRIVATE ${this_system_libraries})
endif()

list(APPEND library_include_directories ${CMAKE_CURRENT_SOURCE_DIR}/../../../operating_system/operating_system-${PLATFORM_NAME}/configuration/${PROJECT_NAME})



target_include_directories(${PROJECT_NAME} PRIVATE ${library_include_directories})



