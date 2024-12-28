/* Copyright (c) 2024 by valixxx1
 * License - MIT
*/

#include "colors.h"
#include <getopt.h>
#include <stdbool.h>

int main(int argc, char **argv) {
    const char short_options[] = "hv";
    const struct option long_options[] = {
        {"help", no_argument, NULL, 'h'},
        {"version", no_argument, NULL, 'v'},
        {NULL, 0, NULL, 0}
    };

    int ch;
    while ((ch = getopt_long(argc, argv, short_options, long_options, NULL)) != -1) {
        switch (ch) {
            case 'h':
                puts(
                    "colorcat - colored version of 'cat' command\n"
                    "Usage: colorcat [file] [flags]\n"
                    "Flags:\n"
                    "\t-h, --help: help menu\n"
                    "\t-v, --version: version of colorcat"
                );
                return 0;
            case 'v':
                puts("colorcat versin: indev");
                return 0;
        }
    }
    return 0;
}