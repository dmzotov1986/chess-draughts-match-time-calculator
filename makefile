run:build
	./match_calc
build:main.c
	$(CC) main.c -omatch_calc
main.c:settings.h
settings.h:mess_en.h