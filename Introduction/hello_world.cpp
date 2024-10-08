// The more popular command form is cout. It has the following basic form:
// cout<<value_to_print<<value_to_print;
// Any number of values can be printed using one command as shown.
// The printf command comes from C language. It accepts an optional format specification and a list of variables. Two examples for printing a string are:
// printf("%s", string); printf(string);
// Note that neither method adds a newline. It only prints what you tell it to.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}
