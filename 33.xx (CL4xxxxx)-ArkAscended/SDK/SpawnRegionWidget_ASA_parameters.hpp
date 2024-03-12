#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetSelected
struct USpawnRegionWidget_ASA_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.SetDifficult
struct USpawnRegionWidget_ASA_C_SetDifficult_Params
{
public:
	int32                                        Difficult;                                         // 0x0(0x4)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.ExecuteUbergraph_SpawnRegionWidget_ASA
struct USpawnRegionWidget_ASA_C_ExecuteUbergraph_SpawnRegionWidget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x5(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x6(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         K2Node_CustomEvent_Selected;                       // 0x7(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        K2Node_CustomEvent_Difficult;                      // 0x8(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xC(0x1)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0xD(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	uint8                                        Pad_4BDA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x10(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// Function SpawnRegionWidget_ASA.SpawnRegionWidget_ASA_C.Clicked__DelegateSignature
struct USpawnRegionWidget_ASA_C_Clicked__DelegateSignature_Params
{
public:
	class USpawnRegionWidget_ASA_C*              SpawnRegion;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
};

}
}


