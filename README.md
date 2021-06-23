# ShutdownTimer - Shutdown timer for Windows

Welcome to ShutdownTimer's repository.

This minimal app is simple power timer for your Windows computers.

Compiled using MinGW with wxWidgets.

## How can I compile and develop?

Dependencies:

* A compiler compatible with wxWidgets
* Python, Scons

1. Clone the project: `git clone https://github.com/SeanTolstoyevski/ShutdownTimer`
2. Compile wxWidgets as `MONOLITHIC=1`.
3. Copy lib and include folders of wxWidgets to the root directory of cloned this repo.
4. Run `scons` after making changes.

