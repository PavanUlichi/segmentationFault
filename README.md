# segmentationFault
When your program runs, it has access to certain portions of memory. First, you have local variables in each of your functions; these are stored in the stack. Second, you may have some memory, allocated during runtime (using either malloc, in C, or new, in C++), stored on the heap (you may also hear it called the "free store"). Your program is only allowed to touch memory that belongs to it -- the memory previously mentioned. Any access outside that area will cause a segmentation fault.

There are four common mistakes that lead to segmentation faults: dereferencing NULL, dereferencing an uninitialized pointer, dereferencing a pointer that has been freed (or deleted, in C++) or that has gone out of scope (in the case of arrays declared in functions), and writing off the end of an array. 

A fifth way of causing a segfault is a recursive function that uses all of the stack space. On some systems, this will cause a "stack overflow" report, and on others, it will merely appear as another type of segmentation-fault. 

The strategy for debugging all of these problems is the same: load the core file into GDB, do a backtrace, move into the scope of your code, and list the lines of code that caused the segmentation fault. 
Source: http://www.cprogramming.com/debugging/segfaults.html
