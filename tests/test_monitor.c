#include <stdio.h>
#include "monitor.h"

int main(void)
{
    int passed = 0;
    int failed = 0;

    printf("=== Monitor Unit Tests ===\n");

    if (validate_message("PING") == 1)
    {
        printf("PASS: Valid message\n");
        passed++;
    }
    else
    {
        printf("FAIL: Valid message\n");
        failed++;
    }

    if (validate_message("HELLO") == 0)
    {
        printf("PASS: Invalid message\n");
        passed++;
    }
    else
    {
        printf("FAIL: Invalid message\n");
        failed++;
    }

    if (validate_message(NULL) == 0)
    {
        printf("PASS: NULL message\n");
        passed++;
    }
    else
    {
        printf("FAIL: NULL message\n");
        failed++;
    }

    printf("\nTests passed: %d\n", passed);
    printf("Tests failed: %d\n", failed);

    return failed == 0 ? 0 : 1;
}
