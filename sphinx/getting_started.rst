Getting started
===============

`Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ is a C source code generation tool.
It can be used to generate large amounts of
`standard ANSI/ISO C source code <https://www.iso.org/standard/74528.html>`_, ready to be compiled
by any standard language implementation.
`Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ is highly customizable
to generate all the syntactic constructs of the C language, necessary to build
accurate predictive models with machine learning algorithms.


Installation
------------

You need a Python 3.7+ standard implementation.
The only additional package to install is ``numpy``:


.. code-block:: bash

    pip install numpy


Usage
-----

Then, you may just run `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_
with no arguments to generate a random C program in the ``out`` directory:


.. code-block:: bash

    python cnerator.py


There are plenty of options to customize `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_.
To specify the probability of a particular language
construct, you can use the ``-p`` or ``--probs`` option.
The following command sets to 20% the probability of
generating a function invocation when a new expression is required:

.. code-block:: bash

    python cnerator.py -p "call_prob = {True: 0.2, False: 0.8}"


If more sophisticated probabilities are required, you can specify them in a JSON file and pass it as
a parameter (see the [documentation](documentation#probability-specification-files) to know the JSON file format).
The following line passes an example JSON file in the ``json/probabilities`` folder where
different probability distributions are specified for some syntactic constructs:

.. code-block:: bash

    python cnerator.py -P json/probabilities/example_probs.json


`Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ also provides allows
the user to control the number and characteristics of
all the functions to be generated. A JSON file is used for that purpose
(see the [documentation](documentation#function-generation-files)).
The following command makes `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_
generate one function for each high-level return
type in the C programming language:


.. code-block:: bash

    python cnerator.py -f json/functions/1-function-each-type.json


Sometimes, the user needs the output program to fulfill some requirements not guaranteed by the
stochastic generation process.
To this aim, `Cnerator <https://github.com/ComputationalReflection/Cnerator>`_ allows
the specification of an ordered collection of Python
post-process specification files (see the [documentation](documentation#post-processing-specification-files)).
These post-processing files can modify the generated code to satisfy those requirements.
The following execution generates a random program and then executes two visitors:
one to rename ``func`` functions to ``proc`` (and their invocations) when they return ``void``;
and another one to add a ``__RETURN__`` label before each return statement:

.. code-block:: bash

    python cnerator.py -V visitors.func_to_proc:visitors.return_instrumentation


To see all the options, just run the ``-h`` or ``--help`` options.


