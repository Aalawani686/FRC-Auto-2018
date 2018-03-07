#include <Commands/Auto_Left_Switch.h>
#include <iostream>
#include "Delay.h"
#include "../CommandBase.h"
#include "Test_Mechs.h"
#include "ReleaseCrate.h"//#include "Constants.h"

Auto_Left_Switch::Auto_Left_Switch() {


	AddSequential(new DriveForward(To_Switch));
	AddSequential(new Delay(.5));
	AddSequential(new Turn(90));
	AddSequential(new Delay(.5));
	AddParallel(new Test_Mechs());
	AddSequential(new DriveForward(Forward_Switch));
	AddSequential(new ReleaseCrate());


}
