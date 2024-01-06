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
	int32                                        NumAscensions;                                     // 0x5C8(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3254[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               AscensionData;                                     // 0x5D0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FName>                          BossDinoNameTagAscensionDataMap;                   // 0x5E0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        SavedPlayerDataVersion;                            // 0x5F0(0x4)(ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CurrentPlayerDataVersion;                          // 0x5F4(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        HexagonCount;                                      // 0x5F8(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        NumChibiLevelUpsData;                              // 0x5FC(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x600(0x10)(EditFixedSize, Transient, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_Base_C* GetDefaultObj();

	bool EndActivityOnBoss(class FName* Boss, class AShooterPlayerController* SPC, bool* K2Node_SwitchName_CmpSuccess);
	bool SetChibiLevels(class AShooterPlayerController* ForPC, class APawn* CallFunc_K2_GetPawn_ReturnValue);
	bool HasGeneralizedAchievementTag(bool* ReturnValue, bool* Ret_val, int32* CallFunc_Array_Find_ReturnValue);
	bool GrantGeneralizedAchievementTag(class AShooterPlayerController* ForPC, int32* CallFunc_Array_Add_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32* CallFunc_Array_Find_ReturnValue);
	bool BPForceDefeatedBoss(int32 DifficultyIndex, class AShooterPlayerController** PlayerController, int32* CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_BPLoadClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsPrimal_Item, bool* K2Node_ClassDynamicCast_bSuccess);
	int32 SetPlayerHexagonCount(bool* ReturnValue);
	void GetPlayerHexagonCount(int32* ReturnValue);
	void BPCreatedNewPlayerData();
	double DefeatedBoss(class APrimalDinoCharacter** BossChar, int32 DifficultyIndex, class FName TagOverride, class AShooterPlayerController* ForPC, class AShooterCharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, int32* CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


