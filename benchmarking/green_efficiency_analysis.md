# Green Efficiency Analysis

By Ahmed Alharbi 

The main driver of me making this was curiosy on how the CPUs actully work understress and in normal mode also theres a common compirson of people saying cpus cores are like a worker that you give a task here's the real test of that theory
## Measurement Methodology
There's three programs were, Also there was a testing understress such as printing a loop of y/n command while the programm was testing it and stoping it the momemnt it finishes the task to test programms understress and comapring it under on empty machine and busy machine one of the programs that i tested was 'baseline_loop" runs a one million iterations and prints its own execution time; it was also run udner the shell 'time' command to record real (wall-clock), user and system time. comparison_algorithms' was measured with time. instrumentation_lab was timed with clock() from <time.h> it offerec a precise time for ticks to second with its CLOCKS_PER_SEC. 

also there was instrumentation_lab four timestamps were taken: one before build_dataset() and one after each phase. Each phase is the difference between neighbouring timestamps and TOTAL spans first to last, so there are no gaps or overlaps and TOTAL spans first to last, so there are no gaps or overlaps and TOTAL that equals the sum of the phases. All 'printf' calls happen after the last timestamp, excluding output from every measurement, The program was run five times to see the difference in result which were different a little.

## Observed Performance Differences

'instrumentation_lab' results (seconds):

| Run | TOTAL | BUILD_DATA | PROCESS | REDUCE |


## Relation Between Runtime and Energy Consumption

## Limitations of the Experiment

## Practical Engineering Takeaway


