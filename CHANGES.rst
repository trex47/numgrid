

Changelog
=========


Version 1.y.z
-------------

Unreleased.


Version 1.0.2
-------------

Released on 2018-10-24.


Grid memory management is now client-side
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

This was done to simplify memory management and avoid memory leaks and
strange effects. The client can now query the number of grid points
before computing the grid for a certain atom type. Sounds cumbersome but
is not a problem in practice. For the Python interface this is not a
problem at all since it takes care of that.


Compute one center at a time
~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Motivation was to simplify code and to make it possible to pre-compute a
grid for a certain atom/basis type. This also means that the code can be
optimized and parallelized on the client side.


Full basis set does not need to be provided
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Great simplification. All that is needed now is the steepest exponent
and a set of smallest exponents for each angular momentum.


Separate arrays for x, y, z, and weights
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

They can be recombined on the client side but it makes it easier to
understand how the grid information is stored in memory.


Version 0.5.0
-------------

Released on 2016-12-26.