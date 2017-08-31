#include <stdio.h>

void fortune_cookie(char msg[])
{
    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}

void drinks()
{
    int drinks[] = {4, 2, 3};
    printf("First drink %i\n", drinks[0]);
    printf("Frist drink %i\n", *drinks);

    printf("Third drink %i\n", drinks[2]);
    printf("Third drink %i\n", *(drinks + 2));
}

void skip(const char *msg) 
{
    puts(msg + 6);
}

void pointerAddress() 
{
    int nums[] = {1, 2, 3};
    printf("nums' address: %p\n", nums);
    printf("(nums + 1)'s address: %p\n", nums + 1);
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
    printf("quote length: %i\n", sizeof(quote));
    int *p = quote;
    int *q = p;
    printf("q's address: %p\n", q);
    // quote = q; // Error!
    fortune_cookie(quote);

    drinks();

    char *msg_from_amy = "Don't call me";
    skip(msg_from_amy);

    pointerAddress();
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
