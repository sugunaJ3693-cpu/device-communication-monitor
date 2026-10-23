#include <string.h>
#include "monitor.h"

int validate_message(const char *message)
{
    if (message == NULL)
    {
        return 0;
    }

    return strcmp(message, "PING") == 0;
}
