/*
 * This file is automatically generated by UnitTestBot. For further information see https://www.utbot.org
 */

#define main main__
#include "../../main.c"
#pragma GCC visibility push (default)
BCoptions initoptions_main_c(BCoptions options) {
return initoptions(options);
}
int usage_main_c(char *name) {
return usage(name);
}
int memerror_main_c() {
return memerror();
}
int parseArgs_main_c(int *argc, char **argv, BCoptions *options) {
return parseArgs(argc, argv, options);
}
int assignFiles_main_c(char *arg, char **infile, char **outfile, struct stat *statbuf, BCoptions *options, char *key) {
return assignFiles(arg, infile, outfile, statbuf, options, key);
}
int main_main_c(int argc, char *argv[]) {
return main(argc, argv);
}
#pragma GCC visibility pop
