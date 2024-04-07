#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x1770 - 0x1720)
// BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C
class ACropPlotBaseBP_C : public APrimalStructureItemContainer_CropPlot
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1720(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class USphereComponent*                      StasisComponent;                                   // 0x1728(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        TilledMaximumCount;                                // 0x1730(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	int32                                        TilledCurrentCount;                                // 0x1734(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       TilledBonusYieldMultiplier_AtOneTill;              // 0x1738(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       TilledBonusYieldMultiplier_AtMaxTilled;            // 0x1740(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       TilledBonusGrowthRateMultiplier_AtOneTill;         // 0x1748(0x8)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       TilledBonusGrowthRateMultiplier_AtMaxTilled;       // 0x1750(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               TillVFXEmitterOffset;                              // 0x1758(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ACropPlotBaseBP_C* GetDefaultObj();

	float BPGetAdditionalGrowthMultiplier(bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, double* CallFunc_GetCropGrowthTillMultiplier_ReturnValue);
	bool HasSoilTillingEnabled(bool* CanEverBeTilled, bool* CallFunc_Greater_IntInt_ReturnValue);
	int32 BPAdjustCropYield_SingleRefresh(bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, bool* CallFunc_Greater_IntInt_ReturnValue, double* CallFunc_GetCropYieldTillMultipler_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	int32 BPAdjustCropYield_Max(bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, bool* CallFunc_Greater_IntInt_ReturnValue, double* CallFunc_GetCropYieldTillMultipler_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
	double GetCropGrowthTillMultiplier(bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	double GetCropYieldTillMultipler(bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue);
	bool GetTooltipStructureInfoBP(class AShooterPlayerController** PlayerOwner, bool Temp_bool_Variable, bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo, bool CallFunc_Can_Currently_be_Tilled_Can_Currently_Be_Tilled, TArray<struct FTooltipTextInfo>* K2Node_MakeArray_Array, bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1, double* CallFunc_GetCropGrowthTillMultiplier_ReturnValue, double* CallFunc_GetCropYieldTillMultipler_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_3, class FText K2Node_Select_Default, int64* CallFunc_Conv_IntToInt64_ReturnValue, bool Temp_bool_Variable_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_4, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo_1, class FText K2Node_Select_Default_1, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo_2, TArray<struct FTooltipTextInfo>* K2Node_MakeArray_Array_5, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo_3, TArray<struct FTooltipTextInfo>* K2Node_MakeArray_Array_6, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1);
	int32 TillSoil(int32 CallFunc_Min_ReturnValue);
	bool Can_Currently_Be_Tilled(bool* Can_Currently_Be_Tilled, bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled);
	void ResetTilledState();
	class APrimalStructureItemContainer_CropPlot* GetCurrentStackCount(class APrimalStructure* PlacingOn, int32* StackCount, class APrimalStructure** CurCropPlot_GSC, int32 StackCount_GSC, bool Temp_bool_Variable, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess);
	bool BPOverrideCantBuildReasonString(const class FString& OverrideString_BRS, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_BuildString_Int_ReturnValue);
	int32 BPIsAllowedToBuild(int32 BuildReason_IAB, bool* CallFunc_IsOverStackLimit_IsOverLimit);
	class APrimalStructureItemContainer_CropPlot* IsOverStackLimit(bool IsOverLimit, class APrimalStructure* PlacingOnCropPlot_IOS, bool IsOverLimit_IOS, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_2, int32* CallFunc_GetCurrentStackCount_StackCount, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, class FName* CommandName, struct FBPNetExecParams* ExecParams, bool* RetVal);
	bool CanAttachToExosuit(class AShooterPlayerController** ForPC);
	bool CanBeStoredByExosuit(class AShooterPlayerController** ForPC);
	int32 BPOnCropPhaseDecrease();
	void BPOnRemovedCrop();
	void BPOnFertilizerItemUsedUp();
	void ExecuteUbergraph_CropPlotBaseBP(int32* EntryPoint, int32 K2Node_Event_CropPhase);
};

}


