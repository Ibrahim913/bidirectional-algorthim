# bidirectional-algorthim
Bidirectional algorithm is an algorithm that sorts an array by comparing 2 elements at a time and swapping the greater to the right in conjunction with placing the least element at the beginning.
At first, it goes from start to end. It starts by
comparing 2 elements at a time and swapping the
element’s places, so the greatest element is on the
back-end of the comparison.
Having made the comparison. It makes a second
comparison with already set minimum – to the first
value in iteration – to see if the value at minimum is
not less than the value of compared element if it is the
minimum points to that place instead.
Secondly, after reaching the end of the array and putting
the greatest value element at the end. It checks if the
minimum is not equal to the start if it is, then we swap
elements at the start’s place and at the minimum’s place.
After doing this full iteration of both putting the greatest at 
the end and the least at the beginning. we subtract 1 from
the end index we end at and we add 1 to the start index we
start from.
The algorithm keeps doing this full iteration over and over
again until we have no swap in the full iteration, then the
array is sorted.
This algorithm utilizes a combination of bubble sort and
selection sort algorithms working hand-in-hand with each
in a reoccurring loop until no swap occur.
