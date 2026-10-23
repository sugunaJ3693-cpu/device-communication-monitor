#include <stdio.h>
#include "monitor.h"

int main(void)
{
    const char *messages[] = {
        "PING",
        "HELLO",
        "PING",
        "ERROR",
        "PING"
    };

    int total_messages = 5;
    int valid_count = 0;
    int error_count = 0;

    printf("=== Device Communication Monitor ===\n\n");

    for (int i = 0; i < total_messages; i++)
    {
        printf("Received: %s\n", messages[i]);

        if (validate_message(messages[i]))
        {
            printf("Status: VALID\n");
            valid_count++;
        }
        else
        {
            printf("Status: INVALID\n");
            error_count++;
        }
    }

    printf("\n=== Communication Summary ===\n");
    printf("Total Messages : %d\n", total_messages);
    printf("Valid Messages : %d\n", valid_count);
    printf("Error Count    : %d\n", error_count);

    printf("\n=== Device Health ===\n");

    if (error_count == 0)
        printf("Device Status: NORMAL\n");
    else if (error_count <= 2)
        printf("Device Status: WARNING\n");
    else
        printf("Device Status: CRITICAL\n");

    return 0;
}
