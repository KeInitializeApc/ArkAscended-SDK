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
	int32                                        NumAscensions;                                     // 0x5C8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_327B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<double>                               AscensionData;                                     // 0x5D0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FName>                          BossDinoNameTagAscensionDataMap;                   // 0x5E0(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        SavedPlayerDataVersion;                            // 0x5F0(0x4)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        CurrentPlayerDataVersion;                          // 0x5F4(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        HexagonCount;                                      // 0x5F8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	int32                                        NumChibiLevelUpsData;                              // 0x5FC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	TArray<class FName>                          GeneralizedUnlockedAchievementTags;                // 0x600(0x10)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalPlayerDataBP_Base_C* GetDefaultObj();

	bool EndActivityOnBoss(class AShooterPlayerController** SPC, bool K2Node_SwitchName_CmpSuccess);
	bool SetChibiLevels(class AShooterPlayerController* ForPC, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test);
	bool HasGeneralizedAchievementTag(bool* ReturnValue, bool* Ret_val);
	bool GrantGeneralizedAchievementTag(class AShooterPlayerController* ForPC, int32 CallFunc_Array_Add_ReturnValue, class APawn** CallFunc_K2_GetPawn_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test);
	bool BPForceDefeatedBoss(int32 DifficultyIndex, class AShooterPlayerController** PlayerController, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue);
	int32 SetPlayerHexagonCount(bool* ReturnValue);
	void GetPlayerHexagonCount(int32* ReturnValue);
	void BPCreatedNewPlayerData();
	double DefeatedBoss(int32 DifficultyIndex, class AShooterPlayerController* ForPC, int32* CallFunc_Add_IntInt_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


