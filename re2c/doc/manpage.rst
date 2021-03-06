====
re2c
====

-----------------------------------------
convert regular expressions to C/C++ code
-----------------------------------------

:Manual section: 1

SYNOPSIS
--------

``re2c [OPTIONS] FILE``

DESCRIPTION
-----------

``re2c`` is a lexer generator for C/C++. It finds regular expression
specifications inside of C/C++ comments and replaces them with a
hard-coded DFA. The user must supply some interface code in order to
control and customize the generated DFA.


OPTIONS
-------

.. include:: ../doc/manual/options/options_list.rst 

.. include:: ../doc/manual/warnings/warnings_general.rst 

.. include:: ../doc/manual/warnings/warnings_list.rst 


INTERFACE CODE
--------------

.. include:: ../doc/manual/syntax/interface.rst_


SYNTAX
------

A program can contain any number of ``re2c`` blocks.
Each block consists of a sequence of ``RULES``, ``NAMED DEFINITIONS`` and ``INPLACE CONFIGURATIONS``.



RULES
~~~~~

.. include:: ../doc/manual/syntax/rules.rst_


NAMED DEFINITIONS
~~~~~~~~~~~~~~~~~

.. include:: ../doc/manual/syntax/named_definitions.rst_



INPLACE CONFIGURATIONS
~~~~~~~~~~~~~~~~~~~~~~

.. include:: ../doc/manual/syntax/configurations.rst_


REGULAR EXPRESSIONS
~~~~~~~~~~~~~~~~~~~

.. include:: ../doc/manual/syntax/regular_expressions.rst_


SUBMATCH EXTRACTION
-------------------

.. include:: ../doc/manual/features/submatch/submatch.rst_


STORABLE STATE
--------------

.. include:: ../doc/manual/features/state/state.rst_



CONDITIONS
----------

.. include:: ../doc/manual/features/conditions/conditions.rst_


ENCODINGS
---------

.. include:: ../doc/manual/features/encodings/encodings.rst_


GENERIC API
-----------

.. include:: ../doc/manual/features/generic_api/generic_api.rst_


SEE ALSO
--------

You can find more information about ``re2c`` at: http://re2c.org.
See also: flex(1), lex(1), quex (http://quex.sourceforge.net).


AUTHORS
-------

Originaly written by Peter Bumbulis in 1993;
developed and maintained by Brain Young, Marcus Boerger, Dan Nuffer and Ulya Trofimovich.
Below is a (more or less) full list of contributors retrieved from the Git history and mailing lists:

.. include:: ../doc/manual/contributors.rst_


VERSION INFORMATION
-------------------

This manpage describes ``re2c`` version 1.1.1, package date 24 Dec 2018.

