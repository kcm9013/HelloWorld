#pragma once

struct Employee
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	//int salary; //Enum Class�� Ÿ���� ������ �� ����.

	//���� ���ڵ� ���� �� �� ä���
	Employee anEmployee;
	anEmployee.firstInital = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	// ���� ���ڵ忡 ����� �� ����ϱ�
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << end;
	return 0;
};