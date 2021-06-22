# Fake BAT to EXE compiler warning
This is a joke program I decided to put together after watching [this Enderman video](https://youtu.be/wN1yxjJJU5g?t=113). I decided to make a fake BAT to EXE compiler popup just for fun.

## How do I use it?
You should have `g++` installed as part of MinGW. If you don't have MinGW, [go install it](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/)!

Once that's done, run `build.bat` (wow, a batch file, how ironic)

`fce.exe` will now be available. You can rename this to whatever you want.

## Editable parts
The header file `main.hpp` allows you to change certain text strings.
### Batch script
```c++
static const char* BatchString =
    "echo Hello, World!\n"
    "pause";
```
Change the actual string after the `=`, and make sure you leave a `\n` at the end of your string, otherwise it'll act as if it's all on one line.

If the batch script you're using contains `@echo off`, remove it -- not only is it unnecessary here, it can result in the file not running at all.
### Registration key
```c++
static const char* CorrectKey =
    "FUX42-BUTIS-WELC0-METOW-IND0W";
```
This can be anything, it doesn't have to follow the `XXXXX-XXXXX-XXXXX-XXXXX-XXXXX` guideline.