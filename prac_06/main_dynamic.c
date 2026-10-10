#include <stdio.h>
#include <dlfcn.h>

int main(void)
{
    void *handle;
    double (*add_func)(double, double);
    double (*sub_func)(double, double);
    double (*mul_func)(double, double);
    double (*div_func)(double, double);

    double a, b;

    handle = dlopen("./lib/libcalc.so", RTLD_LAZY);

    if (handle == NULL) {
        fprintf(stderr, "dlopen error: %s\n", dlerror());
        return 1;
    }

    dlerror();

    add_func = dlsym(handle, "add");
    sub_func = dlsym(handle, "subtract");
    mul_func = dlsym(handle, "multiply");
    div_func = dlsym(handle, "divide");

    if (dlerror() != NULL) {
        fprintf(stderr, "dlsym error\n");
        dlclose(handle);
        return 1;
    }

    printf("Enter two numbers: ");

    if (scanf("%lf %lf", &a, &b) != 2) {
        fprintf(stderr, "Error: enter two numbers.\n");
        dlclose(handle);
        return 1;
    }

    printf("add: %.2f\n", add_func(a, b));
    printf("subtract: %.2f\n", sub_func(a, b));
    printf("multiply: %.2f\n", mul_func(a, b));

    if (b == 0.0)
        printf("divide: cannot divide by zero.\n");
    else
        printf("divide: %.2f\n", div_func(a, b));

    dlclose(handle);

    return 0;
}
