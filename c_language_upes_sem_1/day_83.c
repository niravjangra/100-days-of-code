#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Month m;

    for (m = JAN; m <= DEC; m++) {
        switch(m) {
            case JAN: case MAR: case MAY: case JUL:
            case AUG: case OCT: case DEC:
                printf("Month %d has 31 days\n", m);
                break;

            case APR: case JUN: case SEP: case NOV:
                printf("Month %d has 30 days\n", m);
                break;

            case FEB:
                printf("Month %d has 28 or 29 days (Leap year)\n", m);
                break;
        }
    }

    return 0;
}
