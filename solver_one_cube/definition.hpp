#define WHITE 0
#define GREEN 1
#define RED 2
#define BLUE 3
#define ORANGE 4
#define YELLOW 5
#define WILDCARD 6

#define HW_CUBE 3
#define HW2_CUBE 9

#define N_STICKER 54
#define N_CORNER 8
#define N_EDGE 12

/*
sticker coordinates
             0  1  2
             3  4  5
             6  7  8
             -------
 36 37 38 |  9 10 11 | 18 19 20 | 27 28 29
 39 40 41 | 12 13 14 | 21 22 23 | 30 31 32
 42 43 44 | 15 16 17 | 24 25 26 | 33 34 35
             --------
             45 46 47
             48 49 50
             51 52 53


CP/EP/Center coordinates
             0  0  1
             3  0  1
             3  2  2
             -------
  0  3  3 |  3  2  2 |  2  1  1 |  1  0  0
 11  4  8 |  8  1  9 |  9  2 10 | 10  3 11
  7  7  4 |  4  4  5 |  5  5  6 |  6  6  7
             --------
              4  4  5
              7  5  5
              7  6  6
*/

