#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<dirent.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<cstdio>
#include <pwd.h>
#include <grp.h>
#include <iomanip>
#include"head.h"

using namespace std;

int main(int argc, char*argv[])
{	
	char* filepath;
	char* path;
	if (argc < 2) {
		if ((filepath = getcwd(NULL, 0)) == NULL) {
			cout << "getcwd error" << endl;
		}
	}
	if (argc == 2) {
		if ((filepath = getcwd(NULL, 0)) == NULL) {
			cout << "getcwd error" << endl;
		}
		char c[] = "/";
		strcat(filepath,c );
		strcat(filepath,argv[1]);
		chdir(filepath);//ʹ���޸Ĺ����filepathΪ����Ŀ¼
	}
	if (argc > 2) {
		cout << "too many parameters" << endl;
		exit(0);
		//��ʱδ�ܳɹ�����ʵ��
	}
	
	struct stat file_message = {};
	int ret_stat = lstat(filepath, &file_message);
	if (S_ISDIR(file_message.st_mode)) //�ж��Ƿ���Ŀ¼�ļ�
	{
		vector<string> files;//���Ŀ¼���ļ���
		vector<string> types;//���Ŀ¼���ļ�����
		getDirFile(filepath, files);
		getDirType(filepath, types);
		for (auto i = 0; i < files.size(); ++i)  //ͨ��for����ӡ��Ϣ
		{
			struct stat dirfile_message;
			int ret_opendir = open(files[i].c_str(), O_RDONLY); //open���Է����ļ�������
			fstat(ret_opendir, &dirfile_message);                  //fstat����ͨ���ļ������������Ƶ�����struct stat file_message �ṹ�������
			if (ret_opendir == -1) // stat��ȡ�ļ������������ʾ��Ϣ
				cout << files[i] << "error!" << endl;;
			cout << types[i];
			file_power(&dirfile_message);
			file_nlink(&dirfile_message);
			file_id(&dirfile_message);
			file_size(&dirfile_message);
			file_mtime(&dirfile_message);
			cout << files[i] << endl;
		}
	}
	else {
		int ret = open(argv[1], O_RDONLY); //open���Է����ļ�������
		fstat(ret, &file_message);
		if (ret == -1) {// stat��ȡ�ļ������������ʾ��Ϣ
			cout << argv[1] << " error!" << endl;
			exit(0);
		}
		file_type(&file_message);
		file_power(&file_message);
		file_nlink(&file_message);
		file_id(&file_message);
		file_size(&file_message);
		file_mtime(&file_message);
		cout << argv[1] << endl;
	}

	return 0;
}

