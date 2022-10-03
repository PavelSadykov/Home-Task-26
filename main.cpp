//
//  main.cpp
//  C++ ДЗ 26
//
//  Created by Павел on 02.10.2022.
//

#include <iostream>
#include <string>
using namespace std;

struct movies{
    string title;
    int year;
    string genre;
    unsigned int duration;
    unsigned int price;
};

void fill_movie(movies &P);
void show_movie(movies &P);
string expensive(movies *C,movies *A,movies *B);
void update_info(movies &P);

int main(int argc, const char * argv[]) {
   
    movies P;
    movies A;
    movies B;
    movies C;
    movies *pP=&P;
    movies *pC=&C;
    movies *pA=&A;
    movies *pB=&B;
    
    cout<<"Задача 1.\n";
    fill_movie(P);
    show_movie(P);
    
    cout<<"\nЗадача 2.\n";
    cout<<"Фильм 1: ";
    fill_movie(A);
   // show_movie(A);
    cout<<"Фильм 2: ";
    fill_movie(B);
   // show_movie(B);
    cout<<"Фильм 3: ";
    fill_movie(C);
   // show_movie(C);
    cout<<"Фильм с самой высокой ценой : \n";
    cout<< expensive (pA, pB, pC)<<endl;
    
    cout<<"\nЗадача 3.\n";
    show_movie(P);
    update_info(P);
    cout<<  "Новая информация :\n";
    show_movie(P);
    string quest;
    cout<<"Продолжить изменения информации?-yes/-no\n";
    cin>>quest;
    if(quest=="yes"){
        update_info(P);
        show_movie(P);
        cout<<endl;
    }else
    cout<<endl;
    return 0;
}
void fill_movie(movies &P){
    
    cout<<"Введите название фильма: ";
    cin>>P. title;
    cout<<"Введите год выпуска фильма :";
    cin>>P.year;
    cout<<"Введите жанр фильма: ";
    cin>>P.genre;
    cout<<"Введите продолжительность фильма в мин. : ";
    cin>>P.duration;
    cout<<"Введите цену фильма : ";
    cin>>P.price;
    cout<<endl;
}

void show_movie(movies &P){
    cout<<"Название фильма: "<<P.title<<endl;
    cout<<"Год выпуска фильма :"<<P.year<<endl;
    cout<<"Жанр фильма: "<<P.genre<<endl;
    cout<<"Продолжительность фильма в мин. : "<<P.duration<<endl;
    cout<<"Цена  фильма : "<<P.price<<endl;
    
}

string expensive(movies *C,movies *A, movies *B){
    string film;
if(C->price > A->price){
        if(C->price > B->price){
            film=C->title;
        }else
        film=B->title;
    return film;
}else
    if(A->price > B->price){
        film=A->title;
    }else
        film=B->title;
    return film;
}

void update_info(movies &P){
    int x;
    string title_1;
    int year_1;
    string genre_1;
    unsigned int duration_1;
    unsigned int price_1;
    
    cout<<"\nВыберите, какую информацию о фильме необходимо обновить:\n";
    cout<<"1. Название\n";
    cout<<"2. Год выхода\n";
    cout<<"3. Жанр\n";
    cout<<"4. Продолжительность\n";
    cout<<"5. Цена за диск\n";
    cout<<"Ввод ->";
    cin>>x;
    switch (x) {
        case 1:
            cout<<"Введите новое название фильма: Ввод ->";
            cin>>title_1;
            P.title=title_1;
            cout<<"\nИнформация обновлена!\n\n";
            break;
        case 2:
            cout<<"Введите новый год выхода фильма: Ввод ->";
            cin>>year_1;
            P.year=year_1;
            cout<<"\nИнформация обновлена!\n\n";
            break;
        case 3:
            cout<<"Введите новый жанр фильма: Ввод ->";
            cin>>genre_1;
            P.genre=genre_1;
            cout<<"\nИнформация обновлена!\n\n";
            break;
        case 4:
            cout<<"Введите новую продолжительность фильма в мин. : Ввод ->";
            cin>>duration_1;
            P.duration=duration_1;
            cout<<"\nИнформация обновлена!\n\n";
            break;
        case 5:
            cout<<"Введите новую цену фильма:  Ввод ->";
            cin>>price_1;
            P.price=price_1;
            cout<<"\nИнформация обновлена!\n\n";
            break;
            
    }
    }
    
  
    
    
    
    
 
