#include "car.h"

int main(void)
{

	struct car car1 = { "Volvo", "V70", "Black", 1995, MANUAL};
	struct car car2 = { "BMW", "Z3", "Blue", 2001, AUTOMATIC };
	struct car car3 = {"Skoda", "Octavia RS", "White", 2003, MANUAL};

	struct car* cars[] = { &car1, &car2, &car3 };

	car_print(&car1, stdout);
	car_print(&car2, stdout);
	car_print(&car3, stdout);

	car_change_color(&car3,"Green");

	car_change_transmission(&car3);

	car_print(&car3, stdout);

  FILE* fp = fopen("cars.txt", "w");
  if (fp == NULL) {
    perror("Error opening file");
    return 1;
  }

  //Här skrivs innehållet ur cars arrayen ut till filen cars.txt via funktionen car_print
  size_t i;
  for (i = 0; i < 3; i++) {
    car_print(cars[i], fp);
  }

  // Stänger filen cars.txt
  fclose(fp);

  //Skriver ut innehållet i angiven fil rad för rad, i angiven utström. 
  file_read("cars.txt", stdout);

	return 0;
}
