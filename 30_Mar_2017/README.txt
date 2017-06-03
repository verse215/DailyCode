Happy Thursday daily_programmer.

Today is a sort challenge. Given integer array, we are to iterate through all pairs of neighbor elements, starting from beginning - and swap members of each pair where first element is greater than second.

For example, let us consider small array of elements 1 4 3 2 6 5, marking which pairs are swapped and which are not:

(1 4) 3 2 6 5 - pass
1 (4 3) 2 6 5 - swap
1 3 (4 2) 6 5 - swap
1 3 2 (4 6) 5 - pass
1 3 2 4 (6 5) - swap
1 3 2 4 5 6 - end

This operation moves some greater elements right (to the end of array) and some smaller elements left (to the beginning).
What is the most important: the largest element is necessarily moved to the last position.
