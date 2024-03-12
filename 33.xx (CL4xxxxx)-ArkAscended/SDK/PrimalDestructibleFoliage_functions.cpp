#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalDestructibleFoliage.PrimalDestructibleFoliage_C
// (Actor)

class UClass* APrimalDestructibleFoliage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalDestructibleFoliage_C");

	return Clss;
}


// PrimalDestructibleFoliage_C PrimalDestructibleFoliage.Default__PrimalDestructibleFoliage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimalDestructibleFoliage_C* APrimalDestructibleFoliage_C::GetDefaultObj()
{
	static class APrimalDestructibleFoliage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimalDestructibleFoliage_C*>(APrimalDestructibleFoliage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.InitializeVariablesFromGameplayData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_BPGetMaxIndex_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_2                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_3                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_4                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_5                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_ProjectVectorOnToPlane_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_3                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_4                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_5                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_OutRangeB_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_OutRangeA_ImplicitCast                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

struct FVector APrimalDestructibleFoliage_C::InitializeVariablesFromGameplayData(int32* CallFunc_BPGetMaxIndex_ReturnValue, struct FVector* CallFunc_GetActorScale3D_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, struct FVector* CallFunc_ProjectVectorOnToPlane_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_4, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_5, double CallFunc_MapRangeClamped_Value_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeB_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeA_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "InitializeVariablesFromGameplayData");

	Params::APrimalDestructibleFoliage_C_InitializeVariablesFromGameplayData_Params Parms{};

	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_3 = CallFunc_Multiply_VectorVector_ReturnValue_3;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_4 = CallFunc_Multiply_VectorVector_ReturnValue_4;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_5 = CallFunc_Multiply_VectorVector_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetMaxIndex_ReturnValue != nullptr)
		*CallFunc_BPGetMaxIndex_ReturnValue = Parms.CallFunc_BPGetMaxIndex_ReturnValue;

	if (CallFunc_GetActorScale3D_ReturnValue != nullptr)
		*CallFunc_GetActorScale3D_ReturnValue = std::move(Parms.CallFunc_GetActorScale3D_ReturnValue);

	if (CallFunc_ProjectVectorOnToPlane_ReturnValue != nullptr)
		*CallFunc_ProjectVectorOnToPlane_ReturnValue = std::move(Parms.CallFunc_ProjectVectorOnToPlane_ReturnValue);

	if (CallFunc_MapRangeClamped_OutRangeB_ImplicitCast != nullptr)
		*CallFunc_MapRangeClamped_OutRangeB_ImplicitCast = Parms.CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;

	if (CallFunc_MapRangeClamped_OutRangeA_ImplicitCast != nullptr)
		*CallFunc_MapRangeClamped_OutRangeA_ImplicitCast = Parms.CallFunc_MapRangeClamped_OutRangeA_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromRandomClusterIndexArray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int32>                      ItemIndexArrayOfCluster                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// double                             BreakLevelPercent__0Minus1_                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      RandomIndexArray                                                 (ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              RandomIndex                                                      (Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Seed                                                             (ExportObject, OutParm, Transient, EditConst, SubobjectReference)
// int32                              IndexNumber                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Round_ReturnValue                                       (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetMillisecond_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FRandomStream               CallFunc_MakeRandomStream_ReturnValue                            (ConstParm, ExportObject, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_RandomIntegerInRangeFromStream_ReturnValue              (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

int32 APrimalDestructibleFoliage_C::BreakClusterFromRandomClusterIndexArray(TArray<int32>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor, double BreakLevelPercent__0Minus1_, int32* Seed, int32* IndexNumber, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32* Temp_int_Variable, struct FDateTime* CallFunc_Now_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, int32* CallFunc_GetMillisecond_ReturnValue, int32* Temp_int_Variable_1, struct FRandomStream* CallFunc_MakeRandomStream_ReturnValue, int32 CallFunc_RandomIntegerInRangeFromStream_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "BreakClusterFromRandomClusterIndexArray");

	Params::APrimalDestructibleFoliage_C_BreakClusterFromRandomClusterIndexArray_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;
	Parms.BreakLevelPercent__0Minus1_ = BreakLevelPercent__0Minus1_;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRangeFromStream_ReturnValue = CallFunc_RandomIntegerInRangeFromStream_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIndexArrayOfCluster != nullptr)
		*ItemIndexArrayOfCluster = std::move(Parms.ItemIndexArrayOfCluster);

	if (Seed != nullptr)
		*Seed = Parms.Seed;

	if (IndexNumber != nullptr)
		*IndexNumber = Parms.IndexNumber;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Now_ReturnValue != nullptr)
		*CallFunc_Now_ReturnValue = std::move(Parms.CallFunc_Now_ReturnValue);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetMillisecond_ReturnValue != nullptr)
		*CallFunc_GetMillisecond_ReturnValue = Parms.CallFunc_GetMillisecond_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_MakeRandomStream_ReturnValue != nullptr)
		*CallFunc_MakeRandomStream_ReturnValue = std::move(Parms.CallFunc_MakeRandomStream_ReturnValue);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndexArray
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int32>                      ItemIndexArrayOfCluster                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Seed                                                             (ExportObject, OutParm, Transient, EditConst, SubobjectReference)
// int32                              IndexNumber                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

