def odd(x, y):
    return x * y, x + y


#函数返回值符合多元赋值原则
n , m = odd(4, 5)
print(n)
print(m)

#下划线表示占位
_,y = odd(2,4)
print(y)