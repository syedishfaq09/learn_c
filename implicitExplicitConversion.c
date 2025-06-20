#include <stdio.h>
// implicit type conversion
int main()
{
    int var1 = 19;
    char var2 = 'A';
    var1 = var1 + var2;
    float var3 = var1 + 1.0;
    printf("var1 = %d, var3 = %f", var1, var3);

    return 0;
}

// Explicit type conversion
#include <stdio.h>

int main()
{
    double var1 = 1.7;

    int add = (int)var1 + 3;

    printf("Addition = %d", add);
    return 0;
}
