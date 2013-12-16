#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <err.h>

#define CDROM_DRIVE_STATUS	0x5326
#define CDS_TRAY_OPEN		2

int main(int argc, char *argv[])
{
	if (argc < 2) {
		fprintf(stderr, "usage: %s <device name>\n",
			argv[0], argv[1]);
		exit(EXIT_FAILURE);
	}

	int fd;
	fd = open(argv[1], O_RDWR|O_NONBLOCK);
	if (fd == -1)
		err(EXIT_FAILURE, "open() failed.");

	int ret;
	ret = ioctl(fd, CDROM_DRIVE_STATUS);
	return (ret == CDS_TRAY_OPEN) ? 0 : 1;
}
