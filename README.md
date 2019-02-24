# macheps
Computation of the machine epsilon (`macheps`) on `x86` using approximating algorithm like:
```
value = 1.0;
epsilon = 1.0;
sum = value + epsilon;

while (value != sum)
{
    epsilon = epsilon / 2.0;
    sum = value + epsilon;
}
```

The approach used [here](src) is:
* Computations are done by assembly functions
* Constants `1.0` and `2.0` are computed using corresponding FPU instructions
* Comparison of the `value` and `sum` is done raw with `memcmp()` function
* Additionally the loops are counted and printed out with the `epsilon`

## Single precision using FPU (IEEE 754: binary32, 32-bit)
```
Machine epsilon (fp32):
    Loop counter: 24
    epsilon: 5.96046e-08
```

## Double precision using FPU (IEEE 754: binary64, 64-bit)
```
Machine epsilon (fp64):
    Loop counter: 53
    epsilon: 1.11022e-16
```

## Long double precision using FPU (IEEE 754: -, 80-bit)
```
Machine epsilon (fp80):
    Loop counter: 64
    epsilon: 5.42101e-20
```

## Note
The assembly functions have been generated using my [cppasm](https://github.com/aelfimow/cppasm)
generator.

See also [macheps-128](https://github.com/aelfimow/macheps-128).
