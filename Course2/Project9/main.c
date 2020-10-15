#include <stdio.h>

int main()
{
    float speed, limit;
    scanf("%f %f", &speed, &limit);
    float chaosubaifenbi;
    chaosubaifenbi = speed / limit;
    float chaosubilv = chaosubaifenbi * 100 - 100;
    if (chaosubaifenbi < 1.1)
    {
        printf("OK");
    }
    else if (chaosubaifenbi < 1.5)
    {
        printf("Exceed %.0f%%. Ticket 200", chaosubilv);
    }
    else
    {
        printf("Exceed %.0f%%. License Revoked", chaosubilv);
    }
    return 0;
}