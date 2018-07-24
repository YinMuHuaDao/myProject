#pragma once

#include <QObject>
#include <Qtsql/qsqldatabase.h>
#include <qstring.h>
#include <QtSql\qsqlerror.h>
#include <qdebug.h>
#include <QtSql\qsqlerror.h>

class db : public QObject
{
	Q_OBJECT

private:
	QSqlDatabase dbs;

public:
	db(QObject *parent = 0);
	~db();

	bool connectDatabase( const QString databaseName );

	QSqlDatabase getInstance();
};
