# Two-dimensional bulletin board


In the neighborhood bulletin board, people paste ads on top of each other.
We'll write a bulletin board management class project.
it supports the following functions:

* `post` - Gets a position (row and column), direction (horizontal or vertical), and a string representing an ad,
And stick the string on the board in the appropriate place.
* `read` - Gets position (row and column), direction (horizontal or vertical), and number of characters, reads what is written on the board at the given position and length, and returns a string. The letter in each box on the board is the last letter pasted there.
* `show` - Displays the current bulletin board for easy reading, in any format of your choice.
Details:
* The row and column numbers and the number of characters are unsigned int numbers.
* The top row is 0 and the left column is 0.
* In each slot on which nothing is pasted, there is an underline
* The board size is not limited in advance, but it can be assumed that all ads will be concentrated in the same area - the distances between ads will not be very large.

