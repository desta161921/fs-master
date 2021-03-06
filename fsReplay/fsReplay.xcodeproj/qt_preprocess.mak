#############################################################################
# Makefile for building: fsReplay
# Generated by qmake (2.01a) (Qt 4.8.5) on: Wed Mar 5 15:52:27 2014
# Project:  fsReplay.pro
# Template: app
# Command: /usr/bin/qmake -o fsReplay.xcodeproj/project.pbxproj fsReplay.pro
#############################################################################

MOC       = /Developer/Tools/Qt/moc
UIC       = /Developer/Tools/Qt/uic
LEX       = flex
LEXFLAGS  = 
YACC      = yacc
YACCFLAGS = -d
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB
INCPATH       = -I/usr/local/Qt4.8/mkspecs/macx-xcode -I. -I/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/usr/include/QtCore -I/Library/Frameworks/QtGui.framework/Versions/4/Headers -I/usr/include/QtGui -I/usr/include -I. -I/usr/local/include -I/System/Library/Frameworks/CarbonCore.framework/Headers -F/Library/Frameworks
DEL_FILE  = rm -f
MOVE      = mv -f

IMAGES = 
PARSERS =
preprocess: $(PARSERS) compilers
clean preprocess_clean: parser_clean compiler_clean

parser_clean:
check: first

/Developer/Tools/Qt/moc:
	(cd $(QTDIR)/src/tools/moc && $(MAKE))

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compilers: ./moc_fsView.cpp
compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_fsView.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_fsView.cpp
moc_fsView.cpp: fsModel.h \
		fsView.h \
		/usr/bin/moc-4.8
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ fsView.h -o moc_fsView.cpp

compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_clean: compiler_moc_header_clean 

