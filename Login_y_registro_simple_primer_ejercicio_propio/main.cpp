
#include <iostream>
#include <windows.h>
#include <mysql.h>
#include <string.h>
#include <sstream>
#include <stdlib.h>
#include "Users.h"

using namespace std;


void Menu();
void getLogin(string, string);
void setRegister(string, string);
string password, username;

int main()
{
        cout<<"Escriba su username: "; getline(cin,username);
        cout<<"Escriba su contraseña: "; getline(cin,password);
        Users* user1= new Users(username,password);
        Menu();


    return 0;
}
//funcion para mostrar el menu
void Menu(){
           int opcion;
           char respuesta;
           do{
            cout<<"\t.:MENU:."<<endl;
            cout<<"Escriba la opcion que desee: "<<endl;
            cout<<"1. Entrar."<<endl;
            cout<<"2. Registrarse"<<endl;
            cout<<"3. Salir."<<endl;
            cin>>opcion;

            switch(opcion){
                case 1:
                    getLogin(username, password);
                    system("pause");
                break;
                case 2:
                    setRegister(username, password);
                    cout<<"Para volver a acceder, por favor, reinicie el programa.";
                    system("pause");
                break;
                case 3:
                break;
            }
            system("cls");
           }while(opcion != 3);


       }

//funcion para hacer el login y mostrar los datos
void getLogin(string username, string password){

     //check connection
    MYSQL* conn=NULL; //definimos como null ya que sino puede dar problemas.
    MYSQL_ROW row; //asignamos las columnas
    MYSQL_RES* res; //asignamos el resultado

    //inicializamos
    conn =  mysql_init(0);
    conn = mysql_real_connect(conn,"192.168.1.37","test","test","test",0,NULL,0 );
    if(conn){
        int qstate =0;
        stringstream ss;

        //query
        ss <<"SELECT users_id,users_name,users_age, users_gender from users where users_username='"<<username<<"' and users_password='"<<password<<"'";

        string query= ss.str();
        const char* q=query.c_str(); //ponemos la variable q a char ya que la funcion mysql_query solo acepta chars
        qstate=mysql_query(conn, q);
        if(!qstate){
            res = mysql_store_result(conn);
            while(row = mysql_fetch_row(res)){
                cout<<"El id de usuario es: " <<row[0]<<endl;
                cout<<"El nombre de usuario es: " <<row[1]<<endl;
                cout<<"La edad del usuario es: " <<row[2]<<endl;
                cout<<"El sexo del usuario es: " <<row[3]<<endl;
            }
        }
    }else{
        cout<<"Failed"<<endl;
    }


}

//funcion para hacer el registro
void setRegister(string username, string password){
      //check connection
    MYSQL* conn=NULL;
    conn =  mysql_init(0);
    conn = mysql_real_connect(conn,"192.168.1.37","test","test","test",0,NULL,0 );
    if(conn){
        //insert
        int qstate =0;
        stringstream ss;
        //query
        ss <<"INSERT INTO users (users_username,users_password) VALUES ('"<<username<<"','"<<password<<"')";

        string query= ss.str();
        const char* q=query.c_str(); //ponemos a variable q a char ya que la funcion mysql_query solo acepta chars
        qstate=mysql_query(conn, q);
        if(qstate==0){ //miramos si se ha ejecutado bien.
            cout<<"Success";
        }else{
        cout<<"Failed";
        }
    }else{
        cout<<"Failed"<<endl;
    }

    //Select
}
