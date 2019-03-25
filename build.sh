gcc src/main.c -Isrc -ldl -o obj/main; gcc src/caller.c -ldl -Isrc -o obj/caller; gcc src/main.c -g -fPIC -ldl -shared -o obj/libl.so; gcc src/loader.c -ldl -Isrc -o obj/loader;
