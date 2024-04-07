#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x620 - 0x5D8)
// BlueprintGeneratedClass PrimalPlayerDataBP_Base.PrimalPlayerDataBP_Base_C
class UPrimalPlayerDataBP_Base_C : public UPrimalPlayerData
{
public:
	int32                                        NumAscensions;                                     // 0x5D8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_45B8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               AscensionData;                                     // 0x5E0(0x10)(ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class FName>                          BossDinoNameTagAscensionDataMap;                   // 0x5F0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        SavedPlayerDataVersion;                            // 0x600(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        CurrentPlayerDataVersion;                          // 0x604(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        HexagonCount;                                      // 0x608(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	int32                                        NumChibiLevelUpsData;                              // 0x60C(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x610(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_Base_C* GetDefaultObj();

	bool EndActivityOnBoss(class AShooterPlayerController** SPC);
	bool SetChibiLevels(class AShooterPlayerController** ForPC, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess);
	bool HasGeneralizedAchievementTag(bool* Ret_val);
	bool GrantGeneralizedAchievementTag(class AShooterPlayerController** ForPC, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess);
	bool BPForceDefeatedBoss(int32* DifficultyIndex, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, const struct FBossEngramsSoftReferenceMapping& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, const struct FEngramsSetSoftReferenceMapping& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2);
	bool SetPlayerHexagonCount();
	int32 GetPlayerHexagonCount();
	void BPCreatedNewPlayerData();
	double DefeatedBoss(int32* DifficultyIndex, class AShooterPlayerController** ForPC, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Array_Get_Item);
};

}


