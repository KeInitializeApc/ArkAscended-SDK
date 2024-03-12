#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1060 - 0x1060)
// BlueprintGeneratedClass PrimalItem_Spawner_Mek.PrimalItem_Spawner_Mek_C
class UPrimalItem_Spawner_Mek_C : public UPrimalItem_DinoSpawner_Base_C
{
public:

	static class UClass* StaticClass();
	static class UPrimalItem_Spawner_Mek_C* GetDefaultObj();

	bool BPCanUse(bool CanUse_, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess);
	class FString GetStatDisplayString(int32* Value, const class FString& CallFunc_GetStatDisplayString_StatDisplay, const class FString& CallFunc_GetStatDisplayString_ValueDisplay, bool* CallFunc_GetStatDisplayString_ShowInTooltip);
};

}


