#include <stdio.h>
#include <stdbool.h>

int main() {
    int temp[5];
    bool cooler = true;
    bool warmer = true;
    bool mixed = false;
    int sum = 0;

    printf("Enter five daily Fahrenheit temperatures:\n");

    for (int i = 0; i < 5; i++) {
      int t;
      do {
         printf("Temperature %d: ", i + 1);
         scanf("%d", &t);
         if (t < -30 || t > 130) {
            printf("Temperature %d is invalid. Please enter a valid temperature between -30 and 130\n", t);
}
  } 
    while (t < -30 || t > 130);
        temp[i] = t;
        sum += t;

    if (i > 0) {
         if (temp[i] < temp[i - 1]) {
         warmer = false;
} 
    else if (temp[i] > temp[i - 1]) {
                cooler = false;
      
}
   }
     }

    if (!cooler && !warmer) {
        mixed = true;
}

    char* messages[] = {
        "Getting cooler",
        "Getting warmer",
        "It's a mixed bag"
      };

    if (cooler) {
        printf("%s\n", messages[0]);
    } else if (warmer) {
        printf("%s\n", messages[1]);
    } else if (mixed) {
        printf("%s\n", messages[2]);
    }

    printf("5-day temperature [");
    for (int i = 0; i < 5; i++) {
        printf("%d ", temp[i]);
    }
    printf("]\n");

    double average = (double)sum / 5;
    printf("Average temperature is %.1f degrees\n", average);

    return 0;
}