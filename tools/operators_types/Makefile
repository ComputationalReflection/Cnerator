CFLAGS= -Zi -Od -WX -Wall -I..


SOURCES_OPERATORS_TYPES = operators_types.c
OBJECTS_OPERATORS_TYPES = $(SOURCES_OPERATORS_TYPES:.c=.obj)
TARGET_OPERATORS_TYPES = operators_types.exe


all: $(TARGET_OPERATORS_TYPES)

$(TARGET_OPERATORS_TYPES): $(OBJECTS_OPERATORS_TYPES)
    @$(CC) $(CFLAGS) $** -Fe$@

.c.obj:
    @$(CC) $(CFLAGS) -c $< -Fo$*.obj

clean:
    @del *.pdb
    @del *.ilk
    @del $(OBJECTS_OPERATORS_TYPES) $(TARGET_OPERATORS_TYPES)
