# Basic Score Calculator

A C console program (`bs.c`) that prompts for two test scores and prints a final score.

## Build and run

```sh
gcc bs.c -o score-calculator
./score-calculator
```

On Windows, run `score-calculator.exe`.

## Current behavior

The calculation uses `test1 = test2`, which assigns the second score to the first instead of adding the two scores. As a result, it prints half of the second score. To average both inputs, use `(test1 + test2) / 2.0`.
