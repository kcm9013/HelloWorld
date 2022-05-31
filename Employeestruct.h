#pragma once

struct Employee
{
	char firstInitial;
	char lastInitial;
	int employeeNumber;
	//int salary; //Enum Class는 타입을 변경할 수 없다.

	//직원 레코드 생성 및 값 채우기
	Employee anEmployee;
	anEmployee.firstInital = 'M';
	anEmployee.lastInitial = 'G';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	// 직원 레코드에 저장된 값 출력하기
	cout << "Employee: " << anEmployee.firstInitial << anEmployee.lastInitial << endl;
	cout << "Number: " << anEmployee.employeeNumber << endl;
	cout << "Salary: $" << anEmployee.salary << end;
	return 0;
};