User manual
===========


This text describes how to use Cnerator for the stochastic generation of compilable C source code.


Command line arguments
----------------------

These are the command line arguments provided by `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_
(all of them are optional):

-   ``-o NAME`` or ``--output NAME``: ``NAME`` indicates the output file name, without the file extension.
    The default value is ``main``.

-   ``-O PATH`` or ``--output_dir PATH``: ``PATH`` is the output directory where the C source code
    is placed. If the directory does not exist, it is created. The default value is ``out``.

-   ``-n NUMBER`` or ``--nfiles NUMBER``: Generates the output program in ``NUMBER`` compilation units.
    Each compilation unit is a pair of ``.c`` and ``.h`` files.
    A compilation unit can be compiled independently,
    even though they commonly depend on other compilation units.
    The default value is 2.

-   ``-r RECURSION_LIMIT`` or ``--recursion RECURSION_LIMIT``: Defines the maximum number of
    Python recursive invocations. This parameter may be modified when massive codebases
    are being modified, checking that the runtime environment provides sufficient memory.
    The default value is 50000.

-   ``-v`` or ``--verbose``: Enables the verbose mode to show runtime messages.
    By default, the verbose mode is disabled.

-   ``-d`` or ``--debug``: Generates debug information, comprising call graphs and struct structures
    in ``.dot`` files.
    By default, the debug option is disabled.

-   ``-p PROBS`` or ``--probs PROBS``: ``PROBS`` represents a semicolon-separated list of probabilities
    and their values for different syntactic constructs.
    An example use is ``"call_prob={True:0.2,False:0.8}; param_number_prob={0:0.2,1:0.3,2:0.3,3:0.2}"``.
    To know all the different syntactic constructs provided
    by `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_, please check the
    [syntactic constructs](#syntactic-constructs) section.


-   ``-P PROBSFILE`` or ``--probsfile PROBSFILE``: ``PROBSFILE`` is a JSON file specifying some probabilities
    for different language constructs. Different examples are provided in the ``json/probabilities``
    directory.
    The structure of ``PROBSFILE`` JSON files is described in the
    [probability specification files](#probability-specification-files) section.

-   ``-f FUNCTIONS`` or ``--functions FUNCTIONS``: ``FUNCTIONS`` is a JSON file specifying conditions
    of the functions to be created by `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_.
    The user can express properties that the
    generated functions will fulfill.
    Different example files are provided in the ``json/functions`` directory.
    The structure of ``FUNCTIONS`` JSON files is described in the
    [function generation files](#function-generation-files) section.

-   ``-V VISITORS`` or ``--visitors VISITORS``: An ordered colon-separated list of visitors to
    adapt, process or modify the program representation generated
    by `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_.
    Once the visitors are run, `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_
    takes the final program representation and
    generates the final C source code.
    An example value of ``VISITORS`` is ``visitors.func_to_proc:visitors.return_instrumentation``.
    The ``visitors`` directory provides different examples of visitor implementations.
    A brief description of how to implement of such visitors is presented in the
    [post-processing specification files](#post-processing-specification-files) section.

-   ``-h`` or ``--help``: Shows a description of the command line arguments, including the default values.



Syntactic constructs
--------------------

As mentioned, `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ allows defining
the probabilities of different syntactic constructs of
the C programming language. What follows is a description of all the constructs and their
unique identifiers, when the ``-p`` or ``-P`` options are used:

-   ``primitive_types_prob``: probabilities among primitive types (default: equal
    probability for all the types).
-   ``assignment_types_prob``: assignment type (default: equal probability for all
    the types).
-   ``augmented_assignment_types_prob``: augmented assignment type (``+=``, ``-=``, ``*=``, etc.)
    (default: equal probability for primitive types).
-   ``all_types_prob``: type probability when any type may occur in a syntax
    construction (default: equal probability for any type).
-   ``array_size``: size of the arrays to be created (default: 1-10).
-   ``reuse_struct_prob``: when a struct is needed, probability of using and
    existing one rather than creating a new one (default: 90%).
-   ``enhance_existing_struct_prob``: when a struct is needed, probability of
    extending an existing one with the demanded field rather than creating a new
    one (default: 70%).
-   ``array_literal_initialization_prob``: array initialization upon definition
    (default: 10%).
-   ``struct_literal_initialization_prob``: struct initialization upon definition
    (default: 10%).
-   ``exp_depth_prob``: expression depth (default: equal probabilities for [0-2]).
-   ``return_exp_depth_prob``: expression depth for the particular expressions to
    be returned by functions (default: equal probabilities for [0-2]).
-   ``call_prob``: probability that a new expression is a function invocation
    (default: 20%).
-   ``basic_expression_prob``: basic expressions (default: same probability among
    literal, local variable, global variable, and param variable).
-   ``param_number_prob``: number of parameters (default: 10% for 1, 20% for [1,4]
    and 5% for [5,6]).
-   ``param_types_prob``: types of the parameters (default: all types are equally
    likely).
-   ``stmt_invocation_prob``: invocation statements to functions or procedures
    (default: function=88%, procedure=12%).
-   ``return_types_prob``: function return types (default: all types are equally
    likely).
-   ``int_emulate_bool``: probability of generating a bool return (0 or 1) when an
    int type is expected (default: 20%).
-   ``new_global_var_prob``: probability of creating a new global variable when one
    of the expected types already exists (default: 1%).
-   ``new_local_var_prob``: probability of creating a new local variable when one
    of the expected types already exists (default: 1%).
-   ``reuse_func_prob``: probability of reusing an existing function of the
    expected type (default: 99%).
-   ``reuse_proc_prob``: probability of reusing an existing procedure of the
    expected type (default: 99%).
-   ``global_or_local_as_basic_lvalue_prob``: When a basic l-value needs to be
    generated, this is the probability of using a global variable; otherwise, a
    local variable is used (default: 50%).
-   ``basic_or_compound_stmt_prob``: probability of generating a basic (no block)
    or compound statement (default: basic=70%, compound=30%).
-   ``function_basic_stmt_prob``: each kind of basic (no block) statement in
    functions (default: assignment=60%, invocation=20%, increment/decrement=20%,
    augmented assignment=10%).
-   ``function_compound_stmt_prob``: each kind of compound statement (with blocks)
    in functions (equal probability for Block, If, Switch, Do, While, For).
-   ``stmt_depth_prob``: statement depth (default: equal probabilities for [0-2]).
-   ``procedure_basic_stmt_prob``: each kind of basic (no block) statement in
    functions (default: assignment=60%, invocation=20%, increment/decrement=20%,
    augmented assignment=10%).
-   ``procedure_compound_stmt_prob``: each kind of compound statement (with blocks)
    in functions (equal probability for Block, If, Switch, Do, While, For).
-   ``number_stmts_main_prob``: number of statements in the main function (default:
    equal probabilities between 5 and 10).
-   ``number_stmts_func_prob``: number of statements in functions (default: 20% for
    [1,4] and 10% for [5, 6]).
-   ``number_stmts_block_prob``: number of statements in blocks (default: 1/3 for 1, 2
    and 3).
-   ``else_body_prob``: probability of generating an else body for an if statement
    (default: 50%).
-   ``number_cases_prob``: number of cases in switch statements (default: equal
    probabilities between 1 and 4).
-   ``cases_type_prob``: type of the cases clauses in switch statements (default:
    equal probabilities between types promotable to int, excluding bool).
-   ``default_switch_prob``: probability of generating a default case in a switch
    statement (default: 80%).
-   ``break_case_prob``: probability of having a break statement at the end of a
    case block (default: 70%).
-   ``return_at_end_if_else_bodies_prob``: probability of having a return at the
    end of an if / else blocks (default: 15%).
-   ``return_at_end_case_prob``: probability of having a return at the end of the
    cases clauses in a switch statement (default: 15%).
-   ``implicit_promotion_bool``: if an expression is expected, the probability to
    generate it with another type promotable to the expected one (default: 30%).
-   ``promotions_prob``: promotions between types (default: all the conversions are
    equally likely).


Probability specification files
-------------------------------

Probability specification files are JSON documents that the user can use to define
the probability of different [syntactic constructs](#syntactic-constructs).
The following JSON file shows an example:


.. code-block:: json

    {
       "function_basic_stmt_prob": {
          "assignment": 0.3,
          "invocation": 0.4,
          "augmented_assignment": 0.15,
          "incdec": 0.1,
          "expression_stmt": 0.05
       },
       "array_literal_initialization_prob": {
          "True": 0.1, "False": 0.9
       },
       "primitive_types_prob": {
          "__prob_distribution__": "equal_prob",
          "__values__": [
             "ast.Bool",
             "ast.SignedChar",
             "ast.UnsignedChar",
             "ast.SignedShortInt"
          ]
       },
       "param_number_prob": {
          "__prob_distribution__": "proportional_prob",
          "__values__": {
             "0": 1, "1": 2, "2": 3,
             "3": 3, "4": 2, "5": 1
          }
       },
       "number_stmts_main_prob": {
          "__prob_distribution__": "normal_prob",
          "__mean__": 10,
          "__stdev__": 3
       }
    }

The first entry (``function_basic_stmt_prob``) defines the probability of building basic statements
(i.e., statements not containing other statements, unlike ``for`` and ``switch``),
and the second one (``array_literal_initialization_prob``) states when an array definition should initialize their values.
These two examples specify fixed probabilities that must sum zero.
The three remaining entries describe uniform/equal, proportional and normal distributions to define, respectively,
the usage of primitive types (``primitive_types_prob``),
the number of function parameters (``param_number_prob``)
and statements in the ``main`` function (``number_stmts_main_prob``).


Function generation files
-------------------------

`Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ provides the capability of
specifying features to be fulfilled by the generated functions.
The following JSON file shows an example use of such capacity:

.. code-block:: json

    {
      "function_returning_void": {
        "total": 1000,
        "condition": "lambda f: isinstance(f.return_type, ast.Void)"
      },
      "function_returning_bool": {
        "total": 1000,
        "condition": "lambda f: isinstance(f.return_type, ast.Bool)"
      },
      "function_with_if_else": {
        "total": 1,
        "condition": "lambda f: any(stmt for stmt in f.children if isinstance(stmt, ast.If) and any(stmt.else_statements))"
      }
    }

The two first entries (``function_returning_void`` and ``function_returning_bool``)
enforce `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ to generate 1000
functions returning ``void`` and the same
number of functions returning ``bool``. The only condition in the lambda expressions
checks that the returned type is the expected one.
The last entry (``function_with_if_else``) shows a different example,
where the user demands `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_
to generate a function containing an ``if`` statement with an ``else`` clause.


Post-processing specification files
-----------------------------------

`Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ provides a mechanism
to process / modify program representation before the final
source code generalization. The following code shows an example Python post-process specification file:

.. code-block:: python

    from functools import singledispatch
    from cnerator import ast

    def _instrument_statements(statements: List[ast.ASTNode]) -> List[ast.ASTNode]:
        """Includes a unique label before any return statement"""
        instrumented_stmts = []
        for stmt in statements:                          # iterates through the statements
            if isinstance(stmt, ast.Return):             # if the statement is return…
                label_ast = ast.Label(generate_label())  # creates a new AST node for the label
                instrumented_stmts.append(label_ast)     # and places the label before the return
                visit(stmt)                              # traverses the statement
                instrumented_stmts.append(stmt)          # appends return after the label
        return instrumented_stmts

    @visit.register(ast.Function)
    def _(function: ast.Function):
        """Traverses a function definition to add a unique label before each return statement"""
        function.stmts = _instrument_statements(function.stmts)

    @visit.register(ast.Do)
    @visit.register(ast.While)
    @visit.register(ast.For)
    @visit.register(ast.Block)
    def _(node):
        """Traverses a control flow statement to add a unique label before each return statement"""
        node.statements = _instrument_statements(node.statements)

    _return_label_counter = 0

    def generate_label() -> str:
        """Generates a new unique label string"""
        global _return_label_counter
        _return_label_counter += 1
        return f"__RETURN{_return_label_counter}__"

    ...

The previous code traverses the representation of the generated program (i.e., its Abstract Syntax Tree (AST)),
and adds a unique label before each ``return`` statement.
The ``_instrument_statements function`` takes a list of statements (represented as
AST nodes) and adds a unique label —prefixed with ``__RETURN__``– before each ``return`` statement.
This is later used in the traversal of function definitions (``ast.Function``),
and ``do``, ``while``, ``for`` and block statements
–``if`` and ``switch`` control flow statements follow the same template.
This instrumentation technique was used to associate
fragments of binary code with their corresponding high-level ``return`` statements.

The previous code is an instance of an introspective implementation of the _Visitor_ design pattern.
The ``visit`` annotations indicate the AST node to be traversed.




