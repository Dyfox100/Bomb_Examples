/* Used for demonstrating loops and array 
data accesses. Show how the mov statement is 
used with the index to get data from array.
Could change it to be a float to show data type offsets.
*/

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
}