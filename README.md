M3D
=======

M3D is a finite element pre/post processor for NASTRAN/MYSTRAN  (www.m3dfea.com)


---

[Build Instructions](#Build-Instructions) |
[Introduction](#Introduction) |
[Features](#Features) |
[Feature Requests](#Feature-Requests) |
[Get EXE](#Get-EXE) |
[Tutorials](#Tutorials) |
[Modifications](#Modifications) |
[Developmental Goals](#Developmental-Goals) |
[Community](#community)

---

# Build Instructions

See [BUILD.md](BUILD.md) for Windows build (compiling) instructions.

# Introduction

M3D Overview:
 - Can be compiled with Visual Studio Community. Originally started this in C++4 many years ago, before vector classes were added. Uses MFC with ginle document interface.
 - Written with no add-ins or external modules so it can be deployed with no problems. The original author would like it to stay this way. 
 - Used in many commercial aerospace projects and this has driven the development.
 - Most of the structures are shell and beam models built by hand and with abstracted geometry.


# Features

- Driven mainly from the command line with keywords invoking procedures.
- The menus and icons simply pass the command keyword to the command line.
- Each function like "NDCR" node create has a menu class handler which goes into the a command stack to be implemented.
- All menu classes begin with a z. Find the menu class for a particular command and you can trace it back through the code to see how it works.
- The main class that embodies everything is the dBASE class. This holds all the objects, the next important object is the mesh object which  can hold every thing to do with a fem.
- The dBASE object can have many fem objects, you activate the current mesh to work on it or merge them. The base object also holds the geometry.

# Feature Requests

See [REQUESTS.md](REQUESTS.md) for Feature Requests.


# Get EXE

The EXE provided here (TBD) is a build based on this open-source repository. The EXE provided at http://www.m3dfea.com is not necessarily the exact same version.

# Tutorials

See www.m3dfea.com for tutorials and some videos are on youtube.
Also, see the following link https://www.mystran.com/forums/showthread.php?tid=113

# Modifications

> [!CAUTION]
> All modifications must be done inside the Microsoft Visual Studio editor. Failing to do so will most likely cause **very** annoying compilation errors.

Optional modificaitons are discussed in [MODIFICATIONS.md](MODIFICATIONS.md) 

# Developmental Goals

- Improve import capability
- Implement a quad paver mesher (currently there is only a tri paver mesher)
- Improve user frienliness

# Community

- [Join our Forums](https://mystran.com/forums)
- [Join our Discord Channel](https://discord.gg/9k76SkHpHM)
