#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReHostSession_ASA.ReHostSession_ASA_C
// (None)

class UClass* UReHostSession_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReHostSession_ASA_C");

	return Clss;
}


// ReHostSession_ASA_C ReHostSession_ASA.Default__ReHostSession_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReHostSession_ASA_C* UReHostSession_ASA_C::GetDefaultObj()
{
	static class UReHostSession_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReHostSession_ASA_C*>(UReHostSession_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnEventBroadcasted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

bool UReHostSession_ASA_C::OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnEventBroadcasted");

	Params::UReHostSession_ASA_C_OnEventBroadcasted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Evt != nullptr)
		*Evt = Parms.Evt;

	if (ModsList != nullptr)
		*ModsList = std::move(Parms.ModsList);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnRecievedInstalledModsInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> InstalledMods                                                    (ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UReHostSession_ASA_C::OnRecievedInstalledModsInfo(TArray<struct FInstallProgressMod>* InstalledMods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnRecievedInstalledModsInfo");

	Params::UReHostSession_ASA_C_OnRecievedInstalledModsInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InstalledMods != nullptr)
		*InstalledMods = std::move(Parms.InstalledMods);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.HasUGCPrivileges
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasPrivilege                                                     (Edit, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_CanUseUserGeneratedContent_ReturnValue                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, InstancedReference, SubobjectReference)

void UReHostSession_ASA_C::HasUGCPrivileges(bool* HasPrivilege, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_CanUseUserGeneratedContent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "HasUGCPrivileges");

	Params::UReHostSession_ASA_C_HasUGCPrivileges_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Game_Instance = K2Node_DynamicCast_AsShooter_Game_Instance;
	Parms.CallFunc_CanUseUserGeneratedContent_ReturnValue = CallFunc_CanUseUserGeneratedContent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasPrivilege != nullptr)
		*HasPrivilege = Parms.HasPrivilege;

	if (CallFunc_GetGameInstance_ReturnValue != nullptr)
		*CallFunc_GetGameInstance_ReturnValue = Parms.CallFunc_GetGameInstance_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Assert Selected Item for Preview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ForScrollbox                                                     (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              FoundSelectedIndex                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UDataListEntryButton_HostSession*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCustomButtonWidget*         CallFunc_BPGetButton_ReturnValue                                 (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UDataListEntryButton_HostSession*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPIsSelected_ReturnValue                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UReHostSession_ASA_C::Assert_Selected_Item_for_Preview(bool Temp_bool_Variable, class UDataListEntryButton_HostSession** K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session, bool* K2Node_DynamicCast_bSuccess, class UCustomButtonWidget** CallFunc_BPGetButton_ReturnValue, int32* Temp_int_Variable, bool CallFunc_BooleanAND_ReturnValue, class UDataListEntryButton_HostSession** K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Assert Selected Item for Preview");

	Params::UReHostSession_ASA_C_Assert_Selected_Item_for_Preview_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session != nullptr)
		*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session = Parms.K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BPGetButton_ReturnValue != nullptr)
		*CallFunc_BPGetButton_ReturnValue = Parms.CallFunc_BPGetButton_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1 != nullptr)
		*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1 = Parms.K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.IsPresetDifficultyUIOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::IsPresetDifficultyUIOpen(bool NewParam, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "IsPresetDifficultyUIOpen");

	Params::UReHostSession_ASA_C_IsPresetDifficultyUIOpen_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BPIsPresetDifficultyUIOpen
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsPresetDifficultyUIOpen_NewParam                       (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UReHostSession_ASA_C::BPIsPresetDifficultyUIOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BPIsPresetDifficultyUIOpen");

	Params::UReHostSession_ASA_C_BPIsPresetDifficultyUIOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_ModImage_Border_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ExportObject, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::Get_ModImage_Border_Background(bool* CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Get_ModImage_Border_Background");

	Params::UReHostSession_ASA_C_Get_ModImage_Border_Background_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*LocalSubMenu                                                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        LocalKey                                                         (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsPresetDifficultyUIOpen_NewParam                       (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UWidget*                     CallFunc_SwitchButton_Widget_2                                   (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_3                                   (Edit, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::OnKeyDownEvent(struct FGeometry* MyGeometry, class UWidget* CallFunc_SwitchButton_Widget, class UWidget* CallFunc_SwitchButton_Widget_1, bool* CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_SwitchButton_Widget_2, int32* Temp_int_Variable, class UWidget* CallFunc_SwitchButton_Widget_3, class UASAUIWidget_HorizontalListSelector_Sub_Style4_C** K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnKeyDownEvent");

	Params::UReHostSession_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.CallFunc_SwitchButton_Widget = CallFunc_SwitchButton_Widget;
	Parms.CallFunc_SwitchButton_Widget_1 = CallFunc_SwitchButton_Widget_1;
	Parms.CallFunc_SwitchButton_Widget_2 = CallFunc_SwitchButton_Widget_2;
	Parms.CallFunc_SwitchButton_Widget_3 = CallFunc_SwitchButton_Widget_3;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_MapImage_Border_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ExportObject, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::Get_MapImage_Border_Background(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool* CallFunc_IsValid_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Get_MapImage_Border_Background");

	Params::UReHostSession_ASA_C_Get_MapImage_Border_Background_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UReHostSession_ASA_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Tick");

	Params::UReHostSession_ASA_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ARKModsButton_K2Node_ComponentBoundEvent_308_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_BackButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_1_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_2_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_3_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_4_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Header_GridPanel_K2Node_ComponentBoundEvent_5_OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_6_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Header_K2Node_ComponentBoundEvent_7_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_10_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Mods_K2Node_ComponentBoundEvent_11_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_12_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_13_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_14_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_15_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_16_OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_17_OnSelectionChanged_5__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_18_OnSelectionChanged_6__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_19_OnSelectionChanged_7__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_K2Node_ComponentBoundEvent_20_OnSelectionChanged_8__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_UpdateModsButton_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_GetModsButton_1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature");

	Params::UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_Submenu_Mods_1_K2Node_ComponentBoundEvent_21_OnSelectionIndexChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature");

	Params::UReHostSession_ASA_C_BndEvt__ReHostSession_ASA_AdvancedHeader_1_K2Node_ComponentBoundEvent_22_OnSelectionIndexChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_EastPreset_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_MediumPreset_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_HardPreset_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_ChooseDifficulty_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_SettingsButton_K2Node_ComponentBoundEvent_28_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BndEvt__ReHostSession_ASA_CloseHubButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnModInfoRequested
// (Event, Public, BlueprintEvent)
// Parameters:
// int64                              ModId                                                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

int64 UReHostSession_ASA_C::OnModInfoRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnModInfoRequested");

	Params::UReHostSession_ASA_C_OnModInfoRequested_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnCFCoreUIControllerInit
// (Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::OnCFCoreUIControllerInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnCFCoreUIControllerInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnCFCoreUIRegister
// (Event, Public, BlueprintEvent)
// Parameters:

void UReHostSession_ASA_C::OnCFCoreUIRegister()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnCFCoreUIRegister");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.ExecuteUbergraph_ReHostSession_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalUI*                   CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu_1                         (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasUGCPrivileges_HasPrivilege                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int64                              K2Node_Event_ModID                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Create_ReturnValue_1                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, InstancedReference, SubobjectReference)

bool UReHostSession_ASA_C::ExecuteUbergraph_ReHostSession_ASA(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* K2Node_DynamicCast_bSuccess, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int64* K2Node_Event_ModID, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_EqualEqual_Int64Int64_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, bool* CallFunc_RegisterModelClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "ExecuteUbergraph_ReHostSession_ASA");

	Params::UReHostSession_ASA_C_ExecuteUbergraph_ReHostSession_ASA_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_Event_ModID != nullptr)
		*K2Node_Event_ModID = Parms.K2Node_Event_ModID;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_EqualEqual_Int64Int64_ReturnValue != nullptr)
		*CallFunc_EqualEqual_Int64Int64_ReturnValue = Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue;

	if (CallFunc_RegisterModelClass_ReturnValue != nullptr)
		*CallFunc_RegisterModelClass_ReturnValue = Parms.CallFunc_RegisterModelClass_ReturnValue;

	return Parms.ReturnValue;

}

}


