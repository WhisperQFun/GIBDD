#pragma once
using namespace System;


public ref class Data_gibdd
{
public:
	String^ id;
	String^ type;
	String^ model;
	String^ vin;
	String^ owners_id;
	String^ date;
	String^ insearch;
	
};

public ref class Data_users
{
public:
	String^ users_id;
	String^ password;
	String^ login;
	String^ is_admin;
	
};


public ref class Data_owners
{
public:
	String^ owners_id;
	String^ owner;
	String^ passport_series;
	String^ passport_number;
};


/*String^ Table_Colums_Name = "id INTEGER PRIMARY KEY, type STRING, model STRING, vin STRING, owners_id INTEGER, date STRING, insearch BOOLEAN";
String^ Table_name = "GIBDD";
String^ Colums_Name_2 = "users_id INTEGER PRIMARY KEY, password STRING, login STRING, is_admin BOOLEAN";
String^ DB_name_2 = "USERS";
String^ DB_name_3 = "OWNERS";
String^ Colums_Name_3 = "owners_id INTEGER PRIMARY KEY, owner STRING, passport_series STRING, passport_number STRING";
*/