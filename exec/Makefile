# Makefile for CS 360 example code

CXX=	g++ -g
OBJS=	exec.o
LIBS=

CCFLAGS= -g

all:	exec

exec:	$(OBJS)
	$(CXX) -o exec $(OBJS) $(LIBS)

clean:
	rm -f $(OBJS) $(OBJS:.o=.dd)

realclean:
	rm -f $(OBJS) $(OBJS:.o=.dd) exec


# These lines ensure that dependencies are handled automatically.
%.dd:	%.cc
	$(SHELL) -ec '$(CC) -M $(CPPFLAGS) $< \
		| sed '\''s/\($*\)\.o[ :]*/\1.o $@ : /g'\'' > $@; \
		[ -s $@ ] || rm -f $@'

include	$(OBJS:.o=.dd)
