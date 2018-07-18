#ifndef THD_H
#define THD_H

#include <qthread.h>
#include <vl/exerciseConn.h>
#include <vl/exerciseConnInitializer.h>

#include <vlutil/vlProcessControl.h>
#include <vlutil/vlMiniDumper.h>

#include <vl/reflectedEntityList.h>
#include <vl/entityStateRepository.h>
#include <vl/reflectedEntity.h>
#include <vl/fireInteraction.h>
#include <vl/topoView.h>
#include <vl/fomMapper.h>
#include <iostream>
#include <vl/environmentProcessRepository.h>
#include <vl/reflectedEnvironmentProcess.h>
#include <vl/reflectedEnvironmentProcessList.h>

#include <vl/signalInteraction.h>

#include <qstring.h>
#include <qtimer.h>


class thd : public QThread
{
    Q_OBJECT
public:
    explicit thd(QObject *parent = 0);

	QString _temp;

//	int getParam(int argc, char *argv[]);

signals:
	void isdone(QString &str);

protected:
	void run();

public slots:
};

#endif // THD_H
