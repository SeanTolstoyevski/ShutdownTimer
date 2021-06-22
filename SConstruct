
baseEnv = None

baseEnv = Environment(tools=["mingw"],
	LIBPATH=["lib"],
	LIBS=["wxmsw31u", "wxscintilla", "wxtiff", "wxjpeg", "wxpng", "wxzlib", "wxregexu", "wxexpat", "kernel32", "user32", "gdi32", "comdlg32", "winspool", "winmm", "shell32", "shlwapi", "comctl32", "ole32", "oleaut32", "uuid", "rpcrt4", "advapi32", "version", "ws2_32", "wininet", "oleacc", "uxtheme"],
	LINKFLAGS=["-mwindows", "-flto", "-mthreads", "-static-libgcc", "-static-libstdc++", "-Wl,-Bstatic", "-lstdc++", "-lpthread", "-Wl,-Bdynamic", "-Wl,--subsystem,windows"],
	CXXFLAGS=["-O0", "-mthreads", "-D__WXMSW__", "-DNDEBUG", "-D_UNICODE", "-Ilib\gcc_lib\mswu", "-Iinclude", "-flto", "-mwindows"],
	RCFLAGS=["--define",  "__WXMSW__", "--define", "NDEBUG", "--define", "_UNICODE", "--include-dir", "lib/gcc_lib/mswu", "--include-dir", "include", "--include-dir", ".", "--define", "wxUSE_DPI_AWARE_MANIFEST=2", "--define", "NOPCH"])

baseEnv['LINKCOM'] = "$LINK -o $TARGET $SOURCES $LINKFLAGS $__RPATH $_LIBDIRFLAGS $_LIBFLAGS"

baseEnv.Program("ShutdownTimer",
	["ShutdownTimer.cpp", baseEnv.RES("st.rc")])
