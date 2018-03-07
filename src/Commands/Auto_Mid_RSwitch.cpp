#include "Auto_Mid_RSwitch.h"
#include "../CommandBase.h"
#include "Delay.h"
#include "MoveLiftToHeight.h"
#include "AutoArmMove.h"
#include "ReleaseCrate.h"
#include "ArmMin.h"
#include "MoveLiftToMinHeight.h"
#include "Test_Mechs.h"
//#include "Constants.h"

Auto_Mid_RSwitch::Auto_Mid_RSwitch() {

	AddSequential(new ArmMin());
	AddSequential(new MoveLiftToMinHeight());
	AddSequential(new Delay(.5));
	AddSequential(new DriveForward(Forward_Mid));
	AddSequential(new Delay(.5));
	AddSequential(new Turn(90));
	AddSequential(new Delay(.5));
	AddSequential(new DriveForward(Cross_MidL-20));
	AddSequential(new Delay(.5));
	AddSequential(new Turn(-90));
	AddParallel(new Test_Mechs());
	AddSequential(new Delay(.5));
	AddSequential(new DriveForward(Score_Mid));
	AddSequential(new ReleaseCrate());
}
