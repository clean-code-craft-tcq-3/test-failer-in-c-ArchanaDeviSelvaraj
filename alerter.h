float FarenheitToCelcius(float);
void CheckalertFailureCount(float);
int stub(float);
int network(float);
float farenheit;
float celcius;
int returncode;
int stub(float celcius)
{
    // Return 200 for ok
    // Return 500 for not-ok
    if(celcius > 0)
    {
        return 200;
    }
    else
    {
        return 500;
    }
}
int network(float celcius)
{
    // Return 200 for ok
    // Return 500 for not-ok
    if(celcius > 0)
    {
        return 200;
    }
    else
    {
        return 500;
    }
}
float FarenheitToCelcius(float farenheit) 
{
    celcius = (farenheit - 32) * 5 / 9;
    printf("ALERT: Temperature is %.1f celcius.\n", celcius);
    return celcius;
 }
