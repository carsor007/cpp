#include <iostream>
#include <fstream>

using namespace std;

const int NUM_LINES = 4;
const int NUM_COLUMNS = 3;
const int COLUMN_WIDTH = 20;


int main ()
{
     PrintTableHeader();
     PrintTableBody();
     return 0;
}

void PrintTableBody()
{
    ifstream input(table-data.txt);
    /* No error-checking here, but you should be sure to do this in real
     * program.
     */

    /* Loop over the lines in the file reading data. */
    for (int k = 0; k < NUM_LINES; ++k)
    {
       int intValue;
       double doubleValue;
       input >> intValue >> doubleValue;
   /* setw(set width)forces cout to to pad it's output with the right
   *  number of spaces */
       cout << setw(COLUMN_WIDTH) << (k + 1) << " | ";
       cout << setw(COLUMN_WIDTH) << intValue << "|";
       cout << setw(COLUMN_WIDTH) << doubleValue << endl;

    }
}
void PrintTableHeader()
{
    /* Print the ---...---+-- pattern for all but the last column. */
    for (int column = 0; column < NUM_COLUMNS; ++column)
    {
        for (int k = 0; k < COLUMN_WIDTH; ++k)
            cout << '-';
            cout << "-+-";

    }
   /* Now print the ---...--- pattern for the last column. */
   for (int k = 0; k < COLUMN_WIDTH; ++k)
       cout << '-';
       cout << endl;

}

 
