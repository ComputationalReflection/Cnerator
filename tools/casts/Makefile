# CFLAGS= -Zi -Od -WX -Wall
CFLAGS= -Zi -Od -I..


SOURCES_CASTS = casts.c
OBJECTS_CASTS = $(SOURCES_CASTS:.c=.obj)
TARGET_CASTS = casts.exe


all: $(TARGET_CASTS)

$(TARGET_CASTS): $(OBJECTS_CASTS)
    @$(CC) $(CFLAGS) $** -Fe$@

.c.obj:
    @$(CC) $(CFLAGS) -c $< -Fo$*.obj

clean:
    @del *.pdb
    @del *.ilk
    @del $(OBJECTS_CASTS) $(TARGET_CASTS)