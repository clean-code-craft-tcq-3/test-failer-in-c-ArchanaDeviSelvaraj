#include <stdio.h>
#include <assert.h>
#include "FarenheitToCelsius.h"

int alertFailureCount = 0;

    void CheckalertFailureCount(returnCode)
    {
        // Return 200 for ok
        // Return 500 for not-ok
        // stub always succeeds and returns 200
    if(celcius > 0)
    {
        return 200;
    }
    else
    {
        return 500;
    }
        if (returnCode != 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
        }
    }

int main() {
    FarenheitToCelsius(400.5);
    FarenheitToCelsius(303.6);
    FarenheitToCelsius(20);
    CheckalertFailureCount(returnCode);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount == 1);
    printf("All is well (maybe!)\n");
    return 0;
}
