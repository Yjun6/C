#include "payroll.h"

int login()
{
	string n;
	string pwd;

	int p = 1;//1�ҵ�������2�ҵ��˳� 
	int f = 0;//�Ƿ��ҵ� 
	while (p == 1)
	{
		cout << "�������˺ţ�";
		cin >> n;
		cout << "���������룺";
		cin >> pwd;

		string n1;
		string pwd1;

		ifstream i;
		i.open("date.txt", ios::in);
		while (i >> n1 && i >> pwd1)
		{
			if (n1 == n && pwd == pwd1)
			{
				cout << "��¼�ɹ�" << endl;
				return 1;
			}
			
		}
		if (f == 0)
		{
			cout << "��¼ʧ�ܣ������������˺ź�����" << endl;
			cout << "������¼�밴1���˳��밴2" << endl;
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
		cout << "�������˺ţ�����" << endl;
		string n,pwd;
		cin >> n >> pwd;
		u.u_set( n, pwd);
		p.push_back(u);
		cout << "ע��ɹ�" << endl;
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
	int p = 1;//1�ҵ�������2�ҵ��˳� 
	int f = 0;//�Ƿ��ҵ� 
	while (p == 1)
	{
		cout << "��������Ҫ���ҵ�����" << endl;
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
				cout << "������ɣ�" << endl;
				cout << "����" << id << "������" << n << ' ' << "���䣺" << a << ' '
					<< "�Ա�"  << g << ' ' << "���룺" << m << endl;
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
	system("cls");
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
			cout << "�����빤�ţ����������䣬�Ա�" << endl;
			string n, g, i;
			int a;
			cin >> i >> n >> a >> g;
			m.m_set(i, n, a, g);
			t1.push_back(m);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 2)
		{
			Technician t;
			cout << "�����빤�ţ����������䣬�Ա𣬹���ʱ��" << endl;
			string i, n, g;
			int a, h;
			cin >> i >> n >> a >> g >> h;
			t.m_set(i, n, a, g, h);
			t2.push_back(t);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 3)
		{
			Salesman S;
			cout << "�����빤�ţ����������䣬�Ա����" << endl;
			string i, n, g;
			int a, r;
			cin >> i >> n >> a >> g >> r;
			S.S_set(i, n, a, g, r);
			t3.push_back(S);
			cout << "¼��ɹ�" << endl;
		}
		else if (k == 4)
		{
			SalesManager S;
			cout << "�����빤�ţ����������䣬�Ա����" << endl;
			string i, n, g;
			int a, r;
			cin >> i >> n >> a >> g >> r;
			S.Sm_set(i ,n, a, g, r);
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

bool cmp(employee a, employee b)//�Զ�������ʽ�Ĳ���
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
	cout << "�������" << endl;
	fs.close();
}

void dele()
{
	system("cls");
	string N;
	cout << "������Ҫɾ������Ա����:" ;
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
	cout << "ɾ�����" << endl;
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
	cout << "\t\tϵͳ�����е�Ա��������Ϣ��" << endl;

	cout << "����\t����\t����\t�Ա�\t����" << endl;

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
	cout << "������Ҫ�޸ĵ���Ա����:" << endl;
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
			cout << "������ɣ�" << endl;
			cout << "���ţ�" << id << "������" << n << ' ' << "���䣺" << a << ' '
				<< "�Ա�" << g << ' ' << "���룺" << m << endl;
			f = 1;
			break;
		}
	}
	if (f == 0)
	{
		cout << "δ�ҵ�����Ա��Ϣ" << endl;
		cout << "�����³���" << endl;
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

	cout << "�������µĹ���:";
	cin >> id;
	cout << "�������µ�����:";
	cin >> n;
	cout << "�������µ�����:";
	cin >> a;
	cout << "�������µ��Ա�:";
	cin >> g;
	cout << "�������µ�����:";
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

	cout << "�޸���ɣ���" << endl;
	cout << endl;
}

