optical-drive-panic
===================

Fancy and thrilling game to save your system from panic

* USGAE

1. go to the top directory

---------------------------------------------------
$ cd optical-drive-panic
---------------------------------------------------

2. build the helper program

---------------------------------------------------
$ make
---------------------------------------------------

3. run this program as root

---------------------------------------------------
$ su
# ./optical-drive-panic <optical devices>
---------------------------------------------------

For example, if you have three optical devices, /dev/cdrom0,
/dev/cdrom1, and /dev/cdrom3, please run this program as follows.

------------------------------------------------------------
# ./optical-drive-panic /dev/cdrom0 /dev/cdrom1 /dev/cdrom2
------------------------------------------------------------

If you doesn't specify any argument, the default value
/dev/cdrom is specified.
