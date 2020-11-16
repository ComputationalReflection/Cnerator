CFLAGS= /Zi /Od /DDEBUG /Fa /WX /Wall

all: main.exe

asm: main.c.asm

main.c.asm: main.exe
	$(MAKEDIR)\..\..\..\..\activate_env_64 && cd $(MAKEDIR) && python ..\..\..\..\tools\weave_c_in_asm.py -I $(@:.c.asm=.asm) -O $@

main.exe: main.obj
	$(CC) $(CFLAGS) $** -Fe$@

main.obj: main.c
	$(CC) $(CFLAGS) -c $** -Fo$@

main.c: main.c.ttpl
	$(MAKEDIR)\..\..\..\..\activate_env_64 && cd $(MAKEDIR) && python ..\..\..\..\tools\templite.py -i $** -o $@
	comment_lines.bat

clean:
	@del *.pdb
	@del *.obj
	@del *.ilk
	@del *.exe
	@del *.asm
	@del *.log
	@del *.c.original
	@del *.c.commented

distclean: clean
	@del *.c