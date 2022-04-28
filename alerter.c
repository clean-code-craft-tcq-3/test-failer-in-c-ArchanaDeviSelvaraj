#include <stdio.h>
#include <assert.h>
#include "FarenheitToCelcius.h"

int alertFailureCount = 0;
enum environments{Test,Integration}environment;

    void CheckalertFailureCount(float farenheit)
    {
        celcius = FarenheitToCelcius(farenheit);
        if (environment == Test)
        {
            returncode = stub(celcius);
        }
        else
        {
            //Integration environment
            returncode = network(celcius);
        }
        if (returncode != 200) 
        {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
        }
    }

int main() {
    environment=Test;
    CheckalertFailureCount(400.5);
    environment=Integration;
    CheckalertFailureCount(303.6);
    CheckalertFailureCount(20);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount == 1);
    printf("All is well (maybe!)\n");
    return 0;
}
