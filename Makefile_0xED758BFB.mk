# ==============================================================================
# Generated by qmake (2.01a) (Qt 4.6.2) on: Fri Dec 24 09:15:17 2010
# This file is generated by qmake and should not be modified by the
# user.
#  Name        : Makefile_0xED758BFB.mk
#  Part of     : MusicsStreaming
#  Description : This file is used to call necessary targets on wrapper makefile
#                during normal Symbian build process.
#  Version     : 
#
# ==============================================================================



MAKE = make

VISUAL_CFG = RELEASE
ifeq "$(CFG)" "UDEB"
VISUAL_CFG = DEBUG
endif

do_nothing :
	@rem do_nothing

MAKMAKE: create_temps pre_targetdeps store_build

LIB: create_temps pre_targetdeps store_build

BLD: create_temps pre_targetdeps store_build

ifeq "$(PLATFORM)" "WINSCW"
CLEAN: extension_clean winscw_deployment_clean
else
CLEAN: extension_clean
endif

CLEANLIB: do_nothing

RESOURCE: do_nothing

FREEZE: do_nothing

SAVESPACE: do_nothing

RELEASABLES: do_nothing

ifeq "$(PLATFORM)" "WINSCW"
FINAL: finalize winscw_deployment
else
FINAL: finalize
endif

pre_targetdeps : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" pre_targetdeps QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)

create_temps : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" create_temps QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)

extension_clean : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" extension_clean QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)

finalize : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" finalize QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)

winscw_deployment_clean : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" winscw_deployment_clean QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)

winscw_deployment : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" winscw_deployment QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)

store_build : c:\QtMobility\examples\MusicsStreaming\Makefile
	-$(MAKE) -f "c:\QtMobility\examples\MusicsStreaming\Makefile" store_build QT_SIS_TARGET=$(VISUAL_CFG)-$(PLATFORM)


