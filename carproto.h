#ifndef HEADER_H_
#define HEADER_H_


#include <stdio.h>

enum car_transmission
{
    MANUAL,
    AUTOMATIC
};

struct car
{
    char brand[20];
    char model[20];
    char color[20];
    unsigned int year_of_launch;
    enum car_transmission transmission;
};

void car_init(struct car* self,
              const char* brand,
              const char* model,
              const char* color,
              unsigned int year_of_launch,
              enum car_transmission transmission);

void car_clear(struct car* c);

struct car* car_new(const char* brand,
                    const char* model,
                    const char* color,
                    unsigned int year_of_launch,
                    enum car_transmission transmission);

void car_change_color(struct car* car, const char* color);

void car_change_transmission(struct car* self);

void car_print(const struct car* self, FILE* stream);

void car_delete(struct car* car_ptr);


#endif /* CAR_H_ */
