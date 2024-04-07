#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1108 - 0x10E8)
// BlueprintGeneratedClass PlayerCharacterStatusComponent_BP.PlayerCharacterStatusComponent_BP_C
class UPlayerCharacterStatusComponent_BP_C : public UPrimalPlayerStatusComponent
{
public:
	TArray<class FName>                          GeneralizedAchievementTags_GrantedExtraPlayerLevels_Fname; // 0x10E8(0x10)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<int32>                                GeneralizedAchievementTags_GrantedExtraPlayerLevels_Value; // 0x10F8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UPlayerCharacterStatusComponent_BP_C* GetDefaultObj();

	double BPModifyMaxExperiencePoints(float* InMaxExperiencePoints, double* RetVal, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue);
	bool BPModifyMaxLevel(int32* InMaxLevel, int32* RetVal, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerPawnTest_C* K2Node_DynamicCast_AsPlayer_Pawn_Test, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Get_Item);
};

}


