#include <stdio.h>

void compute(char arr[]) {
    int s0=(int)arr[0], s1=(int)arr[1], s2=(int)arr[2], s3=(int)arr[3], s4=(int)arr[4];
    char s5 = arr[5];
    if (((int)s5 == ((s1+s3)*5 + s0 + s2 + s4)%26 + 64)) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
}

int main() {
    char ID[3][6];
    for (int i=0; i<3; i++) {
        scanf("%s", &ID[i]);
    }
    for (int i=0; i<3; i++) {
        compute(ID[i]);
    }
}