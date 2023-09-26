#################################
# Created on Sun Sep 24 2023
# Copyright (c) 2023 UsuiSama
#################################
CC = g++
CXXFLAGS = -fdiagnostics-color=always

APPNAME = usui-calc
SRCDIR = src/
INCLDIR = include

DEBUGDIR = debug/$(APPNAME)
EXT = .cxx
OUTPUT = $(DEBUGDIR)

FILES = $(wildcard $(SRCDIR)*$(EXT))

$(APPNAME):
	@echo [build] $(APPNAME)
	$(CC) $(CXXFLAGS) $(FILES) -I $(INCLDIR) -o $(OUTPUT)