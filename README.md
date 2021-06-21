# ShutdownTimer - Shutdown timer for Windows

Welcome to ShutdownTimer's repository.

This minimal app is simple power timer for your Windows computers.

Compiled using MinGW with wxWidgets.

## How can I compile and develop?

* A compiler compatible with wxWidgets
 * Due to multiplatform, the repo uses MinGW.

1. Clone the project: `git clone https://github.com/SeanTolstoyevski/ShutdownTimer`
2. Compile wxWidgets as `MONOLITHIC=1`.
3. Copy lib and include folders of wxWidgets to the root directory of cloned this repo.
4. Run `build_mingw.bat` after making changes.

