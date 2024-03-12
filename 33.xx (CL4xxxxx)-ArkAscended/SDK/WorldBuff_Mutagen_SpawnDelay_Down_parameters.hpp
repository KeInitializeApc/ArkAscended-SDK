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

// 0x2C (0x2C - 0x0)
// Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PreDeconstruction
struct UWorldBuff_Mutagen_SpawnDelay_Down_C_PreDeconstruction_Params
{
public:
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x8(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5646[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x18(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	float                                        K2Node_VariableSet_AdjustableMutagenSpawnDelayMultiplier_ImplicitCast; // 0x28(0x4)(ExportObject, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x64 (0x64 - 0x0)
// Function WorldBuff_Mutagen_SpawnDelay_Down.WorldBuff_Mutagen_SpawnDelay_Down_C.PostConstruction
struct UWorldBuff_Mutagen_SpawnDelay_Down_C_PostConstruction_Params
{
public:
	double                                       SpawnDelayTemp;                                    // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class AShooterGameMode*                      K2Node_DynamicCast_AsShooter_Game_Mode;            // 0x10(0x8)(ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5647[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x28(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x30(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x38(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x40(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x48(0x8)(Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x58(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        K2Node_VariableSet_AdjustableMutagenSpawnDelayMultiplier_ImplicitCast; // 0x60(0x4)(ExportObject, EditFixedSize, ZeroConstructor, Transient, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


