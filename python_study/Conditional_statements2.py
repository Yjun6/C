# #输入一个整数, 判定是否是奇数
# num = input('请输入一个整数：')
# num = int(num)
# if num % 2 == 0:
#     print(f'{num}不是奇数')
# else:
#     print(f'{num}是奇数')

# #输入一个整数, 判定是正数还是负数
# num = int(input('请输入一个整数：'))
# if num > 0:
#     print(f'{num}是正数')
# elif num < 0:
#     print(f'{num}是负数')
# else:
#     print(f'{num}即不是正数，也不是偶数')

#判定年份是否是闰年
year = int(input('请输入年份：'))
if (year % 400 == 0) or (year % 100 != 0 and year % 4 == 0):
    print(f'{year}是闰年')
else:
    print(f'{year}不是闰年')