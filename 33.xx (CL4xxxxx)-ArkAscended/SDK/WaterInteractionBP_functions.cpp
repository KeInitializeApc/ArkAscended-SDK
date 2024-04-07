#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterInteractionBP.WaterInteractionBP_C
// (Actor)

class UClass* AWaterInteractionBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterInteractionBP_C");

	return Clss;
}


// WaterInteractionBP_C WaterInteractionBP.Default__WaterInteractionBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWaterInteractionBP_C* AWaterInteractionBP_C::GetDefaultObj()
{
	static class AWaterInteractionBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWaterInteractionBP_C*>(AWaterInteractionBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WaterInteractionBP.WaterInteractionBP_C.CheckHalfSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetActualResolutionX_ResX                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

struct FVector AWaterInteractionBP_C::CheckHalfSize(const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "CheckHalfSize");

	Params::AWaterInteractionBP_C_CheckHalfSize_Params Parms{};

	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaterInteractionBP.WaterInteractionBP_C.CheckDisable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsFluidSimEnabled_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

float AWaterInteractionBP_C::CheckDisable(double* CallFunc_Conv_BoolToDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "CheckDisable");

	Params::AWaterInteractionBP_C_CheckDisable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_BoolToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_BoolToDouble_ReturnValue = Parms.CallFunc_Conv_BoolToDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function WaterInteractionBP.WaterInteractionBP_C.StagePrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Note                                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
// class FString                      Name                                                             (ConstParm, Net, OutParm)
// bool                               CallFunc_IsEditor_ReturnValue                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, EditConst, InstancedReference, SubobjectReference)

class FString AWaterInteractionBP_C::StagePrint(class FString* Name, bool* CallFunc_IsEditor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "StagePrint");

	Params::AWaterInteractionBP_C_StagePrint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = std::move(Parms.Name);

	if (CallFunc_IsEditor_ReturnValue != nullptr)
		*CallFunc_IsEditor_ReturnValue = Parms.CallFunc_IsEditor_ReturnValue;

	return Parms.ReturnValue;

}


// Function WaterInteractionBP.WaterInteractionBP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AWaterInteractionBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WaterInteractionBP.WaterInteractionBP_C.LiveActivation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParamName                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             FadeTimeOfBrush                                                  (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             FadeTimeOfCanvas                                                 (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

double AWaterInteractionBP_C::LiveActivation(class FName ParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "LiveActivation");

	Params::AWaterInteractionBP_C_LiveActivation_Params Parms{};

	Parms.ParamName = ParamName;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WaterInteractionBP.WaterInteractionBP_C.LiveFluidParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BrushSize                                                        (ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void AWaterInteractionBP_C::LiveFluidParams(double BrushSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "LiveFluidParams");

	Params::AWaterInteractionBP_C_LiveFluidParams_Params Parms{};

	Parms.BrushSize = BrushSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WaterInteractionBP.WaterInteractionBP_C.ExecuteUbergraph_WaterInteractionBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class ABP_IslandWaterPlane_C*>CallFunc_GetAllActorsOfClass_OutActors                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class AActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class ABP_IslandWaterPlane_C*      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class AStaticMeshActor*            K2Node_DynamicCast_AsStatic_Mesh_Actor                           (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FName                        K2Node_Event_ParamName                                           (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_Event_FadeTimeOfBrush                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_Event_FadeTimeOfCanvas                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_Event_BrushSize                                           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

double AWaterInteractionBP_C::ExecuteUbergraph_WaterInteractionBP(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, const TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class ABP_IslandWaterPlane_C* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, double* K2Node_Event_FadeTimeOfBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WaterInteractionBP_C", "ExecuteUbergraph_WaterInteractionBP");

	Params::AWaterInteractionBP_C_ExecuteUbergraph_WaterInteractionBP_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_Event_FadeTimeOfBrush != nullptr)
		*K2Node_Event_FadeTimeOfBrush = Parms.K2Node_Event_FadeTimeOfBrush;

	return Parms.ReturnValue;

}

}


