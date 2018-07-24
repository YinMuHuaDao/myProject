#include "db.h"

db::db(QObject *parent)
	: QObject(parent)
{
}

db::~db()
{
}

bool db::connectDatabase(const QString databaseName)
{
	if (QSqlDatabase::contains("qt_sql_default_connection"))
	{
		dbs = QSqlDatabase::database("qt_sql_default_connection");

	}
	else
	{
		dbs = QSqlDatabase::addDatabase("QSQLITE");

		dbs.setUserName("root");

		dbs.setPassword("root");

		dbs.setDatabaseName(databaseName);

	}

	bool isOpen = dbs.open();

	if (isOpen)
	{

		qDebug() << "database has been created";

		return true;

	}

	else
	{
		qDebug() << "the error is " << dbs.lastError();
	}
}


QSqlDatabase db::getInstance()
{
	return dbs;
}