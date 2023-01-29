# #实现两个数相加并打印
# def add(beg,end):
#     print(beg + end)
#
#
# add(12,24)
# add('zyj','jxy')

#实现输入一个数，求其阶乘,并输出
# def sort(num):
#     sum = 1
#     for i in range(1,num+1):
#         sum *= i
#     print(sum)
#
#
# sort(5)
# sort(10)

#实现输入一个数，求其阶乘,并返回
def sort1(num):
    the_sum = 1
    for i in range(1,num + 1):
        the_sum *= i
    return the_sum


result = sort1(9)
print(result)