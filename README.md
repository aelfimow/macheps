# macheps
Computation of the machine epsilon (macheps)

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
