#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("Limits in this system:\n"
                   "CHAR_BIT=%d\n"
                   "CHAR_MAX=%d\n"
                   "CHAR_MIN=%d\n"
                   "SCHAR_MAX=%d\n"
                   "SCHAR_MIN=%d\n"
                   "UCHAR_MAX=%d\n"
                   "SHRT_MAX=%d\n"
                   "SHRT_MIN=%d\n"
                   "USHRT_MAX=%d\n"
                   "INT_MAX=%d\n"
                   "INT_MIN=%d\n"
                   "UINT_MAX=%u\n"
                   "LONG_MAX=%ld\n"
                   "LONG_MIN=%ld\n"
                   "ULONG_MAX=%lu\n"
                   "LLONG_MAX=%lld\n"
                   "LLONG_MIN=%lld\n"
                   "ULLONG_MAX=%llu\n"
                   "LONG_LONG_MAX=%lld\n"
                   "LONG_LONG_MIN=%lld\n"
                   "ULONG_LONG_MAX=%llu\n",
           CHAR_BIT,
           CHAR_MIN,
           CHAR_MIN,
           SCHAR_MIN,
           SCHAR_MIN,
           UCHAR_MAX,
           SHRT_MAX,
           SHRT_MIN,
           USHRT_MAX,
           INT_MAX,
           INT_MIN,
           UINT_MAX,
           LONG_MAX,
           LONG_MIN,
           ULONG_MAX,
           LLONG_MAX,
           LLONG_MIN,
           ULLONG_MAX,
           LONG_LONG_MAX,
           LONG_LONG_MIN,
           ULONG_LONG_MAX
    );
}
