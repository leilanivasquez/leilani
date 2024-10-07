/*Leilani Vasquez- 00292291
Question 7 from the Final*/
#include <stdio.h>

void analyzeTemperatures(float temperatures[], int numReadings, float *minTemp, float *maxTemp);

int main()
{
    float temperatureReadings[50] = {22.5, 25.0, 20.8, 24.3};

    int numReadings = 4;

    // variables to store min and max temps
    float minTemperature, maxTemperature;

    analyzeTemperatures(temperatureReadings, numReadings, &minTemperature, &maxTemperature);

    printf("Minimum Temp: %.2f\n", minTemperature);
    printf("Maximum Temp: %.2f\n", maxTemperature);

    return 0;
}

//analyze temperatures and update min and max temps
void analyzeTemperatures(float temperatures[], int numReadings, float *minTemp, float *maxTemp)
{
    // check if readings are vaild
    if (numReadings > 0)
    {
        // min and max with the first temps
        *minTemp = temperatures[0];
        *maxTemp = temperatures[0];

        // go through the array to find min max temps
        for (int i = 1; i < numReadings; ++i)
        {
            if (temperatures[i] < *minTemp)
            {
                *minTemp = temperatures[i];
            }
            if (temperatures[i] > *maxTemp)
            {
                *maxTemp = temperatures[i];
            }
        }
    }
    else
    {
        // no readings = set min and max to 0
        *minTemp = 0.0;
        *maxTemp = 0.0;
    }
}
