choice = input("输入1，代表选择学习；输入2，代表选择爱情：")
if choice == '1':
    print('恭喜你，马上成为人生赢家')
elif choice == '2':
    print('你会吃到爱情的苦')
else:
    print('输入错误，但是你的结果幸福美满')

#输入一个整数，判断他是否是奇数
num = input('请输入一个整数:')
num = int(num)
if num % 2 == 1:
    print(f'{num}是奇数')
else:
    print(f'{num}不是奇数')
