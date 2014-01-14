#!/bin/sh

arg=""
delete=""
exe=./bin/executable

if [ "$1" = "-d" ]; then
		if [ ! -e debugcomp ]; then
				make debug
				echo ""
		fi
		
		sudo gdb ${exe}.debug
else
		if [ ! -e complete ]; then
				make exe
				echo ""
		fi

		if [ "${arg}" = "" ]; then
				${exe}
		else
				${exe} ${arg}
		fi
fi

if [ "${delete}" != "" ]; then
		rm -f ${delete}
fi

exit 0
