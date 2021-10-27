#include <stdio.h>

void main(){
    int a=5;
    float i = 100.25;
    printf("a=%d, i=%f\n",a,i);
    printf("Hello C from VS Code.\n");
    a = (unsigned int)i;
    float *p = &i;
    unsigned char *q = p;
    //预期输出:p=6422288(地址), *p=100.250000, i=00,80,c8,42
    printf("p=%u, *p=%f, i=%02x,%02x,%02x,%02x\n",p,*p,(unsigned char)*q,(unsigned char)*(q+1),(unsigned char)*(q+2),(unsigned char)*(q+3));
}