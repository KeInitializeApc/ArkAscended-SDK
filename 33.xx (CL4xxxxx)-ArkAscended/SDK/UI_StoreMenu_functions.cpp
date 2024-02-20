#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StoreMenu.UI_StoreMenu_C
// (None)

class UClass* UUI_StoreMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StoreMenu_C");

	return Clss;
}


// UI_StoreMenu_C UI_StoreMenu.Default__UI_StoreMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StoreMenu_C* UUI_StoreMenu_C::GetDefaultObj()
{
	static class UUI_StoreMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StoreMenu_C*>(UUI_StoreMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StoreMenu.UI_StoreMenu_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUI_StoreMenu_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnEventBroadcasted");

	Params::UUI_StoreMenu_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.GetAllModsIDs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      List                                                             (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// TArray<int64>                      NewLocalVar                                                      (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

bool UUI_StoreMenu_C::GetAllModsIDs(TArray<int64>* List, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "GetAllModsIDs");

	Params::UUI_StoreMenu_C_GetAllModsIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = std::move(Parms.List);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.DestroyPremiumCheckHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_StoreMenu_C::DestroyPremiumCheckHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DestroyPremiumCheckHandle");

	Params::UUI_StoreMenu_C_DestroyPremiumCheckHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_StoreMenu_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BPEscapeClosed");

	Params::UUI_StoreMenu_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.DebugSignIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::DebugSignIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DebugSignIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.NotificationHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Selection                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         Mod                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FInstallProgressMod         ModToHandle                                                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output_1                                (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UUI_StoreMenu_C::NotificationHandle(class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output_1, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "NotificationHandle");

	Params::UUI_StoreMenu_C_NotificationHandle_Params Parms{};

	Parms.CallFunc_GetNotifManager_Output = CallFunc_GetNotifManager_Output;
	Parms.CallFunc_GetNotifManager_Output_1 = CallFunc_GetNotifManager_Output_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::UI_StoreMenu_AutoGenFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UI_StoreMenu_AutoGenFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc4
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::UI_StoreMenu_AutoGenFunc4(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UI_StoreMenu_AutoGenFunc4");

	Params::UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc4_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.UI_StoreMenu_AutoGenFunc3
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              ServerID                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::UI_StoreMenu_AutoGenFunc3(int64 ServerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UI_StoreMenu_AutoGenFunc3");

	Params::UUI_StoreMenu_C_UI_StoreMenu_AutoGenFunc3_Params Parms{};

	Parms.ServerID = ServerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.RequestInstalledModsFromAPI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::RequestInstalledModsFromAPI(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "RequestInstalledModsFromAPI");

	Params::UUI_StoreMenu_C_RequestInstalledModsFromAPI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Back from Server Mods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::Back_from_Server_Mods(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Back from Server Mods");

	Params::UUI_StoreMenu_C_Back_from_Server_Mods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.SwitchControllerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_5                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_6                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_7                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)
// class UUI_NotificationManager_C*   CallFunc_GetNotifManager_Output                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            K2Node_DynamicCast_AsUI_Parent_Page                              (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_ParentPage_C*            K2Node_DynamicCast_AsUI_Parent_Page_1                            (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UUI_StoreMenu_C::SwitchControllerAction(enum class EViewState State, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, class UUI_NotificationManager_C* CallFunc_GetNotifManager_Output, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* K2Node_SwitchInteger_CmpSuccess, bool* K2Node_SwitchInteger_CmpSuccess_1, bool* K2Node_SwitchInteger_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SwitchControllerAction");

	Params::UUI_StoreMenu_C_SwitchControllerAction_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_5 = CallFunc_EqualEqual_KeyKey_ReturnValue_5;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_6 = CallFunc_EqualEqual_KeyKey_ReturnValue_6;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_7 = CallFunc_EqualEqual_KeyKey_ReturnValue_7;
	Parms.CallFunc_GetNotifManager_Output = CallFunc_GetNotifManager_Output;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (K2Node_SwitchInteger_CmpSuccess_1 != nullptr)
		*K2Node_SwitchInteger_CmpSuccess_1 = Parms.K2Node_SwitchInteger_CmpSuccess_1;

	if (K2Node_SwitchInteger_CmpSuccess_2 != nullptr)
		*K2Node_SwitchInteger_CmpSuccess_2 = Parms.K2Node_SwitchInteger_CmpSuccess_2;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.SetInitStoreFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            K2Node_DynamicCast_AsUI_Parent_Page                              (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_StoreMenu_C::SetInitStoreFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SetInitStoreFocus");

	Params::UUI_StoreMenu_C_SetInitStoreFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.PlayStartFadeInAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::PlayStartFadeInAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "PlayStartFadeInAnimation");

	Params::UUI_StoreMenu_C_PlayStartFadeInAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.EnabledTabSwitching
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInIsEnabled                                                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUI_StoreMenu_C::EnabledTabSwitching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "EnabledTabSwitching");

	Params::UUI_StoreMenu_C_EnabledTabSwitching_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateMyModsVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_StoreMenu_C::UpdateMyModsVisibility(bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateMyModsVisibility");

	Params::UUI_StoreMenu_C_UpdateMyModsVisibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.SetCurrentActivePage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class ENUM_SideTabs           Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ENUM_SideTabs           Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UUI_Button_Sidebar_C*        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UUI_ParentPage_C*            K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)

bool UUI_StoreMenu_C::SetCurrentActivePage(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ENUM_SideTabs* Temp_byte_Variable, enum class ENUM_SideTabs* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class FText CallFunc_GetText_ReturnValue, int32* K2Node_Select_Default, class UUI_Button_Sidebar_C** K2Node_Select_Default_1, bool* CallFunc_IsValid_ReturnValue_4, class UUI_ParentPage_C** K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SetCurrentActivePage");

	Params::UUI_StoreMenu_C_SetCurrentActivePage_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.GetCurrentActivePage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ParentPage_C*            CurrentPage                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class UUI_ParentPage_C*            K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

enum class ENUM_SideTabs UUI_StoreMenu_C::GetCurrentActivePage(class UUI_ParentPage_C* CurrentPage, enum class ENUM_SideTabs* Temp_byte_Variable, class UUI_ParentPage_C** K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "GetCurrentActivePage");

	Params::UUI_StoreMenu_C_GetCurrentActivePage_Params Parms{};

	Parms.CurrentPage = CurrentPage;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateSearchFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_StoreMenu_C::UpdateSearchFilter(bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_Format_ReturnValue, bool* Temp_bool_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, int32* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateSearchFilter");

	Params::UUI_StoreMenu_C_UpdateSearchFilter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.DestroyModPageMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::DestroyModPageMenu(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DestroyModPageMenu");

	Params::UUI_StoreMenu_C_DestroyModPageMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.CreateModPageMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// int32                              DrawUIOnZOrder                                                   (BlueprintVisible, Net, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              UI_GameSlotRef                                                   (Edit, ConstParm, ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ModPage_C*               ModPageRef                                                       (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_CreateModPageFromStoreMenu_ReturnValue                  (Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUI_ModPage_C* UUI_StoreMenu_C::CreateModPageMenu(int64 Mod_ID, int32 DrawUIOnZOrder, class UUI_GameSlot_C** UI_GameSlotRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "CreateModPageMenu");

	Params::UUI_StoreMenu_C_CreateModPageMenu_Params Parms{};

	Parms.Mod_ID = Mod_ID;
	Parms.DrawUIOnZOrder = DrawUIOnZOrder;

	UObject::ProcessEvent(Func, &Parms);

	if (UI_GameSlotRef != nullptr)
		*UI_GameSlotRef = Parms.UI_GameSlotRef;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.CreateRightClickMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              UI_GameSlot                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, DuplicateTransient)
// bool                               ShouldViewBeVisible                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               SepareteReportWithLine                                           (Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             WidgetWidth                                                      (ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UUI_RightClickMenu_C*        MenuRef                                                          (ExportObject, BlueprintReadOnly, Net, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_RightClickMenu_C*        CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

class UUI_RightClickMenu_C* UUI_StoreMenu_C::CreateRightClickMenu(double WidgetWidth, class UUI_RightClickMenu_C** MenuRef, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "CreateRightClickMenu");

	Params::UUI_StoreMenu_C_CreateRightClickMenu_Params Parms{};

	Parms.WidgetWidth = WidgetWidth;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuRef != nullptr)
		*MenuRef = Parms.MenuRef;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.DestroyRightClickMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

void UUI_StoreMenu_C::DestroyRightClickMenu(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DestroyRightClickMenu");

	Params::UUI_StoreMenu_C_DestroyRightClickMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateAllStoreMenuWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FButtonStyle                CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle            (Edit, ConstParm, Parm, EditConst, GlobalConfig, SubobjectReference)
// struct FButtonStyle                CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1          (Edit, ConstParm, Parm, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference, Interp)
// class UMaterialInterface*          K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)

struct FSlateBrush UUI_StoreMenu_C::UpdateAllStoreMenuWidgets(class UMaterialInterface* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* Temp_bool_Variable, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle, const struct FButtonStyle& CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle, class UMaterialInterface* Temp_object_Variable_1, class UMaterialInterface** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateAllStoreMenuWidgets");

	Params::UUI_StoreMenu_C_UpdateAllStoreMenuWidgets_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle = CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle;
	Parms.CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1 = CallFunc_CreateButtonStyleFromSingleColor_ButtonStyle_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_MakeStruct_ButtonStyle != nullptr)
		*K2Node_MakeStruct_ButtonStyle = std::move(Parms.K2Node_MakeStruct_ButtonStyle);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.InitTheme
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreThemeRowData         CallFunc_GetDataTableRowFromName_OutRow                          (ConstParm, ExportObject, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, SubobjectReference)

bool UUI_StoreMenu_C::InitTheme(struct FCFCoreThemeRowData* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "InitTheme");

	Params::UUI_StoreMenu_C_InitTheme_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDataTableRowFromName_OutRow != nullptr)
		*CallFunc_GetDataTableRowFromName_OutRow = std::move(Parms.CallFunc_GetDataTableRowFromName_OutRow);

	if (CallFunc_GetDataTableRowFromName_ReturnValue != nullptr)
		*CallFunc_GetDataTableRowFromName_ReturnValue = Parms.CallFunc_GetDataTableRowFromName_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.ShouldCustomizeTheme
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ThemeCustomizer_C*       CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

FDelegateProperty_ UUI_StoreMenu_C::ShouldCustomizeTheme()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "ShouldCustomizeTheme");

	Params::UUI_StoreMenu_C_ShouldCustomizeTheme_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.InitAllTabs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_Button_Sidebar_C*        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<class UUI_ParentPage_C*>    K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UUI_Button_Sidebar_C*>K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

TArray<class UUI_Button_Sidebar_C*> UUI_StoreMenu_C::InitAllTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "InitAllTabs");

	Params::UUI_StoreMenu_C_InitAllTabs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.RemoveExtraWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::RemoveExtraWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "RemoveExtraWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSearchedTextCommitted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             WidgetArray                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TScriptInterface<class IBPI_PageWidgets_C>K2Node_DynamicCast_AsBPI_Page_Widgets                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_StoreMenu_C::OnSearchedTextCommitted(class FText CallFunc_GetText_ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSearchedTextCommitted");

	Params::UUI_StoreMenu_C_OnSearchedTextCommitted_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.CloseBNavigation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// TScriptInterface<class IBPI_PageWidgets_C>K2Node_DynamicCast_AsBPI_Page_Widgets                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_GetClose_B_Widget                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, EditConst, GlobalConfig, SubobjectReference)

class UWidget* UUI_StoreMenu_C::CloseBNavigation(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "CloseBNavigation");

	Params::UUI_StoreMenu_C_CloseBNavigation_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OpenCurrentActivePage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)

bool UUI_StoreMenu_C::OpenCurrentActivePage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OpenCurrentActivePage");

	Params::UUI_StoreMenu_C_OpenCurrentActivePage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateCloseButtonSearchVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_StoreMenu_C::UpdateCloseButtonSearchVisiblity(class FText SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateCloseButtonSearchVisiblity");

	Params::UUI_StoreMenu_C_UpdateCloseButtonSearchVisiblity_Params Parms{};

	Parms.SearchInput = SearchInput;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.SelectPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Button_Sidebar_C*        Target                                                           (Edit, ConstParm, ReturnParm, Transient, Config)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_Button_Sidebar_C*        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_StoreMenu_C::SelectPage(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SelectPage");

	Params::UUI_StoreMenu_C_SelectPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnFail_A1413E6746555E5B30E503B4FC8CC5D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_StoreMenu_C::OnFail_A1413E6746555E5B30E503B4FC8CC5D8(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnFail_A1413E6746555E5B30E503B4FC8CC5D8");

	Params::UUI_StoreMenu_C_OnFail_A1413E6746555E5B30E503B4FC8CC5D8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_StoreMenu_C::OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8");

	Params::UUI_StoreMenu_C_OnSuccess_A1413E6746555E5B30E503B4FC8CC5D8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On CFCore Init Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::Event_On_CFCore_Init_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On CFCore Init Error");

	Params::UUI_StoreMenu_C_Event_On_CFCore_Init_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Open Browse Mods Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Open_Browse_Mods_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Open Browse Mods Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On CFCore Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_On_CFCore_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On CFCore Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Open Installed Mods Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Open_Installed_Mods_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Open Installed Mods Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Close Menu
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Close_Menu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Close Menu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UUI_StoreMenu_C::BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UUI_StoreMenu_C_BndEvt__StoreMenu_TxtBox_Search_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__StoreMenu_SignIn_K2Node_ComponentBoundEvent_3_OnSignInClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Open My Mods Page
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Open_My_Mods_Page()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Open My Mods Page");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UUI_StoreMenu_C::BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UUI_StoreMenu_C_BndEvt__StoreMenu_Searched_txt_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Result
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_authenticated                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)

void UUI_StoreMenu_C::Event_Result(bool* Is_authenticated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Result");

	Params::UUI_StoreMenu_C_Event_Result_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Is_authenticated != nullptr)
		*Is_authenticated = Parms.Is_authenticated;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info Failed
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::Event_On_Get_User_Info_Failed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Get User Info Failed");

	Params::UUI_StoreMenu_C_Event_On_Get_User_Info_Failed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Get User Info
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMe                         Me                                                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient)

void UUI_StoreMenu_C::Event_On_Get_User_Info(struct FMe* Me)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Get User Info");

	Params::UUI_StoreMenu_C_Event_On_Get_User_Info_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Me != nullptr)
		*Me = std::move(Parms.Me);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event Click On Sign In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_Click_On_Sign_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event Click On Sign In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Sync Installed Mods Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::Event_On_Sync_Installed_Mods_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Sync Installed Mods Error");

	Params::UUI_StoreMenu_C_Event_On_Sync_Installed_Mods_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.Event On Sync Installed Mods Success
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Event_On_Sync_Installed_Mods_Success()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Event On Sync Installed Mods Success");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.DELETE_FocusableOnKeyDown_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (Edit, ReturnParm, Config, DisableEditOnInstance)

struct FKeyEvent UUI_StoreMenu_C::DELETE_FocusableOnKeyDown_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "DELETE_FocusableOnKeyDown_1");

	Params::UUI_StoreMenu_C_DELETE_FocusableOnKeyDown_1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.RequestThemeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::RequestThemeUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "RequestThemeUpdate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_TEXT_SearchBack_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_UI_Button_BrowseMods_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_UI_Button_InstalledMods_K2Node_ComponentBoundEvent_2_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_Button_41_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BndEvt__UI_StoreMenu_UI_Button_MyMods_K2Node_ComponentBoundEvent_6_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.SetNewTextInSearch
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UUI_StoreMenu_C::SetNewTextInSearch(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "SetNewTextInSearch");

	Params::UUI_StoreMenu_C_SetNewTextInSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UI_StoreMenu.UI_StoreMenu_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

struct FKey UUI_StoreMenu_C::ButtonCall(enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "ButtonCall");

	Params::UUI_StoreMenu_C_ButtonCall_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccessGetMyPremiumMods
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

TArray<int64> UUI_StoreMenu_C::OnSuccessGetMyPremiumMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSuccessGetMyPremiumMods");

	Params::UUI_StoreMenu_C_OnSuccessGetMyPremiumMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnFailGetMyPremiumMods
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::OnFailGetMyPremiumMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnFailGetMyPremiumMods");

	Params::UUI_StoreMenu_C_OnFailGetMyPremiumMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.PremiumModChecking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::PremiumModChecking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "PremiumModChecking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccessPremiumModsCheck
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

TArray<int64> UUI_StoreMenu_C::OnSuccessPremiumModsCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSuccessPremiumModsCheck");

	Params::UUI_StoreMenu_C_OnSuccessPremiumModsCheck_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.FailedPremiumModsChecks
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::FailedPremiumModsChecks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "FailedPremiumModsChecks");

	Params::UUI_StoreMenu_C_FailedPremiumModsChecks_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.WaitForPurchaseResponse
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      InModIds                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)

