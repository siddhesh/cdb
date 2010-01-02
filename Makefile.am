bin_PROGRAMS		= cdbget cdbmake cdbdump cdbstats cdbtest cdbmake-sv cdbmake-12
lib_LTLIBRARIES		= libcdb.la

cdbget_SOURCES		= cdbget.c
cdbget_LDADD		= libcdb.la

cdbmake_SOURCES		= cdbmake.c
cdbmake_LDADD		= libcdb.la

cdbdump_SOURCES		= cdbdump.c
cdbdump_LDADD		= libcdb.la

cdbtest_SOURCES		= cdbtest.c
cdbtest_LDADD		= libcdb.la

cdbstats_SOURCES	= cdbstats.c
cdbstats_LDADD		= libcdb.la

libcdb_la_SOURCES	= cdb.c cdb_hash.c cdb_make.c \
			alloc.c \
			strerr_sys.c buffer.c buffer_put.c buffer_2.c strerr_die.c \
			buffer_get.c buffer_copy.c buffer_1.c buffer_0.c buffer_1s.c \
			byte_copy.c byte_cr.c str_len.c fmt_ulong.c uint32_unpack.c \
			byte_diff.c uint32_pack.c scan_ulong.c \
			error.c open_read.c open_trunc.c error_str.c seek_set.c \
			seek_cur.c

include_HEADERS		= alloc.h buffer.h byte.h cdb.h cdb_make.h error.h \
			  exit.h fmt.h open.h scan.h seek.h strerr.h str.h uint32.h

noinst_HEADERS		= auto_home.h readwrite.h

cdbmake-sv: cdbmake-sv.sh
	cat warn-auto.sh cdbmake-sv.sh \
	| sed s}HOME}"${prefix}"}g \
	> cdbmake-sv
	chmod 755 cdbmake-sv

cdbmake-12: cdbmake-12.sh
	cat warn-auto.sh cdbmake-12.sh \
	| sed s}HOME}"${prefix}"}g \
	> cdbmake-12
	chmod 755 cdbmake-12

datarootdir = @datarootdir@

