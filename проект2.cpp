#include <cstdlib>
#include<iostream>
#include <ctime>
#include<string.h>
using namespace std;
int day = 1;
class student{
	public:
	bool b[5] = {true,true,true,true,true}; 	//масив для проверки(использовать данную историю или нет)
	int s=0;
	string str;
	student(){ 									//конструктор
	};                                           
	student(const student& s){					//конструктор коприрования
	};	
	student(const int s){                       //конструктор с параметром
	};
	void story(int a){							//метод с историями Петра
		if(a == 0){
		b[0] = false;
		cout << "Пётр и Марина сегодня в универе.Пётр решил что этого раза хватит."<< endl;
		day++;
	}
		else if(a == 1){
		b[1] = false;
		cout << "Пётр и Марина сегодня сели на диету.Пётр понял что СЛОНИК плохой комплемент, особенно для девушки"<< endl;     // !!!
		day++;
	}
		else if(a == 2){
		b[2] = false;
		cout << "Пётр и Марина сегодня перебераются в общагу.Их встретили тараканы выстроевшиеся в слово БЕГИТЕ "<< endl;
		day++;
	}
		else if(a == 3){
		b[3] = false;
		cout << "Пётр и Марина утром остались без света.Пётр понял, лингвисты плохо чинят розетки"<< endl;
		day++;
	}
		else if(a == 4){
		b[4] = false;
		cout << "Пётр и Марина сегодня идут первый раз в гости к родиелям Марины.Киевские вороны обещают Петру много денег"<< endl;
		day++;
		}
	}
	void story1(int a){								//метод с историями Марины
		if(a == 0){
		b[0] = false;
		cout << "Пётр и Марина сегодня встречают Новый Год. Марина пообещала себе припомнить эти носки."<< endl;
		day++;
	}
		else if(a == 1){
		b[1] = false;
		cout << "Пётр и Марина сегодня устраиваються на роботу.Марина так и не поняла чем занимается инженер-технолог высокомолекулярных соединений."<< endl;
		day++;
	}
		else if(a == 2){
		b[2] = false;
		cout << "Пётр и Марина сегодня получают степендию.Марина поняла что Дед Мороз не получил письмо."<< endl;
		day++;
	}
		else if(a == 3){
		b[3] = false;
		cout << "Пётр и Марина сегодня встречают Катю с поезда.Марина давно знала что у Сани нет девушки."<< endl;
		day++;
	}
		else if(a == 4){
		b[4] = false;
		cout << "Пётр и Марина сегодня сдают сесию.Ночью Марина определила что физика горит ярче химии"<< endl;
		day++;
		}
	}
	void story2(int a){								//метод с историями Сани
		if(a == 0){
		b[0] = false;
		cout << "Сегодня пришел в гости Саня.Утром никто не знал откуда в комнате обезьяна"<< endl;
		day++;
	}
		else if(a == 1){
		b[1] = false;
		cout << "Сегодня пришел в гости Саня.Больше он не будет проверять что лампочку нельзя засунуть в рот"<< endl;
		day++;
	}
		else if(a == 2){
		b[2] = false;
		cout << "Сегодня пришел в гости Саня.Вечер пятницы был похоронен под пазлами"<< endl;
		day++;
	}
		else if(a == 3){
		b[3] = false;
		cout << "Сегодня пришел в гости Саня. Больше в карты с фокусником Пётр и Марина не играют"<< endl;
		day++;
	}
		else if(a == 4){
		b[4] = false;
		cout << "Сегодня пришел в гости Саня.Писать эту программу стало веселей"<< endl;
		day++;
		}
	}
	void getStudent()								//метод для остановки после каждого дня
	{
	getline(cin,str);
	}
	void setStudent(){								//метод для вывода дня
		cout << "День " << day<<endl;
	}
	virtual void stop(){							//метод после окончания программы, пришел деканат(виртуал)
		cout << "Сегодня пришел деканат.Тепер Саня ходит в универ,а не к Петру и Марине" << endl;
	}
};
class End:public student{							//производный класс от студента - конец(объект деканат)
	
	
};
class tryithard{
	public:
	tryithard(){
	};	
	void pod(){		
			cout<<"Петра забрали в армию.Конец"<< endl;
		}
};
int main(){
	srand ( time(NULL) );                           //для установки рандомных чисел
	setlocale(LC_ALL, "Russian");					//для вывода на русском
	int num,random;									//переменные для работы с рандомным воводом истории одного из персонажей, переменная для рандомного выбора персонажа  
	bool log = true;								//для проверки конца
	End dekanat;
	student Petr;									//объект Пётр
	student Marina(Petr);							//объект Марина
	student Alex(7);								//объект Саня
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
