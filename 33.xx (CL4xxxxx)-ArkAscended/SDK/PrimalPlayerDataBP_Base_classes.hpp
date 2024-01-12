#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x610 - 0x5C8)
// BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
{
public:
	int32                                        NumAscensions;                                     // 0x5C8(0x4)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_26C2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               AscensionData;                                     // 0x5D0(0x10)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FName>                          BossDinoNameTagAscensionDataMap;                   // 0x5E0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        SavedPlayerDataVersion;                            // 0x5F0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CurrentPlayerDataVersion;                          // 0x5F4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        HexagonCount;                                      // 0x5F8(0x4)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        NumChibiLevelUpsData;                              // 0x5FC(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x600(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_Base_C* GetDefaultObj();

	bool EndActivityOnBoss(class FName Boss, bool* CallFunc_IsValid_ReturnValue);
	class APlayerPawnTest_C* SetChibiLevels(int32 NewLevels, bool* CallFunc_IsValid_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool HasGeneralizedAchievementTag(class FName* Tag, bool Ret_val, int32 CallFunc_Array_Find_ReturnValue);
	bool GrantGeneralizedAchievementTag(class FName ObtainedAchievementTag, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Find_ReturnValue);
	bool BPForceDefeatedBoss(int32 DifficultyIndex, class FName BossName, class AShooterPlayerController** PlayerController, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, struct FBossEngramsSoftReferenceMapping* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_1, struct FEngramsSetSoftReferenceMapping* CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue, class FString* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_BPLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item);
	bool SetPlayerHexagonCount(int32 NewHexagonCount);
	int32 GetPlayerHexagonCount();
	void BPCreatedNewPlayerData();
	bool DefeatedBoss(class APrimalDinoCharacter* BossChar, int32 DifficultyIndex, class FName TagOverride, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, double* CallFunc_Array_Get_Item, double CallFunc_FMax_ReturnValue);
};

}


