//
//  main.c
//  Degrees
//
//  Created by Cordavi on 1/3/16.
//  Copyright © 2016 Cordavi. All rights reserved.
//

#include <stdio.h>

//Declar a static variable
static float lastTemperature = 50.0;

float fahrenheitFromCelsius (float cel) {
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit. \n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return 0;
}
