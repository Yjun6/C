# #求打印1-10
# for i in range(1,11,1):
#     # range(1,11,1) [1,11) 步数->1
#     print(i)

# #求1+2+...+100
# tneSum = 0
# for i in range(1,101):
#     tneSum += i
# print(tneSum)

# n = 18
# for i in range(1,n):
#     print(i)

#输入任意个数，求其平均值
#存储总数
theSum = 0
#存储个数
count = 0
while True:
   num = input("""请输入您要输入的数字（以';'结束）：""")
   if num == ';':
      break
   num = float(num)
   count += 1
   theSum += num

print(f'{theSum/count}是平均数')

