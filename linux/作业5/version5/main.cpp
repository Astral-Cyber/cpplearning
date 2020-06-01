#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "CPluginController.h"

using namespace std;

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (strcmp(argv[1], "help") == 0)//��������
		{
			CPluginController pc;
			pc.ProcessHelp();
			return 0;
		}
		else
		{
			int FunctionID = atoi(argv[1]);
			CPluginController pc;
			pc.InitializeController();
			pc.ProcessRequest(FunctionID);
			pc.UninitializeController();
			return 0;
		}
	}
	else if (argc == 3)
	{
		CPluginController ptr;
		char *Function = argv[1];
		char *File = argv[2];//�������ļ���
		ptr.InitializeController();
		if (ptr.IfProcess(Function) == false)//�жϲ���Ƿ����
		{
			cout << "No this plugin!" << endl;
		}
		else
		{
			ptr.ProcessFunction(Function, File);
		};
		ptr.UninitializeController();
		return 0;
	}
	else
	{
		cout << "Parameters error" << endl;
		return 0;
	}
}

