#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CropPlotBaseBP.CropPlotBaseBP_C
// (Actor)

class UClass* ACropPlotBaseBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CropPlotBaseBP_C");

	return Clss;
}


// CropPlotBaseBP_C CropPlotBaseBP.Default__CropPlotBaseBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACropPlotBaseBP_C* ACropPlotBaseBP_C::GetDefaultObj()
{
	static class ACropPlotBaseBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACropPlotBaseBP_C*>(ACropPlotBaseBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPGetAdditionalGrowthMultiplier
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_HasSoilTillingEnabled_CanEverBeTilled                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GetCropGrowthTillMultiplier_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float ACropPlotBaseBP_C::BPGetAdditionalGrowthMultiplier(bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, double* CallFunc_GetCropGrowthTillMultiplier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPGetAdditionalGrowthMultiplier");

	Params::ACropPlotBaseBP_C_BPGetAdditionalGrowthMultiplier_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasSoilTillingEnabled_CanEverBeTilled != nullptr)
		*CallFunc_HasSoilTillingEnabled_CanEverBeTilled = Parms.CallFunc_HasSoilTillingEnabled_CanEverBeTilled;

	if (CallFunc_GetCropGrowthTillMultiplier_ReturnValue != nullptr)
		*CallFunc_GetCropGrowthTillMultiplier_ReturnValue = Parms.CallFunc_GetCropGrowthTillMultiplier_ReturnValue;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.HasSoilTillingEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanEverBeTilled                                                  (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ACropPlotBaseBP_C::HasSoilTillingEnabled(bool* CanEverBeTilled, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "HasSoilTillingEnabled");

	Params::ACropPlotBaseBP_C_HasSoilTillingEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanEverBeTilled != nullptr)
		*CanEverBeTilled = Parms.CanEverBeTilled;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPAdjustCropYield_SingleRefresh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemsToGenerateBeforeAdjustment                                  (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasSoilTillingEnabled_CanEverBeTilled                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_GetCropYieldTillMultipler_ReturnValue                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

int32 ACropPlotBaseBP_C::BPAdjustCropYield_SingleRefresh(bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, bool* CallFunc_Greater_IntInt_ReturnValue, double* CallFunc_GetCropYieldTillMultipler_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPAdjustCropYield_SingleRefresh");

	Params::ACropPlotBaseBP_C_BPAdjustCropYield_SingleRefresh_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasSoilTillingEnabled_CanEverBeTilled != nullptr)
		*CallFunc_HasSoilTillingEnabled_CanEverBeTilled = Parms.CallFunc_HasSoilTillingEnabled_CanEverBeTilled;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetCropYieldTillMultipler_ReturnValue != nullptr)
		*CallFunc_GetCropYieldTillMultipler_ReturnValue = Parms.CallFunc_GetCropYieldTillMultipler_ReturnValue;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPAdjustCropYield_Max
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemsToGenerateBeforeAdjustment                                  (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasSoilTillingEnabled_CanEverBeTilled                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_GetCropYieldTillMultipler_ReturnValue                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

int32 ACropPlotBaseBP_C::BPAdjustCropYield_Max(bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, bool* CallFunc_Greater_IntInt_ReturnValue, double* CallFunc_GetCropYieldTillMultipler_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Max_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPAdjustCropYield_Max");

	Params::ACropPlotBaseBP_C_BPAdjustCropYield_Max_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasSoilTillingEnabled_CanEverBeTilled != nullptr)
		*CallFunc_HasSoilTillingEnabled_CanEverBeTilled = Parms.CallFunc_HasSoilTillingEnabled_CanEverBeTilled;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetCropYieldTillMultipler_ReturnValue != nullptr)
		*CallFunc_GetCropYieldTillMultipler_ReturnValue = Parms.CallFunc_GetCropYieldTillMultipler_ReturnValue;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.GetCropGrowthTillMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

double ACropPlotBaseBP_C::GetCropGrowthTillMultiplier(bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "GetCropGrowthTillMultiplier");

	Params::ACropPlotBaseBP_C_GetCropGrowthTillMultiplier_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.GetCropYieldTillMultipler
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

double ACropPlotBaseBP_C::GetCropYieldTillMultipler(bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "GetCropYieldTillMultipler");

	Params::ACropPlotBaseBP_C_GetCropYieldTillMultipler_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.GetTooltipStructureInfoBP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    PlayerOwner                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// TArray<struct FTooltipTextInfo>    ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasSoilTillingEnabled_CanEverBeTilled                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FColor                      K2Node_MakeStruct_Color                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FTooltipTextInfo            K2Node_MakeStruct_TooltipTextInfo                                (Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Can_Currently_be_Tilled_Can_Currently_Be_Tilled         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FTooltipTextInfo>    K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1                 (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_GetCropGrowthTillMultiplier_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GetCropYieldTillMultipler_ReturnValue                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue_1                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue_2                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FColor                      K2Node_MakeStruct_Color_1                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FColor                      K2Node_MakeStruct_Color_2                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FTooltipTextInfo            K2Node_MakeStruct_TooltipTextInfo_1                              (Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_3                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FColor                      K2Node_MakeStruct_Color_3                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FTooltipTextInfo            K2Node_MakeStruct_TooltipTextInfo_2                              (Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FTooltipTextInfo>    K2Node_MakeArray_Array_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FTooltipTextInfo            K2Node_MakeStruct_TooltipTextInfo_3                              (Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// TArray<struct FTooltipTextInfo>    K2Node_MakeArray_Array_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ACropPlotBaseBP_C::GetTooltipStructureInfoBP(class AShooterPlayerController** PlayerOwner, bool Temp_bool_Variable, bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo, bool CallFunc_Can_Currently_be_Tilled_Can_Currently_Be_Tilled, TArray<struct FTooltipTextInfo>* K2Node_MakeArray_Array, bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1, double* CallFunc_GetCropGrowthTillMultiplier_ReturnValue, double* CallFunc_GetCropYieldTillMultipler_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_3, class FText K2Node_Select_Default, int64* CallFunc_Conv_IntToInt64_ReturnValue, bool Temp_bool_Variable_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_4, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo_1, class FText K2Node_Select_Default_1, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo_2, TArray<struct FTooltipTextInfo>* K2Node_MakeArray_Array_5, const struct FTooltipTextInfo& K2Node_MakeStruct_TooltipTextInfo_3, TArray<struct FTooltipTextInfo>* K2Node_MakeArray_Array_6, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "GetTooltipStructureInfoBP");

	Params::ACropPlotBaseBP_C_GetTooltipStructureInfoBP_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_TooltipTextInfo = K2Node_MakeStruct_TooltipTextInfo;
	Parms.CallFunc_Can_Currently_be_Tilled_Can_Currently_Be_Tilled = CallFunc_Can_Currently_be_Tilled_Can_Currently_Be_Tilled;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_MakeStruct_TooltipTextInfo_1 = K2Node_MakeStruct_TooltipTextInfo_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_TooltipTextInfo_2 = K2Node_MakeStruct_TooltipTextInfo_2;
	Parms.K2Node_MakeStruct_TooltipTextInfo_3 = K2Node_MakeStruct_TooltipTextInfo_3;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayerOwner != nullptr)
		*PlayerOwner = Parms.PlayerOwner;

	if (CallFunc_HasSoilTillingEnabled_CanEverBeTilled != nullptr)
		*CallFunc_HasSoilTillingEnabled_CanEverBeTilled = Parms.CallFunc_HasSoilTillingEnabled_CanEverBeTilled;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1 != nullptr)
		*CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1 = Parms.CallFunc_HasSoilTillingEnabled_CanEverBeTilled_1;

	if (CallFunc_GetCropGrowthTillMultiplier_ReturnValue != nullptr)
		*CallFunc_GetCropGrowthTillMultiplier_ReturnValue = Parms.CallFunc_GetCropGrowthTillMultiplier_ReturnValue;

	if (CallFunc_GetCropYieldTillMultipler_ReturnValue != nullptr)
		*CallFunc_GetCropYieldTillMultipler_ReturnValue = Parms.CallFunc_GetCropYieldTillMultipler_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (K2Node_MakeArray_Array_2 != nullptr)
		*K2Node_MakeArray_Array_2 = std::move(Parms.K2Node_MakeArray_Array_2);

	if (K2Node_MakeArray_Array_3 != nullptr)
		*K2Node_MakeArray_Array_3 = std::move(Parms.K2Node_MakeArray_Array_3);

	if (CallFunc_Conv_IntToInt64_ReturnValue != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue = Parms.CallFunc_Conv_IntToInt64_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData_2 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_2 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_2);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Conv_IntToInt64_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue_1 = Parms.CallFunc_Conv_IntToInt64_ReturnValue_1;

	if (K2Node_MakeStruct_FormatArgumentData_3 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_3 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_3);

	if (K2Node_MakeArray_Array_4 != nullptr)
		*K2Node_MakeArray_Array_4 = std::move(Parms.K2Node_MakeArray_Array_4);

	if (K2Node_MakeArray_Array_5 != nullptr)
		*K2Node_MakeArray_Array_5 = std::move(Parms.K2Node_MakeArray_Array_5);

	if (K2Node_MakeArray_Array_6 != nullptr)
		*K2Node_MakeArray_Array_6 = std::move(Parms.K2Node_MakeArray_Array_6);

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.TillSoil
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Min_ReturnValue                                         (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

int32 ACropPlotBaseBP_C::TillSoil(int32 CallFunc_Min_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "TillSoil");

	Params::ACropPlotBaseBP_C_TillSoil_Params Parms{};

	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.Can Currently Be Tilled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Can_Currently_Be_Tilled                                          (ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasSoilTillingEnabled_CanEverBeTilled                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ACropPlotBaseBP_C::Can_Currently_Be_Tilled(bool* Can_Currently_Be_Tilled, bool* CallFunc_HasSoilTillingEnabled_CanEverBeTilled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "Can Currently Be Tilled");

	Params::ACropPlotBaseBP_C_Can_Currently_Be_Tilled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Can_Currently_Be_Tilled != nullptr)
		*Can_Currently_Be_Tilled = Parms.Can_Currently_Be_Tilled;

	if (CallFunc_HasSoilTillingEnabled_CanEverBeTilled != nullptr)
		*CallFunc_HasSoilTillingEnabled_CanEverBeTilled = Parms.CallFunc_HasSoilTillingEnabled_CanEverBeTilled;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.ResetTilledState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACropPlotBaseBP_C::ResetTilledState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "ResetTilledState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.GetCurrentStackCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxCount                                                         (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APrimalStructure*            PlacingOn                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              StackCount                                                       (BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APrimalStructure*            CurCropPlot_GSC                                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              StackCount_GSC                                                   (ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalStructureItemContainer_CropPlot*K2Node_DynamicCast_AsPrimal_Structure_Item_Container_Crop_Plot   (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class APrimalStructureItemContainer_CropPlot* ACropPlotBaseBP_C::GetCurrentStackCount(class APrimalStructure* PlacingOn, int32* StackCount, class APrimalStructure** CurCropPlot_GSC, int32 StackCount_GSC, bool Temp_bool_Variable, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "GetCurrentStackCount");

	Params::ACropPlotBaseBP_C_GetCurrentStackCount_Params Parms{};

	Parms.PlacingOn = PlacingOn;
	Parms.StackCount_GSC = StackCount_GSC;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (StackCount != nullptr)
		*StackCount = Parms.StackCount;

	if (CurCropPlot_GSC != nullptr)
		*CurCropPlot_GSC = Parms.CurCropPlot_GSC;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPOverrideCantBuildReasonString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CantBuildReason                                                  (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      OverrideString_BRS                                               (Edit, ConstParm, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (Edit, ConstParm, BlueprintVisible, Net, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool ACropPlotBaseBP_C::BPOverrideCantBuildReasonString(const class FString& OverrideString_BRS, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_BuildString_Int_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPOverrideCantBuildReasonString");

	Params::ACropPlotBaseBP_C_BPOverrideCantBuildReasonString_Params Parms{};

	Parms.OverrideString_BRS = OverrideString_BRS;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Game_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Game_State = Parms.K2Node_DynamicCast_AsShooter_Game_State;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BuildString_Int_ReturnValue != nullptr)
		*CallFunc_BuildString_Int_ReturnValue = std::move(Parms.CallFunc_BuildString_Int_ReturnValue);

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPIsAllowedToBuild
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlacementData              OutPlacementData                                                 (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CurrentAllowedReason                                             (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              BuildReason_IAB                                                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsOverStackLimit_IsOverLimit                            (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

int32 ACropPlotBaseBP_C::BPIsAllowedToBuild(int32 BuildReason_IAB, bool* CallFunc_IsOverStackLimit_IsOverLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPIsAllowedToBuild");

	Params::ACropPlotBaseBP_C_BPIsAllowedToBuild_Params Parms{};

	Parms.BuildReason_IAB = BuildReason_IAB;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsOverStackLimit_IsOverLimit != nullptr)
		*CallFunc_IsOverStackLimit_IsOverLimit = Parms.CallFunc_IsOverStackLimit_IsOverLimit;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.IsOverStackLimit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlacementData              PlacementData                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config)
// bool                               IsOverLimit                                                      (BlueprintVisible, ExportObject, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalStructure*            PlacingOnCropPlot_IOS                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsOverLimit_IOS                                                  (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class APrimalStructureItemContainer_CropPlot*K2Node_DynamicCast_AsPrimal_Structure_Item_Container_Crop_Plot   (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class APrimalStructureItemContainer_CropPlot*K2Node_DynamicCast_AsPrimal_Structure_Item_Container_Crop_Plot_1 (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetCurrentStackCount_StackCount                         (Edit, BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

class APrimalStructureItemContainer_CropPlot* ACropPlotBaseBP_C::IsOverStackLimit(bool IsOverLimit, class APrimalStructure* PlacingOnCropPlot_IOS, bool IsOverLimit_IOS, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_2, int32* CallFunc_GetCurrentStackCount_StackCount, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "IsOverStackLimit");

	Params::ACropPlotBaseBP_C_IsOverStackLimit_Params Parms{};

	Parms.IsOverLimit = IsOverLimit;
	Parms.PlacingOnCropPlot_IOS = PlacingOnCropPlot_IOS;
	Parms.IsOverLimit_IOS = IsOverLimit_IOS;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsShooter_Game_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Game_State = Parms.K2Node_DynamicCast_AsShooter_Game_State;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetCurrentStackCount_StackCount != nullptr)
		*CallFunc_GetCurrentStackCount_StackCount = Parms.CallFunc_GetCurrentStackCount_StackCount;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPServerHandleNetExecCommand
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           FromPC                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               RetVal                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ACropPlotBaseBP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, class FName* CommandName, struct FBPNetExecParams* ExecParams, bool* RetVal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPServerHandleNetExecCommand");

	Params::ACropPlotBaseBP_C_BPServerHandleNetExecCommand_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FromPC != nullptr)
		*FromPC = Parms.FromPC;

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

	if (RetVal != nullptr)
		*RetVal = Parms.RetVal;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.CanAttachToExosuit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool ACropPlotBaseBP_C::CanAttachToExosuit(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "CanAttachToExosuit");

	Params::ACropPlotBaseBP_C_CanAttachToExosuit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.CanBeStoredByExosuit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool ACropPlotBaseBP_C::CanBeStoredByExosuit(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "CanBeStoredByExosuit");

	Params::ACropPlotBaseBP_C_CanBeStoredByExosuit_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPOnCropPhaseDecrease
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              CropPhase                                                        (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

int32 ACropPlotBaseBP_C::BPOnCropPhaseDecrease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPOnCropPhaseDecrease");

	Params::ACropPlotBaseBP_C_BPOnCropPhaseDecrease_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPOnRemovedCrop
// (Event, Public, BlueprintEvent)
// Parameters:

void ACropPlotBaseBP_C::BPOnRemovedCrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPOnRemovedCrop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.BPOnFertilizerItemUsedUp
// (Event, Public, BlueprintEvent)
// Parameters:

void ACropPlotBaseBP_C::BPOnFertilizerItemUsedUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "BPOnFertilizerItemUsedUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CropPlotBaseBP.CropPlotBaseBP_C.ExecuteUbergraph_CropPlotBaseBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              K2Node_Event_CropPhase                                           (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void ACropPlotBaseBP_C::ExecuteUbergraph_CropPlotBaseBP(int32* EntryPoint, int32 K2Node_Event_CropPhase)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CropPlotBaseBP_C", "ExecuteUbergraph_CropPlotBaseBP");

	Params::ACropPlotBaseBP_C_ExecuteUbergraph_CropPlotBaseBP_Params Parms{};

	Parms.K2Node_Event_CropPhase = K2Node_Event_CropPhase;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


