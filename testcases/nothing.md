Test Case Nothing: 
===================================
Nothing except on sentence.
Test Machine: My CQ511.

Result:
-----------------------------------
easternheart [ /sda2/home-sda13/easternheart/Projects/cpp-vala-csharp-bench ]$ time cpp/nothing.elf
Hello Benchmark

real    0m0.006s
user    0m0.004s
sys     0m0.000s
easternheart [ /sda2/home-sda13/easternheart/Projects/cpp-vala-csharp-bench ]$ time vala/nothing.elf 
Hello Benchmark. 

real    0m0.005s
user    0m0.004s
sys     0m0.001s
easternheart [ /sda2/home-sda13/easternheart/Projects/cpp-vala-csharp-bench ]$ time mono csharp/nothing.exe
Hello Benchmark!

real    0m0.047s
user    0m0.043s
sys     0m0.003s

