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
       /*.... process data ...*/
    }


}
