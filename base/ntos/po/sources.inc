MAJORCOMP=ntos
MINORCOMP=po

TARGETNAME=po
TARGETTYPE=LIBRARY
TARGETPATH=obj

BUILD_PRODUCES=ntospo$(NT_UP)

INCLUDES=..\..\inc

MSC_WARNING_LEVEL=/W4 /WX

C_DEFINES=$(C_DEFINES) -D_NTSYSTEM_

SOURCES=..\poinit.c     \
        ..\podata.c     \
        ..\postate.c    \
        ..\idle.c       \
        ..\misc.c       \
        ..\suspend.c


NTTEST=

SOURCES_USED=..\sources.inc
