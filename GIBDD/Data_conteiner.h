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


