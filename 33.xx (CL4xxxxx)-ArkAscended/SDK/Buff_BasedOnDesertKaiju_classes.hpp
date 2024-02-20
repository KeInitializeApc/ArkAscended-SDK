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
	uint8                                        Pad_2D42[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CachedMaxWalkSpeed;                                // 0xB70(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_BasedOnDesertKaiju_C* GetDefaultObj();

	class UPrimalCharacterMovement* BPDeactivated(class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue);
	class UPrimalCharacterMovement* BPSetupForInstigator(class UPrimalCharacterStatusComponent** CallFunc_GetCharacterStatusComponent_ReturnValue);
};

}


