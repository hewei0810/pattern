// Observer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Observer.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CSubject *pSubject = new CSubject;
	pSubject->Attatch(new CConcreteObserverA);
	pSubject->Attatch(new CConcreteObserverB);

	pSubject->Notify(1,2);
	fgetc(stdin);

	return 0;
}

