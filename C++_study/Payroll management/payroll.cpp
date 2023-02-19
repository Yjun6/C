#define _CRT_SECURE_NO_WARNINGS 1

#include"payroll.h"

void find()
{
	int p = 1;//1�ҵ�������2�ҵ��˳� 
	int f = 0;//�Ƿ��ҵ� 
	while (p == 1)
	{
		cout << "��������Ҫ���ҵ�����" << endl;
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
				cout << "������ɣ�" << endl;
				cout << "������" << n << ' ' << "���䣺" << a << ' ' << g << ' ' << "���룺" << m << endl;
				cout << "���������밴1���˳��밴2" << endl;
				cin >> p;
				f = 1;
				break;
			}
		}
		if (f == 0)
		{
			cout << "δ�ҵ�����Ա��Ϣ" << endl;
			cout << "���������밴1���˳��밴2" << endl;
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
	//��Ϊ������Ա֮������ݲ�һ�������Էֿ���
	while (1)
	{
		cout << "��ѡ��Ҫ¼�����Ա���ͣ�1.����  2.������Ա  3.������Ա  4.���۾���  5.�˳�" << endl;;
		cin >> k;
		if (k == 1)
		{
			Manager m;
			cout << "���������������䣬�Ա�" << endl;
			string n, g;
			int a;
			cin >> n >> a >> g;
			m.m_set(n, a, g);
			t1.push_back(m);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 2)
		{
			Technician t;
			cout << "���������������䣬�Ա𣬹���ʱ��" << endl;
			string n, g;
			int a, h;
			cin >> n >> a >> g >> h;
			t.m_set(n, a, g, h);
			t2.push_back(t);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 3)
		{
			Salesman S;
			cout << "���������������䣬�Ա����" << endl;
			string n, g;
			int a, r;
			cin >> n >> a >> g >> r;
			S.S_set(n, a, g, r);
			t3.push_back(S);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 4)
		{
			SalesManager S;
			cout << "���������������䣬�Ա����" << endl;
			string n, g;
			int a, r;
			cin >> n >> a >> g >> r;
			S.Sm_set(n, a, g, r);
			t4.push_back(S);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 5)
		{
			cout << "¼�����" << endl;
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

bool cmp(employee a, employee b)//�Զ�������ʽ�Ĳ���
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
	cout << "�������" << endl;
	fs.close();
}

void dele()
{
	string N;
	cout << "������Ҫɾ������Ա����:" << endl;
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
	cout << "ɾ�����" << endl;
	cout << endl;
}

void show()
{
	fstream fs;
	fs.open("data.txt", ios::in);
	string n, g;
	int a, m;

	cout << "************************************************************" << endl;
	cout << "\t\tϵͳ�����е�Ա��������Ϣ��" << endl;

	cout << "����\t����\t�Ա�\t����" << endl;

	while (fs >> n && fs >> a && fs >> g && fs >> m)
	{
		cout << n << '\t' << a <<'\t' << g << '\t' << m << endl;
	}

	fs.close();
	getchar();

	cout << endl;
	cout << endl;
}
