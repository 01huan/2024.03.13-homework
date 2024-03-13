#include <stdio.h>
#include <string.h>
int main() {
    char C1[4], C2[4], chr[5]="CDHS";
    int C1_A, C1_B, C2_A, C2_B;
    scanf("%s %s", C1, C2);
    if (!strcmp(C1, C2)) {
        printf("%s = %s", C1, C2);
        return 0;
    }
    for (int i=0; i<4; i++) {
        if (C1[0] == chr[i]) {
            C1_A = i;
        }
        if (C2[0] == chr[i]) {
            C2_A = i;
        }
    }
    if (C1[2] == '\0') {
        C1_B = C1[1]-'0';
    } else {
        C1_B = 10*(C1[1]-'0') + C1[2]-'0';
    }
    if (C2[2] == '\0') {
        C2_B = C2[1]-'0';
    } else {
        C2_B = 10*(C2[1]-'0') + C2[2]-'0';
    }
    if (C1_A > C2_A) {
        printf("%s > %s", C1, C2);
    } else if (C1_A < C2_A) {
        printf("%s < %s", C1, C2);
    } else {
        if (((C1_B >= 1) && (C1_B <= 13)) && 
            ((C2_B >= 1) && (C2_B <= 13))) {
                if (C1_B > C2_B) {
                    printf("%s > %s", C1, C2);
                } else if (C1_B < C2_B) {
                    printf("%s < %s", C1, C2);
                }
            }
    }
}