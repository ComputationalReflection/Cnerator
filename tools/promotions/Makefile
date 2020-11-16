CFLAGS= -Zi -Od -WX -Wall
# CFLAGS= -Zi -Od -I..


SOURCES_PROMOTIONS = promotions.c
OBJECTS_PROMOTIONS = $(SOURCES_PROMOTIONS:.c=.obj)
TARGET_PROMOTIONS = promotions.exe


all: $(TARGET_PROMOTIONS)

$(TARGET_PROMOTIONS): $(OBJECTS_PROMOTIONS)
    @$(CC) $(CFLAGS) $** -Fe$@

.c.obj:
    @$(CC) $(CFLAGS) -c $< -Fo$*.obj

clean:
    @del *.pdb
    @del *.ilk
    @del $(OBJECTS_PROMOTIONS) $(TARGET_PROMOTIONS)