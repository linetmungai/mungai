#include <stdio.h>
#include <stdlib.h>

int main()
{
    char unit;
    printf("whats the unit of your temperature:");
    scanf("%s",&unit);

    float temperature;
    printf("enter your temperature:");
    scanf("%f",&temperature);
    printf("conversion from farenheit to celcius\n");
    while(temperature<100)
    {
    float value;
    value = (temperature *5/9)+32;
    printf("%.2f degrees in Farenheit = %.2f degrees in celcius\n",temperature , value);
    temperature= temperature+10;
    }
    return 0;
}
