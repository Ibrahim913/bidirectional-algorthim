#include <iostream>

using namespace std;

/// this is an function to swap 2 elements
/// at each others place's
void swap(int &first, int &second)
{
    /// by using a third variable
    /// to store the value of one
    /// element temporarily
    int temp = first;
    first = second;
    second = temp;
}

/// the function for sorting by using both
/// selection sort and bubble sort at the same time
/// if comp returns true then first argument is smaller or equal else first argument is bigger
void bidirectionalSort(int a[], int n, bool(*comp)(int,int))
{
    /// first we have 4 variables 3
    /// of which to store the place
    /// we start from and where to end at
    /// and the place of the minimum value
    /// the 4th is to indicate whether there
    /// was a swap happened or not
    int start = 0;
    int end = n-1;
    int min;
    bool swapped = true;

    /// we will loop until there
    /// are no swap made, then the
    /// array is sorted
    while (swapped)
    {
        /// first we set the "swapped"
        /// to be false and we set the
        /// minimum at the first element
        /// we start at
        swapped = false;
        min = start;
        /// we loop the array starting from the
        /// "start"th place which is incremented
        /// with each loop iteration and we end at
        /// the "end"th place which is decremented
        /// with each loop iteration
        for (int i = start; i < end; ++i)
        {
            /// we swap elements at each others'
            /// places if the element on the
            /// front-end is greater than the
            /// element on the back-end and we
            /// set "swapped" to be true
            if (!comp(a[i], a[i+1]))
            {
                swap(a[i],a[i+1]);
                swapped = true;
            }
            /// we also check if the element at
            /// "min"th place is greater than
            /// element at the "i"th place
            if (comp(a[i], a[min]))
            {
                /// if it is we set "min" to
                /// the value of "i" and we
                /// "swapped" to be true
                min = i;
                swapped = true;
            }
        }
        /// we check the that "min" doesn't
        /// equal "start" to make the swap
        /// between the element at "i" place
        /// and the element at the "min" place
        if (min != start)
        {
            swap(a[min],a[start]);
        }

        /// we increment the start and decrement
        /// the end so not to reach them because
        /// they are now arranged
        start++;
        end--;
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}

bool smaller (int first, int second)
{
    if (first <= second)
        return true;
    else
        return false;
}

bool bigger (int first, int second)
{
    if (first >= second)
        return true;
    else
        return false;
}

int main()
{
    int a[] = { 5, 1, 4, 2, 8, 0, 2 };
    int n = sizeof(a) / sizeof(a[0]);
    char y;

    while (true)
    {
        cout << "would you like to arrange array? press (y)\n";
        cin >> y;
        if (y!='y')
            break;
        cout << "please enter 7 elements\n";

        for (int i=0;i<n;i++)
        {
            cin >> a[i];
        }

        bidirectionalSort(a, n, smaller);
        cout << "the Sorted array in an ascending order :\n";
        printArray(a, n);

        bidirectionalSort(a, n, bigger);
        cout << "the Sorted array in an ascending order :\n";
        printArray(a, n);
    }

    cout << "thanks for using BIDIRECTIONAL sorting algorithm";
    return 0;
}