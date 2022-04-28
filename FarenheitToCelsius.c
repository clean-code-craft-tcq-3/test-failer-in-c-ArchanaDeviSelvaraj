int FarenheitToCelsius(float farenheit) 
{
    float celcius = (farenheit - 32) * 5 / 9;
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

