/*
Used for showing how to access arrays,
view parameters, return values, etc..
Pay attention to %rax on returns and %rdi / %rsi 
on function calls.
*/

char string[11] = "Hello World";


int test_func(char *str, int *arr) {
    int x = 1;
    return 42;
}


int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int val = test_func(string, arr);
    return 0;
}