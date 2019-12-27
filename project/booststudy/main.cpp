#include "MysqlDB.h"

int main()
{
	MysqlDB db;
	db.Open("127.0.0.1", "root", "123456", "wangzhuo", 0);
	

    MysqlRecordset rs = db.QuerySQL("select * from user;");
    cout<<"empno ename"<<endl;
    for (unsigned int i=0; i<rs.GetRows(); ++i)
    {
        cout<<rs.GetItem(i, "name")<<" "<<rs.GetItem(i, "name")<<endl;
    }

	return 0;
}