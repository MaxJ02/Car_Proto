#include "car.h"

void car_init(struct car* self,
    const char* brand,
    const char* model,
    const char* color,
    unsigned int year_of_launch,
    enum car_transmission transmission)
{
    (self->brand, brand);
    (self->model, model);
    (self->color, color);
    self->year_of_launch = year_of_launch;
    self->transmission = transmission;
}

void car_clear(struct car* c)
{
    memset(c->brand, 0, sizeof(c->brand));
    memset(c->model, 0, sizeof(c->model));
    memset(c->color, 0, sizeof(c->color));
    c->year_of_launch = 0;
    c->transmission = MANUAL;
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


void car_delete(struct car* car_ptr) {
    if (car_ptr == NULL) {
        return;
    }
    free(car_ptr);
}


void car_print(const struct car* self, FILE* stream)
{
    fprintf(stream, "--------------------------------------------------------------------------------\n");
    fprintf(stream, "Brand: %s\n", self->brand);
    fprintf(stream, "Model: %s\n", self->model);
    fprintf(stream, "Color: %s\n", self->color);
    fprintf(stream, "Year of launch: %u\n", self->year_of_launch);
    if (self->transmission == MANUAL) 
    {
        fprintf(stream, "Transmission: Manual\n");
    }
    else if (self->transmission == AUTOMATIC) {
        fprintf(stream, "Transmission: Automatic\n");
    }
    fprintf(stream, "--------------------------------------------------------------------------------\n");
    return;
}


void car_change_color(struct car* car, const char* color) 
{
    if (car == NULL || color == NULL) {
        return;
    }

    // Kopierar värdet av färgen
    size_t i;
    for (i = 0; color[i] != '\0'; i++) 
    {
        car->color[i] = color[i];
    }
    car->color[i] = '\0';
}


void extern car_change_transmission(struct car* self)
{
    if (self->transmission == MANUAL) {
        self->transmission = AUTOMATIC;
    }
    else if (self->transmission = AUTOMATIC)
    {
        self->transmission = MANUAL;
    }
}
