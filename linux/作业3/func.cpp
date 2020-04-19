#include"head.h"


void getDirFile(char* path, vector<string>& files) //�õ�Ŀ¼�µ��ļ�
{
	DIR *dir;
	struct dirent *ptr;
	if ((dir = opendir(path)) == NULL) {
		perror("open dir error");
		exit(-1);
	}
	while ((ptr = readdir(dir)) != NULL) {
		if (strcmp(ptr->d_name, ".") == 0 || strcmp(ptr->d_name, "..") == 0)
			continue;
		files.push_back(ptr->d_name);
	}
}

void getDirType(char* path, vector<string>&types)//�õ�Ŀ¼���ļ�������
{
	DIR *dir;
	struct dirent *ptr;
	if ((dir = opendir(path)) == NULL) {
		perror("open dir error");
		exit(-1);
	}
	while ((ptr = readdir(dir)) != nullptr) {
		if (strcmp(ptr->d_name, ".") == 0 || strcmp(ptr->d_name, "..") == 0)
			continue;
		else if (ptr->d_type == 0)//unknown file
			continue;
		else if (ptr->d_type == 1)//FIFO file
			types.push_back("p");
		else if (ptr->d_type == 2)//character device
			types.push_back("c");
		else if (ptr->d_type == 4) //directory file
			types.push_back("d");
		else if (ptr->d_type == 6)//block device
			types.push_back("b");
		else if (ptr->d_type == 8)//regular file
			types.push_back("-");
		else if (ptr->d_type == 10)//Link File
			types.push_back("l");
		else if (ptr->d_type == 12)// UNIX domain socket
			types.push_back("s");
		else if (ptr->d_type == 14)// 
			continue;
	}
}

void file_type(const struct stat* file_message) //�õ��ļ�������
{
	mode_t mode = file_message->st_mode;

	if (S_ISREG(mode))       cout << "-"; // regular file
	else if (S_ISDIR(mode))  cout << "d"; // directory
	else if (S_ISCHR(mode))  cout << "c"; // character device
	else if (S_ISBLK(mode))  cout << "b"; // block device
	else if (S_ISFIFO(mode)) cout << "p"; // FIFO file
	else if (S_ISLNK(mode))  cout << "l"; // Link File
	else					 cout << "s"; // UNIX domain socket
}


void file_nlink(const struct stat *file_message)//�õ��ļ���Ӳ������
{
	cout << file_message->st_nlink << " ";
}

void file_power(const struct stat *file_message)//����ļ�Ȩ��
{
	mode_t mode = file_message->st_mode;

	// �ж�USRȨ��
	printf("%c", mode&S_IRUSR ? 'r' : '-');
	printf("%c", mode&S_IWUSR ? 'w' : '-');
	printf("%c", mode&S_IXUSR ? 'x' : '-');

	// �ж�GRPȨ��
	printf("%c", mode&S_IRGRP ? 'r' : '-');
	printf("%c", mode&S_IWGRP ? 'w' : '-');
	printf("%c", mode&S_IXGRP ? 'x' : '-');
	// �ж�OTHȨ��

	printf("%c", mode&S_IROTH ? 'r' : '-');
	printf("%c", mode&S_IWOTH ? 'w' : '-');
	printf("%c ", mode&S_IXOTH ? 'x' : '-');
}

void file_id(const struct stat*file_message) //�õ��ļ������ߣ�������
{
	struct passwd* pwd;
	pwd = getpwuid(file_message->st_uid);
	cout << pwd->pw_name << " ";

	struct group*grp;
	grp = getgrgid(file_message->st_gid);
	cout << grp->gr_name << " ";
}

void file_size(const struct stat*file_message) //��ȡ�ļ���С
{
	printf("%5ld ", file_message->st_size);
}

void file_mtime(const struct stat*file_message) //��ȡ�ļ����һ���޸�ʱ��
{
	struct tm*t = localtime(&file_message->st_mtime);
	if (t->tm_mon + 1 == 1) {
		cout << "Jan";
	}else if (t->tm_mon + 1 == 2) {
		cout << "Feb";
	}else if (t->tm_mon + 1 == 3) {
		cout << "Mar";
	}else if (t->tm_mon + 1 == 4) {
		cout << "Apr";
	}else if (t->tm_mon + 1 == 5) {
		cout << "May";
	}else if (t->tm_mon + 1 == 6) {
		cout << "Jun";
	}else if (t->tm_mon + 1 == 7) {
		cout << "Jul";
	}else if (t->tm_mon + 1 == 8) {
		cout << "Aug";
	}else if (t->tm_mon + 1 == 9) {
		cout << "Sep";
	}else if (t->tm_mon + 1 == 10) {
		cout << "Oct";
	}else if (t->tm_mon + 1 == 11) {
		cout << "Nov";
	}else if (t->tm_mon + 1 == 12) {
		cout << "Dec";
	}
	cout << " " << t->tm_mday << " ";
	cout << setw(2) << setfill('0') << t->tm_hour << ":";
	cout << setw(2) << setfill('0') << t->tm_min << " ";
}