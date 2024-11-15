# slock version
VERSION = 1.5

# Customize below to fit your system

# paths
PREFIX = /usr/local
MANPREFIX = ${PREFIX}/share/man

X11INC = /usr/X11R6/include
X11LIB = /usr/X11R6/lib

# Xinerama, comment if you don't want it
XINERAMALIBS = -lXinerama
XINERAMAFLAGS = -DXINERAMA

# freetype
FREETYPELIBS = -lXft
FREETYPEINC = /usr/include/freetype2


# includes and libs
INCS = -I. -I/usr/include -I${X11INC} -I${FREETYPEINC}
LIBS = -L/usr/lib -lc -lcrypt -L${X11LIB} -lX11 -lImlib2 ${XINERAMALIBS} ${FREETYPELIBS} -lXext -lXrandr -lpam
 

# flags
CPPFLAGS = -DVERSION=\"${VERSION}\" -D_DEFAULT_SOURCE -DHAVE_SHADOW_H ${XINERAMAFLAGS}
CFLAGS = -std=c99 -pedantic -Wall -Ofast ${INCS} ${CPPFLAGS}

LDFLAGS = -s ${LIBS}
COMPATSRC = explicit_bzero.c
