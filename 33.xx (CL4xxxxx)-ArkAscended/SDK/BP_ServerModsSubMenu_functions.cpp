#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_ServerModsSubMenu.BP_ServerModsSubMenu_C
// (None)

class UClass* UBP_ServerModsSubMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ServerModsSubMenu_C");

	return Clss;
}


// BP_ServerModsSubMenu_C BP_ServerModsSubMenu.Default__BP_ServerModsSubMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ServerModsSubMenu_C* UBP_ServerModsSubMenu_C::GetDefaultObj()
{
	static class UBP_ServerModsSubMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ServerModsSubMenu_C*>(UBP_ServerModsSubMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ModListToCombinedString
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<int64>                      Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              AllStrings                                                       (ConstParm, BlueprintVisible, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_JoinStringArray_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

int32 UBP_ServerModsSubMenu_C::ModListToCombinedString(TArray<int64>* Array, const class FString& ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_JoinStringArray_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ModListToCombinedString");

	Params::UBP_ServerModsSubMenu_C_ModListToCombinedString_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_JoinStringArray_ReturnValue = CallFunc_JoinStringArray_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "BndEvt__BP_ServerModsSubMenu_BUTTON_FAV_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "BndEvt__BP_ServerModsSubMenu_BUTTON_REPORT_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_user_token                                                  (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

class FString UBP_ServerModsSubMenu_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "CustomEvent_3");

	Params::UBP_ServerModsSubMenu_C_CustomEvent_3_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.CustomEvent_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UBP_ServerModsSubMenu_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "CustomEvent_4");

	Params::UBP_ServerModsSubMenu_C_CustomEvent_4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ReportServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::ReportServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ReportServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ExecuteUbergraph_BP_ServerModsSubMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      K2Node_CustomEvent_temp_user_token                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_ModListToCombinedString_ReturnValue                     (ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UBP_ServerModsSubMenu_C::ExecuteUbergraph_BP_ServerModsSubMenu(class FString* CallFunc_Conv_TextToString_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ExecuteUbergraph_BP_ServerModsSubMenu");

	Params::UBP_ServerModsSubMenu_C_ExecuteUbergraph_BP_ServerModsSubMenu_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	return Parms.ReturnValue;

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.FavoriteEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::FavoriteEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "FavoriteEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ServerModsSubMenu.BP_ServerModsSubMenu_C.ReportEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_ServerModsSubMenu_C::ReportEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ServerModsSubMenu_C", "ReportEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


