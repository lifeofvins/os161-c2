def dbos161
	dir ../../os161/os161-base-2.0.3/kern/compile/DUMBVM
	target remote unix:.sockets/gdb
end

def dbos161t
	dir ../../os161/os161-base-2.0.3/kern/compile/THREADS
	target remote unix:.sockets/gdb
end

dbos161t
