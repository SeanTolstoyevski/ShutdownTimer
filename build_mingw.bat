@echo off

windres st.rc -oobj\st_rc.o    --define __WXMSW__   --define NDEBUG    --define _UNICODE --include-dir lib\gcc_lib\mswu --include-dir include  --include-dir .  --define wxUSE_DPI_AWARE_MANIFEST=2 --define NOPCH

g++ -c -o obj\ShutdownTimer.o  -O0 -mthreads -D__WXMSW__   -DNDEBUG -D_UNICODE -Ilib\gcc_lib\mswu -Iinclude  -MD -MP -flto ShutdownTimer.cpp
g++ -o obj\ShutdownTimer.exe  obj/ShutdownTimer.o obj/st_rc.o -DNDEBUG  -flto -O0 -mthreads -Llib -static-libgcc -static-libstdc++ -Wl,-Bstatic -lstdc++ -lpthread -Wl,-Bdynamic -Wl,--subsystem,windows -mwindows        -lwxmsw31u -lwxscintilla -lwxtiff -lwxjpeg -lwxpng   -lwxzlib -lwxregexu -lwxexpat   -lkernel32 -luser32 -lgdi32 -lcomdlg32 -lwinspool -lwinmm -lshell32 -lshlwapi -lcomctl32 -lole32 -loleaut32 -luuid -lrpcrt4 -ladvapi32 -lversion -lws2_32 -lwininet -loleacc -luxtheme