TArray<int64> UUI_StoreMenu_C::WaitForPurchaseResponse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "WaitForPurchaseResponse");

	Params::UUI_StoreMenu_C_WaitForPurchaseResponse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnSuccessGeneratePremium
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)

class FString UUI_StoreMenu_C::OnSuccessGeneratePremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnSuccessGeneratePremium");

	Params::UUI_StoreMenu_C_OnSuccessGeneratePremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnErrorGeneratePremium
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::OnErrorGeneratePremium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnErrorGeneratePremium");

	Params::UUI_StoreMenu_C_OnErrorGeneratePremium_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.temp2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

TArray<int64> UUI_StoreMenu_C::Temp2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "temp2");

	Params::UUI_StoreMenu_C_Temp2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.temp1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_StoreMenu_C::Temp1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "temp1");

	Params::UUI_StoreMenu_C_Temp1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.InitRestOfUserLoginAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::InitRestOfUserLoginAsync()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "InitRestOfUserLoginAsync");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.AuthenticateSignIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::AuthenticateSignIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "AuthenticateSignIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.FinishCategorie
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::FinishCategorie()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "FinishCategorie");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.GamepadChangeTab
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Forward                                                          (BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config)

bool UUI_StoreMenu_C::GamepadChangeTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "GamepadChangeTab");

	Params::UUI_StoreMenu_C_GamepadChangeTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnUserAuthenticated
