#include "car.h"

void car_init(struct car* c, 
              const char* brand,
              const char* model, 
              const char* color, 
              unsigned int year_of_launch, 
              enum car_transmission transmission) 
{
    strcpy(c->brand, brand);
    strcpy(c->model, model);
    strcpy(c->color, color);
    c->year_of_launch = year_of_launch;
    c->transmission = transmission;
}

void car_clear(struct car* c) 
{
    memset(c->brand, 0, sizeof(c->brand));
    memset(c->model, 0, sizeof(c->model));
    memset(c->color, 0, sizeof(c->color));
    c->year_of_launch = 0;
    c->transmission = MANUELL;
}

struct car* car_new(const char* brand,
    const char* model,
    const char* color,
    unsigned int year_of_launch,
    enum car_transmission transmission)
{
    struct car* c = malloc(sizeof(struct car));
    if (c == NULL)
    {
        // Allocation failed
        return NULL;
    }
}

void car_print(const struct car* c, FILE* stream)
{
    fprintf(stream, "Brand: %s\n", c->brand);
    fprintf(stream, "Model: %s\n", c->model);
    fprintf(stream, "Color: %s\n", c->color);
    fprintf(stream, "Year of launch: %u\n", c->year_of_launch);
    fprintf(stream, "Transmission: %s\n", (c->transmission == MANUELL) ? "MANUELL" : "AUTOMAT");
}

void car_change_color(struct car* c, const char* color) 
{
    strcpy(c->color, color);
}

void car_change_transmission(struct car* c)
{
    if (c->transmission == MANUELL) {
        c->transmission = AUTOMAT;
    }
    else if (c->transmission == AUTOMAT)
    {
        c->transmission = MANUELL;
    }
}
