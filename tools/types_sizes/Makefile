CFLAGS= -Zi -Od -WX -Wall -I..


SOURCES_TYPES_SIZES = types_sizes.c
OBJECTS_TYPES_SIZES = $(SOURCES_TYPES_SIZES:.c=.obj)
TARGET_TYPES_SIZES = types_sizes.exe

all: $(TARGET_TYPES_SIZES)

$(TARGET_TYPES_SIZES): $(OBJECTS_TYPES_SIZES)
    @$(CC) $(CFLAGS) $** -Fe$@

.c.obj:
    @$(CC) $(CFLAGS) -c $< -Fo$*.obj

clean:
    @del *.pdb
    @del *.ilk
    @del $(OBJECTS_TYPES_SIZES) $(TARGET_TYPES_SIZES)
