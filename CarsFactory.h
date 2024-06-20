#pragma once

class Cars {
public:
	virtual void print() = 0;
};

class Sedan: public Cars {
	virtual void print() { cout << "� ���������� ���� �����!\n"; };
};

 class Hatchback : public Cars {
	 virtual void print() { cout << "� ���������� ���� �������!\n"; };
 };
 class Convertible : public Cars {
	 virtual void print() { cout << "� ���������� ���� ���������!\n"; };
 };

 class FactoryCars {
 public:
	 static std::unique_ptr<Cars> GetCars(string& value) {
		 if (value == "�����") return std::make_unique<Sedan>();
		 if (value == "�������") return std::make_unique<Hatchback>();
		 if (value == "���������") return std::make_unique<Convertible>();
		 throw std::runtime_error("�������� ������!\n");
	 }
 };