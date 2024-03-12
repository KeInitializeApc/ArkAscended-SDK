#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C
// (Actor)

class UClass* ANinjaLive_MemoryPoolManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NinjaLive_MemoryPoolManager_C");

	return Clss;
}


// NinjaLive_MemoryPoolManager_C NinjaLive_MemoryPoolManager.Default__NinjaLive_MemoryPoolManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANinjaLive_MemoryPoolManager_C* ANinjaLive_MemoryPoolManager_C::GetDefaultObj()
{
	static class ANinjaLive_MemoryPoolManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANinjaLive_MemoryPoolManager_C*>(ANinjaLive_MemoryPoolManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.MemCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumberOfChannels                                                 (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              ResolutionX                                                      (ConstParm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              ResolutionY                                                      (Edit, ExportObject, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// enum class ESimPrecision_Enum      Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

double ANinjaLive_MemoryPoolManager_C::MemCount(enum class ESimPrecision_Enum Temp_byte_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32 K2Node_Select_Default, double* CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "MemCount");

	Params::ANinjaLive_MemoryPoolManager_C_MemCount_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.SetRenderTargetAttribs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextureRenderTarget2D*      InputPin                                                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// bool                               Clamping                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// class UTextureRenderTarget2D*      RT                                                               (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// enum class ETextureAddress         Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ETextureAddress         Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ETextureAddress         K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UTextureRenderTarget2D* ANinjaLive_MemoryPoolManager_C::SetRenderTargetAttribs(class UTextureRenderTarget2D** InputPin, enum class ETextureAddress Temp_byte_Variable, enum class ETextureAddress Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ETextureAddress K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "SetRenderTargetAttribs");

	Params::ANinjaLive_MemoryPoolManager_C_SetRenderTargetAttribs_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InputPin != nullptr)
		*InputPin = Parms.InputPin;

	return Parms.ReturnValue;

}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ANinjaLive_MemoryPoolManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void ANinjaLive_MemoryPoolManager_C::ReceiveTick(float* DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "ReceiveTick");

	Params::ANinjaLive_MemoryPoolManager_C_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ANinjaLive_MemoryPoolManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.PrintMemStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Consumer                                                         (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// double                             MemConsumption                                                   (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               TakenOrReturned                                                  (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)

bool ANinjaLive_MemoryPoolManager_C::PrintMemStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "PrintMemStatus");

	Params::ANinjaLive_MemoryPoolManager_C_PrintMemStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C.ExecuteUbergraph_NinjaLive_MemoryPoolManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class ESimPrecision_Enum      Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// enum class ETextureRenderTargetFormatTemp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UObject*                     K2Node_CustomEvent_Consumer                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_CustomEvent_MemConsumption                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_TakenOrReturned                               (Edit, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// enum class ETextureRenderTargetFormatTemp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ETextureRenderTargetFormatTemp_byte_Variable_3                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FindSubstring_ReturnValue                               (Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_LeftChop_ReturnValue                                    (BlueprintReadOnly, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// enum class ETextureRenderTargetFormatTemp_byte_Variable_4                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// enum class ETextureRenderTargetFormatK2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ETextureRenderTargetFormatK2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue                        (Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ETextureRenderTargetFormatTemp_byte_Variable_5                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable_2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_3                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Variable_4                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// enum class ETextureRenderTargetFormatTemp_byte_Variable_6                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Variable_5                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// int32                              K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable_6                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable_7                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class AActor*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UNinjaLiveComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_8                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ETextureRenderTargetFormatK2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue_1                      (Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UTextureRenderTarget2D*      CallFunc_SetRenderTargetAttribs_RT                               (Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// struct FRenderTargetListItem       K2Node_MakeStruct_RenderTargetListItem                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UTextureRenderTarget2D*      CallFunc_SetRenderTargetAttribs_RT_1                             (Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FRenderTargetListItem       K2Node_MakeStruct_RenderTargetListItem_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_2                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UTextureRenderTarget2D*      CallFunc_CreateRenderTarget2D_ReturnValue_2                      (Edit, ConstParm, Net, EditFixedSize, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UTextureRenderTarget2D*      CallFunc_SetRenderTargetAttribs_RT_2                             (Net, Parm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FRenderTargetListItem       K2Node_MakeStruct_RenderTargetListItem_2                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

int32 ANinjaLive_MemoryPoolManager_C::ExecuteUbergraph_NinjaLive_MemoryPoolManager(int32* EntryPoint, enum class ESimPrecision_Enum Temp_byte_Variable, float K2Node_Event_DeltaSeconds, enum class ETextureRenderTargetFormat Temp_byte_Variable_1, double* CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, enum class ETextureRenderTargetFormat Temp_byte_Variable_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue, int32* Temp_int_Variable, int32 Temp_int_Array_Index_Variable, enum class ETextureRenderTargetFormat Temp_byte_Variable_3, int32 CallFunc_Len_ReturnValue, int32* CallFunc_FindSubstring_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, enum class ETextureRenderTargetFormat Temp_byte_Variable_4, int32* Temp_int_Variable_1, enum class ETextureRenderTargetFormat K2Node_Select_Default, enum class ETextureRenderTargetFormat K2Node_Select_Default_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, enum class ETextureRenderTargetFormat Temp_byte_Variable_5, int32 Temp_int_Loop_Counter_Variable, int32* Temp_int_Variable_2, int32* Temp_int_Variable_3, int32* Temp_int_Variable_4, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class ETextureRenderTargetFormat Temp_byte_Variable_6, int32* Temp_int_Variable_5, int32 K2Node_Select_Default_2, int32* Temp_int_Variable_6, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32* Temp_int_Variable_7, class AActor* CallFunc_Array_Get_Item, int32* Temp_int_Variable_8, enum class ETextureRenderTargetFormat K2Node_Select_Default_3, int32* CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32* CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32* CallFunc_MakeLiteralInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NinjaLive_MemoryPoolManager_C", "ExecuteUbergraph_NinjaLive_MemoryPoolManager");

	Params::ANinjaLive_MemoryPoolManager_C_ExecuteUbergraph_NinjaLive_MemoryPoolManager_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_Conv_BoolToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_BoolToDouble_ReturnValue = Parms.CallFunc_Conv_BoolToDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_FindSubstring_ReturnValue != nullptr)
		*CallFunc_FindSubstring_ReturnValue = Parms.CallFunc_FindSubstring_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (Temp_int_Variable_3 != nullptr)
		*Temp_int_Variable_3 = Parms.Temp_int_Variable_3;

	if (Temp_int_Variable_4 != nullptr)
		*Temp_int_Variable_4 = Parms.Temp_int_Variable_4;

	if (Temp_int_Variable_5 != nullptr)
		*Temp_int_Variable_5 = Parms.Temp_int_Variable_5;

	if (Temp_int_Variable_6 != nullptr)
		*Temp_int_Variable_6 = Parms.Temp_int_Variable_6;

	if (Temp_int_Variable_7 != nullptr)
		*Temp_int_Variable_7 = Parms.Temp_int_Variable_7;

	if (Temp_int_Variable_8 != nullptr)
		*Temp_int_Variable_8 = Parms.Temp_int_Variable_8;

	if (CallFunc_MakeLiteralInt_ReturnValue != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue = Parms.CallFunc_MakeLiteralInt_ReturnValue;

	if (CallFunc_MakeLiteralInt_ReturnValue_1 != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue_1 = Parms.CallFunc_MakeLiteralInt_ReturnValue_1;

	if (CallFunc_MakeLiteralInt_ReturnValue_2 != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue_2 = Parms.CallFunc_MakeLiteralInt_ReturnValue_2;

	return Parms.ReturnValue;

}

}


