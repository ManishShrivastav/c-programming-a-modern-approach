/*
In the dweight.c program (Section 2.4), which spaces are essential?

int main(void)
{
    int height, length, width, volume, weight;
    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);
    return 0;
}

spaces are essential in the following places:
1. space  between int and main in the function declaration (e.g., "int main(void)").
2. Between the data type and variable names in the declaration of variables (e.g., "int height, length, width, volume, weight;").
3. Around the assignment operator (=) when assigning values to variables (e.g., "height = 8;").
4. Around the arithmetic operators (* and +) in the calculation of volume and weight 
    e.g., "volume = height * length * width;" and "weight = (volume + 165) / 166;").
5. After commas in the printf function to separate arguments 
    (e.g., "printf("Dimensions: %dx%dx%d\n", length, width, height);").
    
Essential spaces
    Between keywords/types and identifiers
    int main
    int height

    Between return and its value
        return 0

Nonessential spaces
    Around operators
    After commas
    Around parentheses
    Before semicolons

These nonessential spaces are mainly used to improve readability.

*/

#include<stdio.h>
int main(void){int height,length,width,volume,weight;height=8;;length=12;width=10;
volume=height*length*width;weight=(volume+165)/166;printf("Dimensions: %dx%dx%d\n",length,width,height);
printf("Volume (cubic inches): %d\n",volume);printf("Dimensional weight (pounds): %d\n",weight);return 0;
}

