/*Used to demonstrate various conditionals
Use ir to show flags after compare statements,
and demonstrate diff jumps. Explain how a test 
instruction could be used instead of compl 0 in places
(test sets flags for s1 & s2, so checking if a int is negative
or 0 can be done by test %register, %register. 
Anything & itself is just itself and test sets the flags.)
*/

int main() {
    int x = 1;
    if (x == 0) {
        x = 2;
    }

    if (x < 0) {
        x = 4;
    }

    int y = 10;
    if (x < 4) {
        x = 5;
    }
    return 0;
}