#include<time.h>
class date
{
	void get_date()
	{
	int mm, dd, yyyy;
	cout<<"Enter journey date in format: dd/mm/yyyy"<<endl;
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	}
	String current_time()
	{
		time_t _tm =time(NULL );
		struct tm * curtime = localtime ( &_tm );
		return asctime(curtime);
	}
}
