#include "Auto_Left_LScale.h"
#include "../CommandBase.h"
#include "Delay.h"
#include "MoveLiftToHeight.h"
#include "AutoArmMove.h"
#include "ReleaseCrate.h"
#include "Test_Mechs.h"
#include "ScaleMechanisms.h"
using namespace std;

Auto_Left_LScale::Auto_Left_LScale() {
	//cout << "Auto Left L scale" << endl;
	AddParallel(new ScaleMechanisms());
	AddSequential(new DriveForward(To_Switch+Mid_Targets+To_Scale));
	AddSequential(new Delay(.5));
	AddSequential(new Turn(90));
	AddSequential(new Delay(.5));
	AddSequential(new DriveForward(Forward_Scale));
	AddSequential(new ReleaseCrate());

}
