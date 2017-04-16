#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

int arg_to_int(char *arg, char *ints, int len) {
	char *sc = ints;
	sprintf(sc, "%c", 0);
	for (int i=0; i<len; i++) {
		if (isdigit(arg[i])) {
			sprintf(sc, "%s%c", sc, arg[i]);
		};
	};
	return atoi(sc);
}


int main(int argc, char *argv[]) {
	char *size;
	char exit_code = 0;
	time_t unix_time = time(NULL);
	if (argc>1) {
		if (argv[2]) {
			size = malloc(strlen(argv[2])+1);
			unix_time = arg_to_int(argv[2], size, strlen(argv[2]));
		};
		if (argv[1]) {
			struct tm estructura;
			long unsigned int buf = strlen(argv[1])*15;
			char res[buf];
			localtime_r(&unix_time, &estructura);
			if (strftime(res, sizeof(res), argv[1], &estructura)) {
				printf("%s\n", res);
			} else {
				fprintf(stderr, "\033[1;31m%s\033[0m: wrong format in first argument.\n", "Error");
				exit_code = 1;
			}
		}
	} else {
		printf("%i\n", unix_time);
	}
	free(size);
	exit(exit_code);
}
