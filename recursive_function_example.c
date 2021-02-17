

int recursive_add(int number1, int number2) {
    if (number2 > 0) {
        return recursive_add(number1 + 1, number2 - 1);
    }
    else {
        return number1;
    }
}


int main() {
    int val = recursive_add(1, 20);
    return 0;
}