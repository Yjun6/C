# #打印 1-10 的整数
# i = 1
# while i <= 10:
#     print(i)
#     i += 1

# #计算 1-100 的和
# i = 1
# sum = 0
# while i <= 100:
#     sum += i
#     i += 1
# print(sum)

# #计算 5 的阶乘
# i = 1
# sum = 1
# while i <= 5:
#     sum *= i
#     i += 1
# print(sum)

# 求 1! + 2! + 3! + 4! + 5!
i = 1
sum = 1 #存储阶乘
result = 0 #存储阶乘之和
while i <= 5:
    sum *= i
    i += 1
    result += sum
print(result)
