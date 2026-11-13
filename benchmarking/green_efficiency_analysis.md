# Green Efficiency Analysis

By Ahmed Alharbi

I did this out of curiosity about how CPUs actually work, normally and under stress. People often say a CPU core is like a worker you hand a task to, and this report is my real test of that idea.

## Measurement Methodology

`baseline_loop` runs 100,000,000 iterations and prints its own execution time. I also timed it with the shell `time` command (real, user and sys), three times normally and once under load.

For the load test, my script `under_load.sh` starts one `yes` process per core (counted with `nproc`), sending output to `/dev/null`, so every core is busy. It then times the program and kills the `yes` processes when it finishes.

`comparison_algorithms` was measured with `time`.

`instrumentation_lab` uses `clock()`, which counts CPU time in ticks; dividing by `CLOCKS_PER_SEC` gives seconds. I put a timer before the first phase and after each one, so each phase starts where the last ended and TOTAL is their sum. Printing happens after the last timer, so it isn't counted. I ran it five times.

## Observed Performance Differences

`instrumentation_lab` (seconds):

| Run | TOTAL | BUILD_DATA | PROCESS | REDUCE |
|-----|-------|------------|---------|--------|
| 1 | 0.000882 | 0.000318 | 0.000409 | 0.000155 |
| 2 | 0.000897 | 0.000383 | 0.000359 | 0.000155 |
| 3 | 0.001007 | 0.000355 | 0.000469 | 0.000183 |
| 4 | 0.000837 | 0.000323 | 0.000358 | 0.000156 |
| 5 | 0.000903 | 0.000306 | 0.000397 | 0.000200 |
| Mean | 0.000905 | 0.000337 | 0.000398 | 0.000170 |

On average PROCESS took the most time (about 44% of TOTAL), then BUILD_DATA (37%) and REDUCE (19%). PROCESS was biggest in four of five runs; in run 2, BUILD_DATA was slightly higher.

`baseline_loop` (seconds):

| Condition | Execution time | user | real |
|-----------|----------------|------|------|
| Normal, run 1 | 0.228568 | 0.230 | 0.831 |
| Normal, run 2 | 0.227548 | 0.229 | 0.900 |
| Normal, run 3 | 0.227601 | 0.229 | 0.985 |
| Under load | 0.316202 | 0.317 | 5.653 |

On the normal machine, CPU time barely moved (0.227548 to 0.228568 s), but real time ranged from 0.831 to 0.985 s. Under load, real time jumped to 5.653 s, about 6 times the normal average of 0.905 s. CPU time also rose to 0.316 s, about 39% more for the same iterations.

Both `comparison_algorithms` runs show 0.001 s of real time, so I couldn't see any difference between them.

## Relation Between Runtime and Energy Consumption

Energy is power multiplied by time. I didn't measure power, so I assume the CPU draws about the same power while working, which makes CPU time a guide to energy. Under load, `baseline_loop` needed about 39% more CPU time, so about 39% more energy for the same work. In `instrumentation_lab`, PROCESS would use about 44% of the energy.

## Limitations of the Experiment

I only have one run under load, so I can't tell how typical 5.653 s is.

`instrumentation_lab` is tiny: TOTAL ranged from 0.000837 to 0.001007 s, about 19% of the average.

`time` only shows milliseconds, so the `comparison_algorithms` runs are too short to compare.

I never measured power, so the energy results depend on my assumption.

Even normally, real time was 0.60 to 0.76 s above user time, which my data can't explain. Everything ran on one machine.

## Practical Engineering Takeaway

The worker idea holds up, with a twist. A worker with a second job finished much later (5.653 s instead of about 0.9 s), and also spent more effort on the same task (39% more CPU time). So a busy machine doesn't just slow things down; it can make the same work cost more.

For measuring code, CPU time is more reliable than real time, which changes a lot with what else the machine is doing. Timing each phase shows where to focus, like PROCESS in `instrumentation_lab`, but since that whole program takes under 0.0011 s, it's only worth optimizing if it runs many times.
