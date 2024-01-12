#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xB78 - 0xB69)
// BlueprintGeneratedClass Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C
class ABuff_BasedOnDesertKaiju_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_37EC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CachedMaxWalkSpeed;                                // 0xB70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BasedOnDesertKaiju_C* GetDefaultObj();

	class UPrimalCharacterMovement* BPDeactivated(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	class UPrimalCharacterMovement* BPSetupForInstigator(class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


