#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}

void test()
{
    int x = 4;
    printf("x lives at %p\n", &x);
    printf("x lives at %li\n", &x);
    int *address_of_x = &x;
    int value_stored = *address_of_x;
    printf("Address of x: %p, value stored: %i\n", address_of_x, value_stored);
    printf("Address of pointer: %p\n", &address_of_x);

    *address_of_x = 99;
    printf("New stored value: %i\n", x);

    char quote[] = "Cookies make you fat";
    printf("The quote stored in %p\n", quote);
    fortune_cookie(quote);
}

void go_south_east(int *lat, int *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main()
{
    int latitude = 32;
    int longitude = -64;
    go_south_east(&latitude, &longitude);
    printf("Stop! Current location: [%i, %i]\n", latitude, longitude);

    test();
    return 0;
}
