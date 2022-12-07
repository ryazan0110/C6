//ptr_ops.c -- 指针操作
//  *给出指针地址上的值
//  ptr1 + 4 == &urn[4]
//  *(ptr + 4) == urn[4] -- 解引用
//  ptr++ 等于 ptr的地址 + int(类型大小)

# include <stdio.h>

int main(void){
    int urn[5] = { 100, 200, 300, 400, 500};
    int *ptr1 = urn;
    int *ptr2 = &urn[2];
    int *ptr3;
    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);
    
    //指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointer:\n");
    printf("ptr1 + 4 = %p,*(ptr1 + 4) = %d\n",ptr1 + 4,*(ptr1 + 4));
    ptr1++; //递增指针
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n",ptr1,*ptr1,&ptr1);
    ptr2--; //递减指针
    printf("\nvalues after pt2--:\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n",ptr2,*ptr2,&ptr2);
    --ptr1; //恢复为初始值
    ++ptr2; //恢复为初始值
    printf("\nPointers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p",ptr1,ptr2);
    //一个指针减去另一个指针
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n",ptr2, ptr1, ptr2 - ptr1);
    //一个指针减去另一个整数
    printf("\nsubtracting an int from pointer:\n");
    printf("(&urn[4]) ptr3 = %p, ptr3 - 2 = %p, ptr3 - 2 = &urn[4] =  %d\n",ptr3,ptr3-2,*(ptr3-2));
    
    return 0;
}