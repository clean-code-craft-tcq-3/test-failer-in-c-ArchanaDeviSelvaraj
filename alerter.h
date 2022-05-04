int AlertFarenheitToCelcius(float farenheit,int alertFailureCount,int (*network)(float)) 
{
         float celcius = (farenheit - 32) * 5 / 9;
         int returnCode = network(celcius);
         if (returnCode != 200) {
                // non-ok response is not an error! Issues happen in life!
                // let us keep a count of failures to report
                // However, this code doesn't count failures!
                // Add a test below to catch this bug. Alter the stub above, if needed.
                alertFailureCount += 1;
                }
         return alertFailureCount;
}

int networkAlertStub(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    return 200;
}

int networkAlertInterface(float celcius) {
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
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
}


