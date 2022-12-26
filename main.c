#include "car.h"

int main(void)
{
	struct car car1 = { "Volvo", "V70", "Black", 1995, "Manuell" };
	struct car car2;
	struct car car3;



	struct car* cars[] = { &car1, &car2, &car3 };

	return 0;
}