// (Event, Public, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnUserAuthenticated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnUserAuthenticated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnRequestedModPage
// (Event, Public, BlueprintEvent)
// Parameters:
// int64                              ForModID                                                         (BlueprintVisible, ExportObject, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UUI_StoreMenu_C::OnRequestedModPage(int64 ForModID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnRequestedModPage");

	Params::UUI_StoreMenu_C_OnRequestedModPage_Params Parms{};

	Parms.ForModID = ForModID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OpenModPageForID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Mod_ID                                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)

void UUI_StoreMenu_C::OpenModPageForID(int64 Mod_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OpenModPageForID");

	Params::UUI_StoreMenu_C_OpenModPageForID_Params Parms{};

	Parms.Mod_ID = Mod_ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnModInfoFound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              ForGameSlot                                                      (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_StoreMenu_C::OnModInfoFound(class UUI_GameSlot_C* ForGameSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnModInfoFound");

	Params::UUI_StoreMenu_C_OnModInfoFound_Params Parms{};

	Parms.ForGameSlot = ForGameSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.ExecuteUbergraph_UI_StoreMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_2                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FGenPremiumCheckoutUrlRequestK2Node_MakeStruct_GenPremiumCheckoutUrlRequest                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FCFCoreError                K2Node_CustomEvent_error_6                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_3                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_Prompt_SignIn_C*         CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsWithInterface_FoundWidgets                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_is_authenticated                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_4                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// struct FCFCoreError                K2Node_CustomEvent_error_5                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// struct FMe                         K2Node_CustomEvent_me                                            (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreSettings             CallFunc_MakeSettingsFromProjectConfig_ReturnValue               (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// struct FCFCoreError                K2Node_CustomEvent_error_4                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// struct FKeyEvent                   K2Node_Event_KeyEvent                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_5                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_1                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_1                 (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_CustomEvent_InText                                        (BlueprintVisible, ExportObject, EditFixedSize, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FKey                        K2Node_CustomEvent_Key                                           (Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// TArray<int64>                      K2Node_CustomEvent_ModIds_2                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_3                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// TArray<int64>                      K2Node_CustomEvent_ModIds_1                                      (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FCFCoreError                K2Node_CustomEvent_error_2                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue_6                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// TArray<int64>                      K2Node_CustomEvent_InModIds                                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_url                                           (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error_1                                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_2                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_2                 (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_7                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_DidAllTheModsGetBought_ReturnValue                      (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_Event_forward                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// uint8                              CallFunc_Add_ByteByte_ReturnValue                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// uint8                              CallFunc_Subtract_ByteByte_ReturnValue                           (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// uint8                              CallFunc_Percent_ByteByte_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue_8                        (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// int64                              K2Node_Event_ForModID                                            (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_Int64Int64_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int64                              K2Node_CustomEvent_Mod_ID                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_3                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_3                 (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UUI_BrowseMods_C*            K2Node_DynamicCast_AsUI_Browse_Mods                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_CustomEvent_ForGameSlot                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ModPage_C*               CallFunc_CreateModPageMenu_ModPageRef                            (Edit, ConstParm, BlueprintReadOnly, OutParm, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage_4                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab_4                 (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UUI_BrowseMods_C*            K2Node_DynamicCast_AsUI_Browse_Mods_1                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UUI_StoreMenu_C::ExecuteUbergraph_UI_StoreMenu(bool* CallFunc_IsValid_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_2, struct FCFCoreError* K2Node_CustomEvent_error_6, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_3, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, const TArray<class UPrimalUI*>& CallFunc_GetAllWidgetsWithInterface_FoundWidgets, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_4, struct FCFCoreError* K2Node_CustomEvent_error_5, struct FCFCoreSettings* CallFunc_MakeSettingsFromProjectConfig_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_4, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_5, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText K2Node_CustomEvent_InText, class FString* CallFunc_Conv_TextToString_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FKey& K2Node_CustomEvent_Key, enum class EViewState K2Node_CustomEvent_State, class UTexture2DDynamic* Temp_object_Variable, class UTexture2DDynamic* K2Node_CustomEvent_Texture, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, struct FCFCoreError* K2Node_CustomEvent_error_3, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, struct FCFCoreError* K2Node_CustomEvent_error_2, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue_6, const TArray<int64>& K2Node_CustomEvent_InModIds, class FText* CallFunc_Format_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error_1, struct FCFCoreError* K2Node_CustomEvent_error, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_4, bool K2Node_Event_forward, uint8* CallFunc_Add_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, uint8* CallFunc_Percent_ByteByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue_1, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_8, int64* K2Node_Event_ForModID, class UUI_ModPage_C** CallFunc_CreateModPageMenu_ModPageRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "ExecuteUbergraph_UI_StoreMenu");

	Params::UUI_StoreMenu_C_ExecuteUbergraph_UI_StoreMenu_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_2 = CallFunc_GetEngineSubsystem_ReturnValue_2;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_3 = CallFunc_GetEngineSubsystem_ReturnValue_3;
	Parms.CallFunc_GetAllWidgetsWithInterface_FoundWidgets = CallFunc_GetAllWidgetsWithInterface_FoundWidgets;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_4 = CallFunc_GetEngineSubsystem_ReturnValue_4;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_5 = CallFunc_GetEngineSubsystem_ReturnValue_5;
	Parms.K2Node_CustomEvent_InText = K2Node_CustomEvent_InText;
	Parms.K2Node_CustomEvent_Key = K2Node_CustomEvent_Key;
	Parms.K2Node_CustomEvent_State = K2Node_CustomEvent_State;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_6 = CallFunc_GetEngineSubsystem_ReturnValue_6;
	Parms.K2Node_CustomEvent_InModIds = K2Node_CustomEvent_InModIds;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_7 = CallFunc_GetEngineSubsystem_ReturnValue_7;
	Parms.K2Node_Event_forward = K2Node_Event_forward;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_8 = CallFunc_GetEngineSubsystem_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (K2Node_CustomEvent_error_6 != nullptr)
		*K2Node_CustomEvent_error_6 = std::move(Parms.K2Node_CustomEvent_error_6);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (K2Node_CustomEvent_error_5 != nullptr)
		*K2Node_CustomEvent_error_5 = std::move(Parms.K2Node_CustomEvent_error_5);

	if (CallFunc_MakeSettingsFromProjectConfig_ReturnValue != nullptr)
		*CallFunc_MakeSettingsFromProjectConfig_ReturnValue = std::move(Parms.CallFunc_MakeSettingsFromProjectConfig_ReturnValue);

	if (K2Node_CustomEvent_error_4 != nullptr)
		*K2Node_CustomEvent_error_4 = std::move(Parms.K2Node_CustomEvent_error_4);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (K2Node_CustomEvent_error_3 != nullptr)
		*K2Node_CustomEvent_error_3 = std::move(Parms.K2Node_CustomEvent_error_3);

	if (K2Node_CustomEvent_error_2 != nullptr)
		*K2Node_CustomEvent_error_2 = std::move(Parms.K2Node_CustomEvent_error_2);

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (K2Node_CustomEvent_error_1 != nullptr)
		*K2Node_CustomEvent_error_1 = std::move(Parms.K2Node_CustomEvent_error_1);

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_Add_ByteByte_ReturnValue != nullptr)
		*CallFunc_Add_ByteByte_ReturnValue = Parms.CallFunc_Add_ByteByte_ReturnValue;

	if (CallFunc_GetValidValue_ReturnValue != nullptr)
		*CallFunc_GetValidValue_ReturnValue = Parms.CallFunc_GetValidValue_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Percent_ByteByte_ReturnValue != nullptr)
		*CallFunc_Percent_ByteByte_ReturnValue = Parms.CallFunc_Percent_ByteByte_ReturnValue;

	if (CallFunc_GetValidValue_ReturnValue_1 != nullptr)
		*CallFunc_GetValidValue_ReturnValue_1 = Parms.CallFunc_GetValidValue_ReturnValue_1;

	if (K2Node_Event_ForModID != nullptr)
		*K2Node_Event_ForModID = Parms.K2Node_Event_ForModID;

	if (CallFunc_CreateModPageMenu_ModPageRef != nullptr)
		*CallFunc_CreateModPageMenu_ModPageRef = Parms.CallFunc_CreateModPageMenu_ModPageRef;

	return Parms.ReturnValue;

}


// Function UI_StoreMenu.UI_StoreMenu_C.UpdateAllThemeSettings__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::UpdateAllThemeSettings__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "UpdateAllThemeSettings__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnInputDeviceChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_InputDevices       Device                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_StoreMenu_C::OnInputDeviceChanged__DelegateSignature(enum class ENUM_InputDevices Device)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnInputDeviceChanged__DelegateSignature");

	Params::UUI_StoreMenu_C_OnInputDeviceChanged__DelegateSignature_Params Parms{};

	Parms.Device = Device;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnCFCoreInitialized__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnCFCoreInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnCFCoreInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StoreMenu.UI_StoreMenu_C.OnModPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StoreMenu_C::OnModPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StoreMenu_C", "OnModPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


