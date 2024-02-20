#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHoverDroneDebug : uint8
{
	Off                            = 0,
	Position                       = 1,
	Velocity                       = 4,
	RotationalVelocity             = 8,
	Altitude                       = 16,
	ForceFacing                    = 32,
	FOV                            = 64,
	All                            = 125,
	EHoverDroneDebug_MAX           = 126,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct HoverDrone.DroneSpeedParameters
struct FDroneSpeedParameters
{
public:
	float                                        LinearAccelScale;                                  // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LinearDecelScale;                                  // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotAccelScale;                                     // 0x8(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotDecelScale;                                     // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxLinearSpeedScale;                               // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRotSpeedScale;                                  // 0x14(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        HoverThrustScale;                                  // 0x18(0x4)(Edit, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


