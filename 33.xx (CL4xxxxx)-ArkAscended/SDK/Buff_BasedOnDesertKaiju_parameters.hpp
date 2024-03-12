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

// 0x28 (0x28 - 0x0)
// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPDeactivated
struct ABuff_BasedOnDesertKaiju_C_BPDeactivated_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_10FB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x18(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator
struct ABuff_BasedOnDesertKaiju_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_110B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x18(0x8)(Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
};

}
}


