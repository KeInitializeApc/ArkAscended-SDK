#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C
// (None)

class UClass* UEyebrowStyle_Selector_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EyebrowStyle_Selector_ASA_C");

	return Clss;
}


// EyebrowStyle_Selector_ASA_C EyebrowStyle_Selector_ASA.Default__EyebrowStyle_Selector_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEyebrowStyle_Selector_ASA_C* UEyebrowStyle_Selector_ASA_C::GetDefaultObj()
{
	static class UEyebrowStyle_Selector_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEyebrowStyle_Selector_ASA_C*>(UEyebrowStyle_Selector_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.RefreshOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  FinalIcon                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FHairStyleDefinition>HairDefinition                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FHairStyleDefinition        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_AssetResolve_ReturnValue                                (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UOptionSelector_Widget_C*    K2Node_DynamicCast_AsOption_Selector_Widget                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class FText UEyebrowStyle_Selector_ASA_C::RefreshOptions(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, const struct FHairStyleDefinition& CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, class UWidget** CallFunc_GetChildAt_ReturnValue, class UOptionSelector_Widget_C** K2Node_DynamicCast_AsOption_Selector_Widget, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyebrowStyle_Selector_ASA_C", "RefreshOptions");

	Params::UEyebrowStyle_Selector_ASA_C_RefreshOptions_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_AsOption_Selector_Widget != nullptr)
		*K2Node_DynamicCast_AsOption_Selector_Widget = Parms.K2Node_DynamicCast_AsOption_Selector_Widget;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.GetOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2D*>          Icons                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class FString>              Names                                                            (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalGameData*             NewLocalVar                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// TArray<class UTexture2D*>          HairIcons                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<class FString>              HairNames                                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FHairStyleDefinition        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_AssetResolve_ReturnValue                                (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

int32 UEyebrowStyle_Selector_ASA_C::GetOptions(TArray<class UTexture2D*>* Icons, TArray<class UTexture2D*>* HairIcons, TArray<class FString>* HairNames, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, const struct FHairStyleDefinition& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyebrowStyle_Selector_ASA_C", "GetOptions");

	Params::UEyebrowStyle_Selector_ASA_C_GetOptions_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Icons != nullptr)
		*Icons = std::move(Parms.Icons);

	if (HairIcons != nullptr)
		*HairIcons = std::move(Parms.HairIcons);

	if (HairNames != nullptr)
		*HairNames = std::move(Parms.HairNames);

	return Parms.ReturnValue;

}


// Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UEyebrowStyle_Selector_ASA_C::BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyebrowStyle_Selector_ASA_C", "BPExecutedCommandForPrimalUI");

	Params::UEyebrowStyle_Selector_ASA_C_BPExecutedCommandForPrimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

}


// Function EyebrowStyle_Selector_ASA.EyebrowStyle_Selector_ASA_C.ExecuteUbergraph_EyebrowStyle_Selector_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FName                        K2Node_Event_CommandName                                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchName_CmpSuccess                                     (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UEyebrowStyle_Selector_ASA_C::ExecuteUbergraph_EyebrowStyle_Selector_ASA(int32* EntryPoint, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool CallFunc_Conv_IntToBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EyebrowStyle_Selector_ASA_C", "ExecuteUbergraph_EyebrowStyle_Selector_ASA");

	Params::UEyebrowStyle_Selector_ASA_C_ExecuteUbergraph_EyebrowStyle_Selector_ASA_Params Parms{};

	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


