#!/usr/bin/env python

import random
import ctypes
import os

# Full path to the directory containing the script
script_directory = os.path.dirname(os.path.abspath(__file__))

# Full path to the shared library
library_path = os.path.join(script_directory, '100-operations.so')

try:
    # Load the shared library
    cops = ctypes.CDLL(library_path)
except OSError as e:
    print(f"Error loading the library: {e}")
    exit(1)

# Generate random numbers
a = random.randint(-111, 111)
b = random.randint(-111, 111)

# Call functions from the shared library
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
