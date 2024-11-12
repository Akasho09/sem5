#include<iostream>
// Template function to swap two elements
template<class T>
void swap(T &x, T &y)
{
    T temp = x; // Store the value of x in a temporary variable
    x = y;      // Assign the value of y to x
    y = temp;   // Assign the value of the temporary variable to y
}
// Template function to sort an array of any type using bubble sort algorithm
template <class T>
void sort(T a[], int n)
{
    // Iterate over the array
    for (int i = 1; i < n; i++)
        // Inner loop to compare adjacent elements and swap if necessary
        for (int j = 0; j < n - i; j++)
            if (a[j] > a[j + 1]) // Compare adjacent elements
            {
                swap(a[j], a[j + 1]); // Swap if the current element is greater than the next one
            }
}



int main()
{
    int x[5] = {10, 50, 30, 40, 20};   // Integer array
    float y[5] = {1.1, 5.5, 3.3, 4.4, 2.2}; // Floating-point array

    // Sort the integer array
    sort(x, 5);

    // Sort the floating-point array
    sort(y, 5);

    // Display sorted integer array
    std::cout << "\nSorted x-Array : ";
    for (int i = 0; i < 5; i++)
        std::cout << x[i] << " ";

    // Display sorted floating-point array
    std::cout << "\nSorted y-Array : ";
    for (int i = 0; i < 5; i++)
        std::cout << y[i] << " ";

    return 0;
}
//Output
//Sorted x-Array : 10 20 30 40 50 
//Sorted y-Array : 1.1 2.2 3.3 4.4 5.5 
