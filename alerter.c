#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int alertFailureCount = 0;
float farenheit;
float celcius;

int main() {
    
    AlertFarenheitToCelcius(400.5,alertFailureCount,networkAlertInterface);
    AlertFarenheitToCelcius(303.6,alertFailureCount,networkAlertStub);
    AlertFarenheitToCelcius(20,alertFailureCount,networkAlertInterface);
    AlertFarenheitToCelcius(10,alertFailureCount,networkAlertStub);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount == 1);
    printf("All is well (maybe!)\n");
    return 0;
}
