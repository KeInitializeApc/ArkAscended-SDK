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
	uint8                                        Pad_29BB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CachedMaxWalkSpeed;                                // 0xB70(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BasedOnDesertKaiju_C* GetDefaultObj();

	bool BPDeactivated(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue);
	bool BPSetupForInstigator(class AActor* ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class UPrimalCharacterStatusComponent* CallFunc_GetCharacterStatusComponent_ReturnValue, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue);
};

}

