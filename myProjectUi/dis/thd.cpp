#include "thd.h"
#include <qdebug.h>

//int keybrdTick()
//{
//	char *keyPtr = DtPollBlockingInputLine();
//	if (keyPtr && (*keyPtr == 'q' || *keyPtr == 'Q'))
//		return -1;
//	else
//		return 0;
//}
//
//
//void fireCb(DtFireInteraction* fire, void* /*usr*/)
//{
//	std::cout << "Fire Interaction from "
//		<< fire->attackerId().string() << std::endl;
//}
//
//void sigCb(DtSignalInteraction* sig, void* /*usr*/)
//{
//
//}
//
//void printEnvProc(DtReflectedEnvironmentProcess* obj, void* userData)
//{
//	obj->epsr()->printData();
//}
//
//void envProcAddedCb(DtReflectedEnvironmentProcess* obj, void* userData)
//{
//	// register a callback for when an existing object is updated.
//	obj->addPostUpdateCallback(printEnvProc, userData);
//}



thd::thd(QObject *parent) : QThread(parent)
{

}

void thd::run()
{
	//DtVrlApplicationInitializer appInit(0, NULL, "VR-Link Listen");

	//appInit.setUseAsynchIO(true);

	//appInit.setDisVersionToSend(7);

	//DtExerciseConn::InitializationStatus status = DtExerciseConn::DtINIT_SUCCESS;

	//DtExerciseConn exConn(appInit, &status);

	//if (status != 0)
	//{
	//	std::cout << "Error creating exercise connection." << std::endl;
	//	return;
	//}

	//DtReflectedEnvironmentProcessList relEnv(&exConn);
	//relEnv.addEnvironmentProcessAdditionCallback(envProcAddedCb, NULL);

	//// Register a callback to handle fire interactions.
	//DtFireInteraction::addCallback(&exConn, fireCb, NULL);

	//DtSignalInteraction::addCallback(&exConn, sigCb, NULL);

	//DtReflectedEntityList rel(&exConn);

	//// Initialize VR-Link time.
	//DtClock* clock = exConn.clock();

	emit isdone(_temp);

	//while (1)
	//{
	//	// Check if user hit 'q' to quit.
	//	if (keybrdTick() == -1)
	//		break;

	//	// Tell VR-Link the current value of simulation time.
	//	clock->setSimTime(clock->elapsedRealTime());

	//	// Process any incoming messages.
	//	exConn.drainInput();

	//	// Find the first entity in the reflected entity list.
	//	DtReflectedEntity *first = rel.first();

	//	if (first)
	//	{
	//		// Grab its state repository, where we can inspect its data.
	//		DtEntityStateRepository *esr = first->entityStateRep();

	//		// Create a topographic view on the state repository, so we
	//		// can look at position information in topographic coordinates.
	//		double refLatitude = DtDeg2Rad(35.699760);
	//		double refLongitude = DtDeg2Rad(-121.326577);
	//		DtTopoView topoView(esr, refLatitude, refLongitude);

	//		// Print the position.
	//		// Since it returns a DtString, we need to force it to const char*
	//		// with a cast.
	//		//	qDebug() << "Position of first entity: "
	//		//		<< topoView.location().string()<< endl;
	//		_temp = QString::fromStdString(topoView.location().string().stdString() + "\n");

	//		emit isdone(_temp);
	//		//QMessageBox::about(&w, _temp, _temp);
	//	}
	//	// Sleep till next iteration.

	//	
	//	DtSleep(0.1);
	//}

}


//int thd::getParam(int argc, char **argv)
//{
//	argcd = argc;
//
//	argvd = argv;
//
//	return 1;
//}