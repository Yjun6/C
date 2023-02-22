#include "payroll.h"

int login()
{
	string n;
	string pwd;

	int p = 1;//1找到继续，2找到退出 
	int f = 0;//是否找到 
	while (p == 1)
	{
		cout << "请输入账号：";
		cin >> n;
		cout << "请输入密码：";
		cin >> pwd;

		string n1;
		string pwd1;

		ifstream i;
		i.open("date.txt", ios::in);
		while (i >> n1 && i >> pwd1)
		{
			if (n1 == n && pwd == pwd1)
			{
				cout << "登录成功" << endl;
				return 1;
			}
			
		}
		if (f == 0)
		{
			cout << "登录失败，请重新输入账号和密码" << endl;
			cout << "继续登录请按1，退出请按2" << endl;
			cin >> p;
		}
		i.close();
	}
	cout << endl;
	cout << endl;

	return 0;
}

void enroll()
{
	vector<user>p;

	while (1)
	{
		user u;
		cout << "请输入账号，密码" << endl;
		string n,pwd;
		cin >> n >> pwd;
		u.u_set( n, pwd);
		p.push_back(u);
		cout << "注册成功" << endl;
		break;
	}

	ofstream ofs;
	ofs.open("date.txt", ios::app);
	for (vector<user>::iterator i = p.begin();i != p.end();i++)
	{
		ofs << i->name << ' ' << i->password << endl;
	}
	ofs.close();

	ofs.close();
	cout << endl;
}

void find()
{
	system("cls");
	int p = 1;//1找到继续，2找到退出 
	int f = 0;//是否找到 
	while (p == 1)
	{
		cout << "请输入需要查找的姓名" << endl;
		string n;
		cin >> n;
		string id, t, g;
		int a, m;
		ifstream i;
		i.open("data.txt", ios::in);
		while (i >> id && i >> t && i >> a && i >> g && i >> m)
		{
			if (t == n)
			{
				cout << "查找完成：" << endl;
				cout << "工号" << id << "姓名：" << n << ' ' << "年龄：" << a << ' '
					<< "性别："  << g << ' ' << "收入：" << m << endl;
				cout << "继续查找请按1，退出请按2" << endl;
				cin >> p;
				f = 1;
				break;
			}
		}
		if (f == 0)
		{
			cout << "未找到该人员信息" << endl;
			cout << "继续查找请按1，退出请按2" << endl;
			cin >> p;
		}
		i.close();
	}
	cout << endl;
	cout << endl;
}

void set()
{
	system("cls");
	int k = 0;
	vector<Manager>t1;
	vector<Technician>t2;
	vector<Salesman>t3;
	vector<SalesManager>t4;
	//因为各个人员之间的数据不一样，所以分开存
	while (1)
	{
		cout << "请选择要录入的人员类型：1.经理  2.技术人员  3.销售人员  4.销售经理  5.退出" << endl;;
		cin >> k;
		if (k == 1)
		{
			Manager m;
			cout << "请输入工号，姓名，年龄，性别" << endl;
			string n, g, i;
			int a;
			cin >> i >> n >> a >> g;
			m.m_set(i, n, a, g);
			t1.push_back(m);
			cout << "录入成功" << endl;
		}
		else if (k == 2)
		{
			Technician t;
			cout << "请输入工号，姓名，年龄，性别，工作时间" << endl;
			string i, n, g;
			int a, h;
			cin >> i >> n >> a >> g >> h;
			t.m_set(i, n, a, g, h);
			t2.push_back(t);
			cout << "录入成功" << endl;
		}
		else if (k == 3)
		{
			Salesman S;
			cout << "请输入工号，姓名，年龄，性别，提成" << endl;
			string i, n, g;
			int a, r;
			cin >> i >> n >> a >> g >> r;
			S.S_set(i, n, a, g, r);
			t3.push_back(S);
			cout << "录入成功" << endl;
		}
		else if (k == 4)
		{
			SalesManager S;
			cout << "请输入工号，姓名，年龄，性别，提成" << endl;
			string i, n, g;
			int a, r;
			cin >> i >> n >> a >> g >> r;
			S.Sm_set(i ,n, a, g, r);
			t4.push_back(S);
			cout << "录入成功" << endl;
		}
		else if (k == 5)
		{
			cout << "录入完毕" << endl;
			break;
		}
	}


	ofstream ofs;
	ofs.open("data.txt", ios::app);
	for (vector<Manager>::iterator i = t1.begin();i != t1.end();i++)
	{
		ofs << i->id << ' ' << i->name << ' ' << i->age << ' ' 
			<< i->gender << ' ' << i->monthly_salary << endl;
	}
	ofs.close();


	ofs.open("data.txt", ios::app);

	for (vector<Technician>::iterator i = t2.begin();i != t2.end();i++)
	{
		ofs << i->id << ' ' << i->name << ' ' << i->age << ' ' 
			<< i->gender << ' ' << i->hourly_salary << endl;
	}
	ofs.close();

	ofs.open("data.txt", ios::app);

	for (vector<Salesman>::iterator i = t3.begin();i != t3.end();i++)
	{
		ofs << i->id << ' ' << i->name << ' ' << i->age << ' ' 
			<< i->gender << ' ' << i->rate << endl;
	}
	ofs.close();


	ofs.open("data.txt", ios::app);

	for (vector<SalesManager>::iterator i = t4.begin();i != t4.end();i++)
	{
		ofs << i->id << ' ' << i->name << ' ' << i->age << ' ' 
			<< i->gender << ' ' << i->rate << endl;
	}
	ofs.close();
	cout << endl;
}

