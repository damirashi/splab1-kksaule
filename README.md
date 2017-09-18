# System Programming Lab 1

In this lab you are to complete 4 tasks and submit them via github classroom. Submit source codes with your comments.

## Task A : sine-cosine
Write C program `sincos.cpp` that will read command line arguments and print sine and cosine of the arguments as shown below. Note the special options `-s` and `-c`. If no argument is supplied your program should print a usage hint.

```bash
$ gcc sincos.c -o sincos
$ ./sincos 1.57
1.000000
0.000796
$ ./sincos -s 1.57
1.000000
$ ./sincos -c 1.57
0.000796
$ ./sincos
usage: sincos angle
only sine: sincos -s angle 
only cosine: sincos -c angle
```

## Task B
Write a program that will print a `hi` in various languages as shown below. Let the source code be `sayhi.c`. Compile it to several executable versions e.g. `sayhi`, `saysalem`, `sayprivet` etc. For each language there should be two options short one and long one (e.g. `-e` and `--english`). If no language is specified the program should figure out language from the name of executable. Additional long option `--name` should be implemented too.

```bash
$ ./sayhi
hi
$ ./sayhi -k
salem
$ ./sayhi --kazakh
salem
$ ./sayhi --russian
privet
$ ./sayhi -r
privet
$ ./saysalem -r
privet
$ ./saysalem
salem
$ ./saysalem -r --name bob
privet bob
```

## Task C
Implement your verison of `echo` command called `eko`. Your program should have `-n` option.

```bash
$ gcc eko.c -o eko
$ ./eko a b c
a b c
$ ./eko -n a b c
a b c$ ./eko a b c again
a b c again
$
```

## Task D
Write program `rank` to sort strings from standard input and print them to standard output. By default it sorts in alphabetical order unless any one of `-r` or `--reverse` options is specified. In which case your program should sort in reverse order. Implement your sorting algorithm manually without using any library function to sort array of strings in C.

```bash
$ gcc rank.c -o rank
$ cat > text
salem
selam
nihau
hello
privet
$ cat text | ./rank
hello
nihau
privet
salem
selam
$ cat text | ./rank --reverse
selam
salem
privet
nihau
hello
```

## References
1. `man getopt`
2. `man getopt_long`
3. `man scanf`
4. `man fgets`
5. `man sin`
6. `man 3 printf`
