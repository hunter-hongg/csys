all:
	cd build && make 
test: 
	cc src/test.c src/csys.c -Iinclude `pkg-config --cflags --libs glib-2.0 gobject-2.0` -o target/test && target/test
