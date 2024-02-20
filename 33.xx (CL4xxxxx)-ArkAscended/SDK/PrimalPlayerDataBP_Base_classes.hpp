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
	int32                                        NumAscensions;                                     // 0x5C8(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_3258[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               AscensionData;                                     // 0x5D0(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class FName>                          BossDinoNameTagAscensionDataMap;                   // 0x5E0(0x10)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        SavedPlayerDataVersion;                            // 0x5F0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        CurrentPlayerDataVersion;                          // 0x5F4(0x4)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        HexagonCount;                                      // 0x5F8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        NumChibiLevelUpsData;                              // 0x5FC(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x600(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_Base_C* GetDefaultObj();

	void EndActivityOnBoss(class FName Boss, class AShooterPlayerController* SPC, bool K2Node_SwitchName_CmpSuccess, bool* CallFunc_IsValid_ReturnValue);
	bool SetChibiLevels(int32 NewLevels, class APawn** CallFunc_K2_GetPawn_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test);
	bool HasGeneralizedAchievementTag(bool ReturnValue, bool Ret_val, int32 CallFunc_Array_Find_ReturnValue);
	bool GrantGeneralizedAchievementTag(class FName ObtainedAchievementTag, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, int32 CallFunc_Array_Find_ReturnValue);
	bool BPForceDefeatedBoss(int32* DifficultyIndex, class FName BossName, class AShooterPlayerController** PlayerController, class AShooterPlayerState** K2Node_DynamicCast_AsShooter_Player_State, int32 CallFunc_Array_Find_ReturnValue, class UClass* CallFunc_BPLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool K2Node_ClassDynamicCast_bSuccess);
	void SetPlayerHexagonCount(int32 NewHexagonCount, bool ReturnValue);
	void GetPlayerHexagonCount(int32 ReturnValue);
	void BPCreatedNewPlayerData();
	double DefeatedBoss(class APrimalDinoCharacter* BossChar, int32* DifficultyIndex, class FName TagOverride, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_FMax_ReturnValue);
};

}


