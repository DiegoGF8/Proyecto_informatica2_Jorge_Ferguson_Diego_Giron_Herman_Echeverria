#pragma once
#include <iostream>
#include <string>

ref class Sector
{
private:

	System::String^ nivel;
	System::String^ aula;
	System::String^ edificio;
	System::String^ area;
	

public:

	Sector() {
		this->area = "";
		this->aula = "";
		this->edificio = "";
		this->nivel = "";
	}
	~Sector() {}
	void setnivel(System::String^ nivel) {
		this->nivel = nivel;
	}

	void setaula(System::String^ aula) {
		this->aula = aula;
	}

	void setEdificio(System::String^ edificio) {
		this->edificio = edificio;
	}

	void setarea(System::String^ area) {
		this->area = area;
	}

	System::String^ getNivel() {
		return this->nivel;
	}

	System::String^ getaula() {
		return this->aula;
	}

	System::String^ getedificio() {
		return this->edificio;

	}
	System::String^ getarea() {
		return this->area;
	}

	
	
};