int32 APrimalDestructibleFoliage_C::BreakClusterFromClusterIndexArray(TArray<int32>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor, int32* Seed, int32* IndexNumber, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* Temp_int_Variable, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "BreakClusterFromClusterIndexArray");

	Params::APrimalDestructibleFoliage_C_BreakClusterFromClusterIndexArray_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIndexArrayOfCluster != nullptr)
		*ItemIndexArrayOfCluster = std::move(Parms.ItemIndexArrayOfCluster);

	if (Seed != nullptr)
		*Seed = Parms.Seed;

	if (IndexNumber != nullptr)
		*IndexNumber = Parms.IndexNumber;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Group Cluster Index by Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              NumberOfPiecesInGeoColl                                          (ExportObject, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level0                                                           (Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level1                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level2                                                           (BlueprintVisible, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level2Index                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level1Index                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level0Index                                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level2Array                                                      (ExportObject, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level1Array                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level0Array                                                      (BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              IndexNumber                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetInitialLevel_ReturnValue                             (BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)

int32 APrimalDestructibleFoliage_C::Group_Cluster_Index_by_Level(const struct FLinearColor& DebugTextColor, int32* IndexNumber, int32* CallFunc_GetInitialLevel_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "Group Cluster Index by Level");

	Params::APrimalDestructibleFoliage_C_Group_Cluster_Index_by_Level_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IndexNumber != nullptr)
		*IndexNumber = Parms.IndexNumber;

	if (CallFunc_GetInitialLevel_ReturnValue != nullptr)
		*CallFunc_GetInitialLevel_ReturnValue = Parms.CallFunc_GetInitialLevel_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (Temp_int_Variable_3 != nullptr)
		*Temp_int_Variable_3 = Parms.Temp_int_Variable_3;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetRangeOfLevelsFromClusterIndexes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              StartItemIndexOfCluster                                          (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              EndItemIndexOfCluster                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level0                                                           (Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level1                                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level2                                                           (BlueprintVisible, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level_2_Index                                                    (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level_1_Index                                                    (ExportObject, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level_0_Index                                                    (ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level_2_Array                                                    (BlueprintReadOnly, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level_1_Array                                                    (EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Level_0_Array                                                    (BlueprintReadOnly, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              IndexNumber                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetInitialLevel_ReturnValue                             (BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable_2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)

int32 APrimalDestructibleFoliage_C::GetRangeOfLevelsFromClusterIndexes(int32 EndItemIndexOfCluster, const struct FLinearColor& DebugTextColor, int32* IndexNumber, int32* CallFunc_GetInitialLevel_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "GetRangeOfLevelsFromClusterIndexes");

	Params::APrimalDestructibleFoliage_C_GetRangeOfLevelsFromClusterIndexes_Params Parms{};

	Parms.EndItemIndexOfCluster = EndItemIndexOfCluster;
	Parms.DebugTextColor = DebugTextColor;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IndexNumber != nullptr)
		*IndexNumber = Parms.IndexNumber;

	if (CallFunc_GetInitialLevel_ReturnValue != nullptr)
		*CallFunc_GetInitialLevel_ReturnValue = Parms.CallFunc_GetInitialLevel_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (Temp_int_Variable_3 != nullptr)
		*Temp_int_Variable_3 = Parms.Temp_int_Variable_3;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetDamageThresholdInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Damage_Threshold_Array_Length                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 APrimalDestructibleFoliage_C::GetDamageThresholdInfo(const struct FLinearColor& DebugTextColor, int32 Damage_Threshold_Array_Length, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "GetDamageThresholdInfo");

	Params::APrimalDestructibleFoliage_C_GetDamageThresholdInfo_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;
	Parms.Damage_Threshold_Array_Length = Damage_Threshold_Array_Length;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakAllActiveClusters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)

class UGeometryCollectionComponent* APrimalDestructibleFoliage_C::BreakAllActiveClusters(const struct FLinearColor& DebugTextColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "BreakAllActiveClusters");

	Params::APrimalDestructibleFoliage_C_BreakAllActiveClusters_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ItemIndexOfCluster                                               (Edit, ConstParm, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

struct FVector APrimalDestructibleFoliage_C::BreakClusterFromClusterIndex(int32* ItemIndexOfCluster, const struct FLinearColor& DebugTextColor, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "BreakClusterFromClusterIndex");

	Params::APrimalDestructibleFoliage_C_BreakClusterFromClusterIndex_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIndexOfCluster != nullptr)
		*ItemIndexOfCluster = Parms.ItemIndexOfCluster;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetLevelFromClusterIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGeometryCollectionComponent*GeoCollection                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              ItemIndexOfCluster                                               (Edit, ConstParm, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FLinearColor                DebugTextColor                                                   (Edit, ConstParm, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Level                                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
// int32                              CallFunc_GetInitialLevel_ReturnValue                             (BlueprintReadOnly, Net, OutParm, Config, EditConst, InstancedReference, SubobjectReference)

int32 APrimalDestructibleFoliage_C::GetLevelFromClusterIndex(int32* ItemIndexOfCluster, const struct FLinearColor& DebugTextColor, int32* CallFunc_GetInitialLevel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "GetLevelFromClusterIndex");

	Params::APrimalDestructibleFoliage_C_GetLevelFromClusterIndex_Params Parms{};

	Parms.DebugTextColor = DebugTextColor;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIndexOfCluster != nullptr)
		*ItemIndexOfCluster = Parms.ItemIndexOfCluster;

	if (CallFunc_GetInitialLevel_ReturnValue != nullptr)
		*CallFunc_GetInitialLevel_ReturnValue = Parms.CallFunc_GetInitialLevel_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Break
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrimalDestructibleFoliage_C::Break()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "Break");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakSecondLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrimalDestructibleFoliage_C::BreakSecondLayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "BreakSecondLayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BPStartDestruction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UGeometryCollection*         DestructionAsset                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     HitDirection                                                     (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              Damage                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              TotalHealth                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float APrimalDestructibleFoliage_C::BPStartDestruction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "BPStartDestruction");

	Params::APrimalDestructibleFoliage_C_BPStartDestruction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrimalDestructibleFoliage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.OnBreak
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FChaosBreakEvent            BreakEvent                                                       (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void APrimalDestructibleFoliage_C::OnBreak(struct FChaosBreakEvent* BreakEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "OnBreak");

	Params::APrimalDestructibleFoliage_C_OnBreak_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BreakEvent != nullptr)
		*BreakEvent = std::move(Parms.BreakEvent);

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.StaticBPPreDestructionHandleAttachedComponentClass
// (Event, Public, BlueprintEvent)
// Parameters:
// class UClass*                      AttachedComponentClass                                           (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// class UInstancedStaticMeshComponent*ForMeshComp                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     InstancePosition                                                 (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    InstanceRotation                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InstanceIndex                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     HitDirection                                                     (Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              Damage                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// float                              TotalHealth                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float APrimalDestructibleFoliage_C::StaticBPPreDestructionHandleAttachedComponentClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "StaticBPPreDestructionHandleAttachedComponentClass");

	Params::APrimalDestructibleFoliage_C_StaticBPPreDestructionHandleAttachedComponentClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ExecuteUbergraph_PrimalDestructibleFoliage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C*CallFunc_AddComponentByClass_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FChaosBreakEvent            K2Node_CustomEvent_BreakEvent                                    (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class UGeometryCollection*         K2Node_Event_destructionAsset                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_HitDirection_1                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_Event_Damage_1                                            (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_Event_TotalHealth_1                                       (Edit, ConstParm, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<int32>                      CallFunc_Group_Cluster_Index_by_Level_Level0                     (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      CallFunc_Group_Cluster_Index_by_Level_Level1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      CallFunc_Group_Cluster_Index_by_Level_level2                     (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_GetMass_ReturnValue                                     (Edit, ConstParm, EditFixedSize, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimerForNextTick_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue_2                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UClass*                      K2Node_Event_AttachedComponentClass                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// class UInstancedStaticMeshComponent*K2Node_Event_ForMeshComp                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     K2Node_Event_InstancePosition                                    (Edit, ConstParm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FRotator                    K2Node_Event_InstanceRotation                                    (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_InstanceIndex                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_HitDirection                                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_Event_Damage                                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_Event_TotalHealth                                         (Edit, ConstParm, Net, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Harvesting_Component            (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetAllMassScale_InMassScale_ImplicitCast                (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_AddRadialImpulse_Strength_ImplicitCast                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

float APrimalDestructibleFoliage_C::ExecuteUbergraph_PrimalDestructibleFoliage(int32* EntryPoint, class UBP_PrimalWindSourceComponent_GeoCollection_Foliage_C* CallFunc_AddComponentByClass_ReturnValue, struct FChaosBreakEvent* K2Node_CustomEvent_BreakEvent, class UGeometryCollection** K2Node_Event_destructionAsset, struct FVector* K2Node_Event_HitDirection_1, float* K2Node_Event_Damage_1, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, TArray<int32>* CallFunc_Group_Cluster_Index_by_Level_Level0, TArray<int32>* CallFunc_Group_Cluster_Index_by_Level_Level1, TArray<int32>* CallFunc_Group_Cluster_Index_by_Level_level2, float* CallFunc_GetMass_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, class UClass** K2Node_Event_AttachedComponentClass, class UInstancedStaticMeshComponent* K2Node_Event_ForMeshComp, int32* K2Node_Event_InstanceIndex, struct FVector* K2Node_Event_HitDirection, float* K2Node_Event_Damage, class UClass** K2Node_ClassDynamicCast_AsPrimal_Harvesting_Component, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_SetAllMassScale_InMassScale_ImplicitCast, float CallFunc_AddRadialImpulse_Strength_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalDestructibleFoliage_C", "ExecuteUbergraph_PrimalDestructibleFoliage");

	Params::APrimalDestructibleFoliage_C_ExecuteUbergraph_PrimalDestructibleFoliage_Params Parms{};

	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.K2Node_Event_ForMeshComp = K2Node_Event_ForMeshComp;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_SetAllMassScale_InMassScale_ImplicitCast = CallFunc_SetAllMassScale_InMassScale_ImplicitCast;
	Parms.CallFunc_AddRadialImpulse_Strength_ImplicitCast = CallFunc_AddRadialImpulse_Strength_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_BreakEvent != nullptr)
		*K2Node_CustomEvent_BreakEvent = std::move(Parms.K2Node_CustomEvent_BreakEvent);

	if (K2Node_Event_destructionAsset != nullptr)
		*K2Node_Event_destructionAsset = Parms.K2Node_Event_destructionAsset;

	if (K2Node_Event_HitDirection_1 != nullptr)
		*K2Node_Event_HitDirection_1 = std::move(Parms.K2Node_Event_HitDirection_1);

	if (K2Node_Event_Damage_1 != nullptr)
		*K2Node_Event_Damage_1 = Parms.K2Node_Event_Damage_1;

	if (CallFunc_Group_Cluster_Index_by_Level_Level0 != nullptr)
		*CallFunc_Group_Cluster_Index_by_Level_Level0 = std::move(Parms.CallFunc_Group_Cluster_Index_by_Level_Level0);

	if (CallFunc_Group_Cluster_Index_by_Level_Level1 != nullptr)
		*CallFunc_Group_Cluster_Index_by_Level_Level1 = std::move(Parms.CallFunc_Group_Cluster_Index_by_Level_Level1);

	if (CallFunc_Group_Cluster_Index_by_Level_level2 != nullptr)
		*CallFunc_Group_Cluster_Index_by_Level_level2 = std::move(Parms.CallFunc_Group_Cluster_Index_by_Level_level2);

	if (CallFunc_GetMass_ReturnValue != nullptr)
		*CallFunc_GetMass_ReturnValue = Parms.CallFunc_GetMass_ReturnValue;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	if (K2Node_Event_AttachedComponentClass != nullptr)
		*K2Node_Event_AttachedComponentClass = Parms.K2Node_Event_AttachedComponentClass;

	if (K2Node_Event_InstanceIndex != nullptr)
		*K2Node_Event_InstanceIndex = Parms.K2Node_Event_InstanceIndex;

	if (K2Node_Event_HitDirection != nullptr)
		*K2Node_Event_HitDirection = std::move(Parms.K2Node_Event_HitDirection);

	if (K2Node_Event_Damage != nullptr)
		*K2Node_Event_Damage = Parms.K2Node_Event_Damage;

	if (K2Node_ClassDynamicCast_AsPrimal_Harvesting_Component != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Harvesting_Component = Parms.K2Node_ClassDynamicCast_AsPrimal_Harvesting_Component;

	return Parms.ReturnValue;

}

}


