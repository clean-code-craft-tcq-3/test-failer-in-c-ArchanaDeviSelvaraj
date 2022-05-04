void FarenheitToCelsius(float farenheit) 
{
    celcius = (farenheit - 32) * 5 / 9;
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
 }

void AlertFarenheitToCelcius(float farenheit) 
{
        celcius = FarenheitToCelsius (celcius);
        printf("ALERT: Temperature is %.1f celcius.\n", celcius);
       
        if (returncode != 200) 
        {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 0;
        }
}
