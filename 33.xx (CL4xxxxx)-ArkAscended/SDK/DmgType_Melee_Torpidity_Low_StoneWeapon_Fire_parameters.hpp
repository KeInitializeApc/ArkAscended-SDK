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
	class APrimalCharacter*                      Victim;                                            // 0x0(0x8)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	float                                        IncomingDamage;                                    // 0x8(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4632[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDamageEvent                          TheDamageEvent;                                    // 0x10(0x20)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	class AController*                           EventInstigator;                                   // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class AActor*                                DamageCauser;                                      // 0x38(0x8)(Edit, ConstParm, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                ReturnValue;                                       // 0x40(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                OutVal;                                            // 0x48(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         Temp_bool_Variable;                                // 0x50(0x1)(ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4633[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalDinoCharacter*                  K2Node_DynamicCast_AsPrimal_Dino_Character;        // 0x58(0x8)(Edit, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4634[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalBuff>             Temp_softclass_Variable;                           // 0x68(0x30)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x98(0x1)(Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_4635[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalBuff>             K2Node_Select_Default;                             // 0xA0(0x30)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	class UClass*                                CallFunc_ClassAssetResolve_ReturnValue;            // 0xD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	double                                       CallFunc_Less_DoubleDouble_A_ImplicitCast;         // 0xD8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


