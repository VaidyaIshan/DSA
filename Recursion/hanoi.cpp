#include <stdio.h>

void towerOfHanoi(int n, char from_peg, char to_peg, char aux_peg) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from_peg, to_peg);
        return;
    }

    towerOfHanoi(n - 1, from_peg, aux_peg, to_peg);
    printf("Move disk %d from %c to %c\n", n, from_peg, to_peg);
    towerOfHanoi(n - 1, aux_peg, to_peg, from_peg);
}

int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'C', 'B', 'A');
    return 0;
}