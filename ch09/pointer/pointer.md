# 什么是指针？
    什么是指针？从根本上看，指针（pointer）是一个值为内存地址 的变量（或数据对象）。

## 格式转换
    %p 转换为地址

## 运算符
**地址运算符：& (address operator)**
**间接运算符：* (indirection operator)**
ptr = &bah;
val = *ptr;
语句含义等于：
val = bah;

## 指针实例
nurse = 22;
ptr = &nurse;  // 指向nurse的指针
val = *ptr;    // 把ptr指向的地址上的值赋给val


## 地址实例

0x16fabf098
0x16fabf094

- 实现不同，%p表示地址的方式也不同
- 许多实现都以**十六进制显示地址**
- 每个十六进制数对应4位，该例显示 12个十六进制数，对应48位地址。
  

## 指针的类型
### 声明指针
int *pi;        // pi是指向int类型变量的指针
char *pc;        // pc是指向char类型变量的指针
float *pf, *pg;    // pf、pg都是指向float类型变量的指针

### 指针的类型
    pc指向的值（*pc）是char类型。pc本身是什么类型？我们描述它的类型 是“指向char类型的指针”
    —————— *pc 是一个地址


### 指针使用
- interchange(&x,&y);
  - 该函数传入的事‘x’、‘y’的地址