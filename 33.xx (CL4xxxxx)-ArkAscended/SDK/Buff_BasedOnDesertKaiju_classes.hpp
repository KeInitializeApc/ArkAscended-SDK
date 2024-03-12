#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xB80 - 0xB71)
// BlueprintGeneratedClass Buff_BasedOnDesertKaiju.Buff_BasedOnDesertKaiju_C
class ABuff_BasedOnDesertKaiju_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_1113[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CachedMaxWalkSpeed;                                // 0xB78(0x8)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BasedOnDesertKaiju_C* GetDefaultObj();

	class UPrimalCharacterStatusComponent* BPDeactivated(class AActor** ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue);
	class UPrimalCharacterStatusComponent* BPSetupForInstigator(class AActor** ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UPrimalCharacterMovement** CallFunc_CharacterMovementToPCM_ReturnValue);
};

}


