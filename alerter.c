#include <stdio.h>
#include <assert.h>
#include "alerter.h"

int alertFailureCount = 0;
float farenheit;
float celcius;

int main() {
    
    alertFailureCount = AlertFarenheitToCelcius(400.5,alertFailureCount,networkAlertInterface);
    alertFailureCount = AlertFarenheitToCelcius(303.6,alertFailureCount,networkAlertStub);
    alertFailureCount = AlertFarenheitToCelcius(20,alertFailureCount,networkAlertInterface);
     assert(alertFailureCount == 1 );
    alertFailureCount = AlertFarenheitToCelcius(10,alertFailureCount,networkAlertStub);
    printf("%d alerts failed.\n", alertFailureCount);
    assert(alertFailureCount == 2);
    printf("All is well (maybe!)\n");
    return 0;
}
