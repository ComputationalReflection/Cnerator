# Cnerator


[![License](https://img.shields.io/github/license/ComputationalReflection/cnerator)](LICENSE)
[![Latest stable release](https://img.shields.io/github/v/release/ComputationalReflection/cnerator?label=current-version)](https://github.com/ComputationalReflection/cnerator/releases)
<img alt="Code size" src="https://img.shields.io/github/languages/code-size/computationalreflection/cnerator">
<img alt="Repo size" src="https://img.shields.io/github/repo-size/computationalreflection/cnerator">



Cnerator is a C source code generation tool. Generated programs can be compiled with any standard ANSI C compiler. 
The user may define different parameters such as the number of function to be generated or the probabilities of all
the different syntactic constructs (e.g., the average number of statements in a function, expression types, 
number and types of local variables, and the kind of syntactic constructs to be generated). 

Generated programs fulfill the type rules of the C programming language, so they are compiled without errors. 
Using the different parameters, the user can utilize Cnerator to create a huge amount of synthetic C programs,
necessary in common "Big Code" scenarios.

## Command line options:

``` text
usage: cnerator.py [-h] [-w PATH] [-o NAME] [-p AMOUNT] [-r RECURSION]
                   [-vst VISITORS] [-v] [-d]

Generates a compilable C program

optional arguments:
  -h, --help            show this help message and exit
  -w PATH, --working-dir PATH
                        Working directory (default: out)
  -o NAME, --output NAME
                        C output file name, without the .c extension (default:
                        main)
  -p AMOUNT, --parts AMOUNT
                        Split the program in different C files (default: 2)
  -r RECURSION, --recursion RECURSION
                        Python recursion limit (default: 50000)
  -vst VISITORS, --visitors VISITORS
                        Semicolon-separated list of visitors, in order (e.g.,
                        visitors.func_to_proc;visitors.return_instrumentation)
                        (default: )
  -v, --verbose         Verbose messages (default: False)
  -d, --debug           Generate debug info (call graph and struct structure)
                        in .dot files (default: False)
```


## License

[BSD 3 clause license](LICENSE)