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
// enum class EGameModsEvent          Evt                                                              (BlueprintVisible, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

TArray<struct FInstallProgressMod> UReHostSession_ASA_C::OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool* ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnEventBroadcasted");

	Params::UReHostSession_ASA_C_OnEventBroadcasted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Pagination != nullptr)
		*Pagination = std::move(Parms.Pagination);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnRecievedInstalledModsInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> InstalledMods                                                    (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<struct FInstallProgressMod> UReHostSession_ASA_C::OnRecievedInstalledModsInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnRecievedInstalledModsInfo");

	Params::UReHostSession_ASA_C_OnRecievedInstalledModsInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.HasUGCPrivileges
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasPrivilege                                                     (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UShooterGameInstance*        K2Node_DynamicCast_AsShooter_Game_Instance                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_CanUseUserGeneratedContent_ReturnValue                  (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)

bool UReHostSession_ASA_C::HasUGCPrivileges(bool* HasPrivilege, class UGameInstance** CallFunc_GetGameInstance_ReturnValue, class UShooterGameInstance* K2Node_DynamicCast_AsShooter_Game_Instance, bool CallFunc_CanUseUserGeneratedContent_ReturnValue)
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

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Assert Selected Item for Preview
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ForScrollbox                                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              FoundSelectedIndex                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UDataListEntryButton_HostSession*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UCustomButtonWidget*         CallFunc_BPGetButton_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UDataListEntryButton_HostSession*K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPIsSelected_ReturnValue                                (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UReHostSession_ASA_C::Assert_Selected_Item_for_Preview(int32* CallFunc_Subtract_IntInt_ReturnValue, class UDataListEntryButton_HostSession* K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session, bool* CallFunc_Not_PreBool_ReturnValue, class UCustomButtonWidget* CallFunc_BPGetButton_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class UDataListEntryButton_HostSession* K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1, int32* CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Assert Selected Item for Preview");

	Params::UReHostSession_ASA_C_Assert_Selected_Item_for_Preview_Params Parms{};

	Parms.K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session = K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session;
	Parms.CallFunc_BPGetButton_ReturnValue = CallFunc_BPGetButton_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1 = K2Node_DynamicCast_AsData_List_Entry_Button_Host_Session_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_IntInt_ReturnValue != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue = Parms.CallFunc_Subtract_IntInt_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.IsPresetDifficultyUIOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewParam                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::IsPresetDifficultyUIOpen(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "IsPresetDifficultyUIOpen");

	Params::UReHostSession_ASA_C_IsPresetDifficultyUIOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.BPIsPresetDifficultyUIOpen
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsPresetDifficultyUIOpen_NewParam                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void UReHostSession_ASA_C::BPIsPresetDifficultyUIOpen(bool* ReturnValue, bool* CallFunc_IsPresetDifficultyUIOpen_NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "BPIsPresetDifficultyUIOpen");

	Params::UReHostSession_ASA_C_BPIsPresetDifficultyUIOpen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_IsPresetDifficultyUIOpen_NewParam != nullptr)
		*CallFunc_IsPresetDifficultyUIOpen_NewParam = Parms.CallFunc_IsPresetDifficultyUIOpen_NewParam;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_ModImage_Border_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ConstParm, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::Get_ModImage_Border_Background(struct FSlateBrush* ReturnValue, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, bool* CallFunc_BooleanAND_ReturnValue, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Get_ModImage_Border_Background");

	Params::UReHostSession_ASA_C_Get_ModImage_Border_Background_Params Parms{};

	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	if (K2Node_MakeStruct_SlateBrush != nullptr)
		*K2Node_MakeStruct_SlateBrush = std::move(Parms.K2Node_MakeStruct_SlateBrush);

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*LocalSubMenu                                                     (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        LocalKey                                                         (BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsPresetDifficultyUIOpen_NewParam                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UWidget*                     CallFunc_SwitchButton_Widget_2                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_3                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* UReHostSession_ASA_C::OnKeyDownEvent(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyboardEvent, struct FEventReply* ReturnValue, bool* CallFunc_IsPresetDifficultyUIOpen_NewParam, int32 CallFunc_GetActiveWidgetIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnKeyDownEvent");

	Params::UReHostSession_ASA_C_OnKeyDownEvent_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	if (CallFunc_IsPresetDifficultyUIOpen_NewParam != nullptr)
		*CallFunc_IsPresetDifficultyUIOpen_NewParam = Parms.CallFunc_IsPresetDifficultyUIOpen_NewParam;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Get_MapImage_Border_Background
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture*                    CallFunc_K2_GetTextureParameterValue_ReturnValue                 (ConstParm, Net, EditFixedSize, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// class UTexture*                    K2Node_DynamicCast_AsTexture                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool UReHostSession_ASA_C::Get_MapImage_Border_Background(struct FSlateBrush* ReturnValue, struct FSlateBrush* K2Node_MakeStruct_SlateBrush, class UTexture* CallFunc_K2_GetTextureParameterValue_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Get_MapImage_Border_Background");

	Params::UReHostSession_ASA_C_Get_MapImage_Border_Background_Params Parms{};

	Parms.CallFunc_K2_GetTextureParameterValue_ReturnValue = CallFunc_K2_GetTextureParameterValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = std::move(Parms.ReturnValue);

	if (K2Node_MakeStruct_SlateBrush != nullptr)
		*K2Node_MakeStruct_SlateBrush = std::move(Parms.K2Node_MakeStruct_SlateBrush);

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	return Parms.ReturnValue;

}


// Function ReHostSession_ASA.ReHostSession_ASA_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, GlobalConfig, SubobjectReference)

float UReHostSession_ASA_C::Tick(const struct FGeometry& MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "Tick");

	Params::UReHostSession_ASA_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

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
// int64                              ModId                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)

void UReHostSession_ASA_C::OnModInfoRequested(int64* ModId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "OnModInfoRequested");

	Params::UReHostSession_ASA_C_OnModInfoRequested_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ModId != nullptr)
		*ModId = Parms.ModId;

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
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalUI*                   CallFunc_Create_ReturnValue                                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu_1                         (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasUGCPrivileges_HasPrivilege                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int64                              K2Node_Event_ModID                                               (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UUI_StoreMenu_C*             CallFunc_Create_ReturnValue_1                                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference, Interp)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_RegisterModelClass_ReturnValue                          (BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

bool UReHostSession_ASA_C::ExecuteUbergraph_ReHostSession_ASA(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class AGameModeBase** CallFunc_GetGameMode_ReturnValue, bool* CallFunc_NotEqual_ClassClass_ReturnValue, class AGameModeBase** CallFunc_GetGameMode_ReturnValue_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue_1, int64* K2Node_Event_ModID, bool* CallFunc_BooleanAND_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool* CallFunc_RegisterModelClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReHostSession_ASA_C", "ExecuteUbergraph_ReHostSession_ASA");

	Params::UReHostSession_ASA_C_ExecuteUbergraph_ReHostSession_ASA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameMode_ReturnValue != nullptr)
		*CallFunc_GetGameMode_ReturnValue = Parms.CallFunc_GetGameMode_ReturnValue;

	if (CallFunc_NotEqual_ClassClass_ReturnValue != nullptr)
		*CallFunc_NotEqual_ClassClass_ReturnValue = Parms.CallFunc_NotEqual_ClassClass_ReturnValue;

	if (CallFunc_GetGameMode_ReturnValue_1 != nullptr)
		*CallFunc_GetGameMode_ReturnValue_1 = Parms.CallFunc_GetGameMode_ReturnValue_1;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_Add_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Add_IntInt_ReturnValue_1 = Parms.CallFunc_Add_IntInt_ReturnValue_1;

	if (K2Node_Event_ModID != nullptr)
		*K2Node_Event_ModID = Parms.K2Node_Event_ModID;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	if (CallFunc_RegisterModelClass_ReturnValue != nullptr)
		*CallFunc_RegisterModelClass_ReturnValue = Parms.CallFunc_RegisterModelClass_ReturnValue;

	return Parms.ReturnValue;

}

}