bool cmp(employee a, employee b)//自定义排序方式的参数
{
	return a.money < b.money;
}

void Sort()
{
	fstream fs;
	fs.open("data.txt", ios::in);
	vector<employee>ans;
	string id, n, g;
	int a, m;
	while (fs >> id && fs >> n && fs >> a && fs >> g && fs >> m)
	{
		employee t;
		t.e_set(id, n, a, g, m);
		ans.push_back(t);
	}
	fs.close();
	fs.open("data.txt", ios::out | ios::trunc);
	sort(ans.begin(), ans.end(), cmp);
	for (unsigned int i = 0;i < ans.size();i++)
	{
		fs << ans[i].id << ' ' << ans[i].name << ' ' << ans[i].age << ' ' 
			<< ans[i].gender << ' ' << ans[i].money << endl;
	}
	cout << "排序完毕" << endl;
	fs.close();
}

void dele()
{
	system("cls");
	string N;
	cout << "请输入要删除的人员姓名:" ;
	cin >> N;
	string id, n, g;
	int a, m;
	fstream fs;
	vector<employee>T;
	fs.open("data.txt", ios::in);
	while (fs >> id && fs >> n && fs >> a && fs >> g && fs >> m)
	{
		employee t;
		if (n != N)
		{
			t.e_set(id, n, a, g, m);
			T.push_back(t);
		}
	}
	fs.close();
	fs.open("data.txt", ios::out | ios::trunc);
	for (unsigned int i = 0;i < T.size();i++)
	{
		fs << T[i].id << ' ' << T[i].name << ' ' << T[i].age << ' ' 
			<< T[i].gender << ' ' << T[i].money << endl;
	}
	fs.close();
	cout << "删除完成" << endl;
	cout << endl;
}

void show()
{
	system("cls");
	fstream fs;
	fs.open("data.txt", ios::in);
	string id, n, g;
	int a, m;

	cout << endl <<"************************************************************" << endl;
	cout << "\t\t系统内已有的员工工资信息表" << endl;

	cout << "工号\t姓名\t年龄\t性别\t工资" << endl;

	while (fs >> id && fs >> n && fs >> a && fs >> g && fs >> m)
	{
		cout << id << '\t' << n << '\t' << a << '\t' << g << '\t' << m << endl;
	}

	fs.close();
	getchar();

	cout << endl;
	cout << endl;
}

void revise()
{
	system("cls");

	int f = 0;
	string id, n, g;
	string N;
	cout << "请输入要修改的人员姓名:" << endl;
	cin >> N;
	int a, m;

	ifstream i;
	ofstream o;
	i.open("data.txt", ios::in);
	o.open("data.txt", ios::app);
	while (i >> id && i >> n && i >> a && i >> g && i >> m)
	{
		if (N == n)
		{
			cout << "查找完成：" << endl;
			cout << "工号：" << id << "姓名：" << n << ' ' << "年龄：" << a << ' '
				<< "性别：" << g << ' ' << "收入：" << m << endl;
			f = 1;
			break;
		}
	}
	if (f == 0)
	{
		cout << "未找到该人员信息" << endl;
		cout << "请重新尝试" << endl;
		return;
	}
	else
	{
		string id, n, g;
		int a, m;
		fstream fs;
		vector<employee>T;
		fs.open("data.txt", ios::in);
		while (fs >> id && fs >> n && fs >> a && fs >> g && fs >> m)
		{
			employee t;
			if (n != N)
			{
				t.e_set(id, n, a, g, m);
				T.push_back(t);
			}
		}
		fs.close();
		fs.open("data.txt", ios::out | ios::trunc);
		for (unsigned int i = 0;i < T.size();i++)
		{
			fs << T[i].id << ' ' << T[i].name << ' ' << T[i].age << ' '
				<< T[i].gender << ' ' << T[i].money << endl;
		}
		fs.close();
	}

	cout << "请输入新的工号:";
	cin >> id;
	cout << "请输入新的姓名:";
	cin >> n;
	cout << "请输入新的年龄:";
	cin >> a;
	cout << "请输入新的性别:";
	cin >> g;
	cout << "请输入新的收入:";
	cin >> m;

	o << id << ' ' << n << ' ' << a << ' ' << g << ' ' << m << ' ' << endl;

	i.close();
	o.close();

	ofstream ofs;
	ofs.open("data.txt", ios::app);
	vector<employee>t;
	for (vector<employee>::iterator i = t.begin();i != t.end();i++)
	{
		ofs << i->id << ' ' << i->name << ' ' << i->age << ' '
			<< i->gender << ' ' << i->money<< endl;
	}
	ofs.close();

	cout << "修改完成！！" << endl;
	cout << endl;
}

