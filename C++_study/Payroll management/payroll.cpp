#define _CRT_SECURE_NO_WARNINGS 1

#include"payroll.h"

void find()
{
	int p = 1;//1找到继续，2找到退出 
	int f = 0;//是否找到 
	while (p == 1)
	{
		cout << "请输入需要查找的姓名" << endl;
		string n;
		cin >> n;
		string t, g;
		int a, m;
		ifstream i;
		i.open("data.txt", ios::in);
		while (i >> t && i >> a && i >> g && i >> m)
		{
			if (t == n)
			{
				cout << "查找完成：" << endl;
				cout << "姓名：" << n << ' ' << "年龄：" << a << ' ' << g << ' ' << "收入：" << m << endl;
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
			cout << "请输入姓名，年龄，性别" << endl;
			string n, g;
			int a;
			cin >> n >> a >> g;
			m.m_set(n, a, g);
			t1.push_back(m);
			cout << "录入成功" << endl;
		}
		else if (k == 2)
		{
			Technician t;
			cout << "请输入姓名，年龄，性别，工作时间" << endl;
			string n, g;
			int a, h;
			cin >> n >> a >> g >> h;
			t.m_set(n, a, g, h);
			t2.push_back(t);
			cout << "录入成功" << endl;
		}
		else if (k == 3)
		{
			Salesman S;
			cout << "请输入姓名，年龄，性别，提成" << endl;
			string n, g;
			int a, r;
			cin >> n >> a >> g >> r;
			S.S_set(n, a, g, r);
			t3.push_back(S);
			cout << "录入成功" << endl;
		}
		else if (k == 4)
		{
			SalesManager S;
			cout << "请输入姓名，年龄，性别，提成" << endl;
			string n, g;
			int a, r;
			cin >> n >> a >> g >> r;
			S.Sm_set(n, a, g, r);
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
		ofs << i->name << ' ' << i->age << ' ' << i->gender << ' ' << i->monthly_salary << endl;
	}
	ofs.close();


	ofs.open("data.txt", ios::app);

	for (vector<Technician>::iterator i = t2.begin();i != t2.end();i++)
	{
		ofs << i->name << ' ' << i->age << ' ' << i->gender << ' ' << i->hourly_salary << endl;
	}
	ofs.close();

	ofs.open("data.txt", ios::app);

	for (vector<Salesman>::iterator i = t3.begin();i != t3.end();i++)
	{
		ofs << i->name << ' ' << i->age << ' ' << i->gender << ' ' << i->rate << endl;
	}
	ofs.close();


	ofs.open("data.txt", ios::app);

	for (vector<SalesManager>::iterator i = t4.begin();i != t4.end();i++)
	{
		ofs << i->name << ' ' << i->age << ' ' << i->gender << ' ' << i->rate << endl;
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
	string n, g;
	int a, m;
	while (fs >> n && fs >> a && fs >> g && fs >> m)
	{
		employee t;
		t.e_set(n, a, g, m);
		ans.push_back(t);
	}
	fs.close();
	fs.open("data.txt", ios::out | ios::trunc);
	sort(ans.begin(), ans.end(), cmp);
	for (unsigned int i = 0;i < ans.size();i++)
	{
		fs << ans[i].name << ' ' << ans[i].age << ' ' << ans[i].gender << ' ' << ans[i].money << endl;
	}
	cout << "排序完毕" << endl;
	fs.close();
}

void dele()
{
	string N;
	cout << "请输入要删除的人员姓名:" << endl;
	cin >> N;
	string n, g;
	int a, m;
	fstream fs;
	vector<employee>T;
	fs.open("data.txt", ios::in);
	while (fs >> n && fs >> a && fs >> g && fs >> m)
	{
		employee t;
		if (n != N)
		{
			t.e_set(n, a, g, m);
			T.push_back(t);
		}
	}
	fs.close();
	fs.open("data.txt", ios::out | ios::trunc);
	for (unsigned int i = 0;i < T.size();i++)
	{
		fs << T[i].name << ' ' << T[i].age << ' ' << T[i].gender << ' ' << T[i].money << endl;
	}
	fs.close();
	cout << "删除完成" << endl;
	cout << endl;
}

void show()
{
	fstream fs;
	fs.open("data.txt", ios::in);
	string n, g;
	int a, m;

	cout << "************************************************************" << endl;
	cout << "\t\t系统内已有的员工工资信息表" << endl;

	cout << "姓名\t年龄\t性别\t工资" << endl;

	while (fs >> n && fs >> a && fs >> g && fs >> m)
	{
		cout << n << '\t' << a <<'\t' << g << '\t' << m << endl;
	}

	fs.close();
	getchar();

	cout << endl;
	cout << endl;
}
