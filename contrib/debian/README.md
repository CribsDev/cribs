
Debian
====================
This directory contains files used to package cribsd/cribs-qt
for Debian-based Linux systems. If you compile cribsd/cribs-qt yourself, there are some useful files here.

## cribs: URI support ##


cribs-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install cribs-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your cribs-qt binary to `/usr/bin`
and the `../../share/pixmaps/cribs128.png` to `/usr/share/pixmaps`

cribs-qt.protocol (KDE)

