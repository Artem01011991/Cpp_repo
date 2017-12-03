#pragma once


class Human {
	char *_name;

public:
	Human() = default;
	Human(int name_size);
	Human(const Human &obj);
	~Human();

	void SET_name();
	char* GET_name() const;
};


class Flat {
	int _flat_count;
	Human *_h_obj;

public:
	Flat() = default;
	Flat(const Flat &obj);
	Flat(int flat_num);
	~Flat();

	int GET_number() const;
};


class House {
	int _house_number;
	Flat *_f_obj;

public:
	House() = default;
	House(House *obj);

	void SET_number();
};