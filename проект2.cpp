#include <cstdlib>
#include<iostream>
#include <ctime>
#include<string.h>
using namespace std;
int day = 1;
class student{
	public:
	bool b[5] = {true,true,true,true,true}; 	//����� ��� ��������(������������ ������ ������� ��� ���)
	int s=0;
	string str;
	student(){ 									//�����������
	};                                           
	student(const student& s){					//����������� ������������
	};	
	student(const int s){                       //����������� � ����������
	};
	void story(int a){							//����� � ��������� �����
		if(a == 0){
		b[0] = false;
		cout << "ϸ�� � ������ ������� � �������.ϸ�� ����� ��� ����� ���� ������."<< endl;
		day++;
	}
		else if(a == 1){
		b[1] = false;
		cout << "ϸ�� � ������ ������� ���� �� �����.ϸ�� ����� ��� ������ ������ ����������, �������� ��� �������"<< endl;     // !!!
		day++;
	}
		else if(a == 2){
		b[2] = false;
		cout << "ϸ�� � ������ ������� ������������ � ������.�� ��������� �������� ������������� � ����� ������ "<< endl;
		day++;
	}
		else if(a == 3){
		b[3] = false;
		cout << "ϸ�� � ������ ����� �������� ��� �����.ϸ�� �����, ��������� ����� ����� �������"<< endl;
		day++;
	}
		else if(a == 4){
		b[4] = false;
		cout << "ϸ�� � ������ ������� ���� ������ ��� � ����� � �������� ������.�������� ������ ������� ����� ����� �����"<< endl;
		day++;
		}
	}
	void story1(int a){								//����� � ��������� ������
		if(a == 0){
		b[0] = false;
		cout << "ϸ�� � ������ ������� ��������� ����� ���. ������ ��������� ���� ���������� ��� �����."<< endl;
		day++;
	}
		else if(a == 1){
		b[1] = false;
		cout << "ϸ�� � ������ ������� ������������� �� ������.������ ��� � �� ������ ��� ���������� �������-�������� ������������������ ����������."<< endl;
		day++;
	}
		else if(a == 2){
		b[2] = false;
		cout << "ϸ�� � ������ ������� �������� ���������.������ ������ ��� ��� ����� �� ������� ������."<< endl;
		day++;
	}
		else if(a == 3){
		b[3] = false;
		cout << "ϸ�� � ������ ������� ��������� ���� � ������.������ ����� ����� ��� � ���� ��� �������."<< endl;
		day++;
	}
		else if(a == 4){
		b[4] = false;
		cout << "ϸ�� � ������ ������� ����� �����.����� ������ ���������� ��� ������ ����� ���� �����"<< endl;
		day++;
		}
	}
	void story2(int a){								//����� � ��������� ����
		if(a == 0){
		b[0] = false;
		cout << "������� ������ � ����� ����.����� ����� �� ���� ������ � ������� ��������"<< endl;
		day++;
	}
		else if(a == 1){
		b[1] = false;
		cout << "������� ������ � ����� ����.������ �� �� ����� ��������� ��� �������� ������ �������� � ���"<< endl;
		day++;
	}
		else if(a == 2){
		b[2] = false;
		cout << "������� ������ � ����� ����.����� ������� ��� ��������� ��� �������"<< endl;
		day++;
	}
		else if(a == 3){
		b[3] = false;
		cout << "������� ������ � ����� ����. ������ � ����� � ���������� ϸ�� � ������ �� ������"<< endl;
		day++;
	}
		else if(a == 4){
		b[4] = false;
		cout << "������� ������ � ����� ����.������ ��� ��������� ����� �������"<< endl;
		day++;
		}
	}
	void getStudent()								//����� ��� ��������� ����� ������� ���
	{
	getline(cin,str);
	}
	void setStudent(){								//����� ��� ������ ���
		cout << "���� " << day<<endl;
	}
	virtual void stop(){							//����� ����� ��������� ���������, ������ �������(�������)
		cout << "������� ������ �������.����� ���� ����� � ������,� �� � ����� � ������" << endl;
	}
};
class End:public student{							//����������� ����� �� �������� - �����(������ �������)
	
	
};
class tryithard{
	public:
	tryithard(){
	};	
	void pod(){		
			cout<<"����� ������� � �����.�����"<< endl;
		}
};
int main(){
	srand ( time(NULL) );                           //��� ��������� ��������� �����
	setlocale(LC_ALL, "Russian");					//��� ������ �� �������
	int num,random;									//���������� ��� ������ � ��������� ������� ������� ������ �� ����������, ���������� ��� ���������� ������ ���������  
	bool log = true;								//��� �������� �����
	End dekanat;
	student Petr;									//������ ϸ��
	student Marina(Petr);							//������ ������
	student Alex(7);								//������ ����
	tryithard object;
	while(log){							
	random = 1 + rand() % 4;
	if(random==1){
		num = rand() % 5;
		if(Petr.b[num]){
		Petr.getStudent();
		Petr.setStudent();
		Petr.story(num);
		}
	}
	if(random==2){
		num = rand() % 5;
		if(Marina.b[num]){
		Marina.getStudent();
		Marina.setStudent();
		Marina.story1(num);
		}
	}
	if(random==3){
		num = rand() % 5;
		if(Alex.b[num]){
		Alex.getStudent();
		Alex.setStudent();
		Alex.story2(num);
		}
	}
	if(random == 4){
	object.pod();
	log = false;
	};
		
		
		if(Petr.b[0]==false && Petr.b[1]==false && Petr.b[2]==false && Petr.b[3]==false && Petr.b[4]==false && Marina.b[0]==false && Marina.b[1]==false && Marina.b[2]==false && Marina.b[3]==false && Marina.b[4]==false && Alex.b[0]==false && Alex.b[1]==false && Alex.b[2]==false && Alex.b[3]==false && Alex.b[4]==false) log =false;
		
	}
	if((Petr.b[0]==false && Petr.b[1]==false && Petr.b[2]==false && Petr.b[3]==false && Petr.b[4]==false && Marina.b[0]==false && Marina.b[1]==false && Marina.b[2]==false && Marina.b[3]==false && Marina.b[4]==false && Alex.b[0]==false && Alex.b[1]==false && Alex.b[2]==false && Alex.b[3]==false && Alex.b[4]==false)) dekanat.stop();
	
}
