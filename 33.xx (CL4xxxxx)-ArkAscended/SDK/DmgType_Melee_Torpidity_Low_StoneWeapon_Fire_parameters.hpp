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

// 0xE0 (0xE0 - 0x0)
// Function DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C.OverrideBuffToGiveVictimCharacter
struct UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C_OverrideBuffToGiveVictimCharacter_Params
{
public:
	class APrimalCharacter*                      Victim;                                            // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_F6D[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x40(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class UClass*                                OutVal;                                            // 0x48(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_F72[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x58(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_F74[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalBuff>             Temp_softclass_Variable;                           // 0x68(0x30)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x98(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_F77[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalBuff>             K2Node_Select_Default;                             // 0xA0(0x30)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0xD0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0xD8(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

}
}


