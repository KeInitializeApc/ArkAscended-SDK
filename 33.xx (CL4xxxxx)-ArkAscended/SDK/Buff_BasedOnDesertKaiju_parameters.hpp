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
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D3F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x18(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// Function Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C.BPSetupForInstigator
struct ABuff_BasedOnDesertKaiju_C_BPSetupForInstigator_Params
{
public:
	class AActor*                                ForInstigator;                                     // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AShooterCharacter*                     K2Node_DynamicCast_AsShooter_Character;            // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2D41[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalCharacterStatusComponent*       CallFunc_GetCharacterStatusComponent_ReturnValue;  // 0x18(0x8)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
	class UPrimalCharacterMovement*              CallFunc_CharacterMovementToPCM_ReturnValue;       // 0x20(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
};

}
}


