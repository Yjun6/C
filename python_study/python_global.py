#在函数内部使用全局变量
x = 10

def is_odd(num):
    global x
    while num:
        num -= 1
        x += 1


print(x)
is_odd(2)
print(x)