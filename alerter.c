#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int alertFailureCount = 0;
enum environments{Test,Integration}environment;

    void AlertFarenheitToCelcius(float farenheit) 
    {
        celcius = (farenheit - 32) * 5 / 9;
        printf("ALERT: Temperature is %.1f celcius.\n", celcius);
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
    AlertFarenheitToCelcius(400.5);
    environment=Integration;
    AlertFarenheitToCelcius(303.6);
    AlertFarenheitToCelcius(20);
    printf("%d alerts failed.\n", alertFailureCount);
    //assert(alertFailureCount == 1);
    printf("All is well (maybe!)\n");
    return 0;
}
