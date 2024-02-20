#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_BrowseMods.UI_BrowseMods_C
// (None)

class UClass* UUI_BrowseMods_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_BrowseMods_C");

	return Clss;
}


// UI_BrowseMods_C UI_BrowseMods.Default__UI_BrowseMods_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_BrowseMods_C* UUI_BrowseMods_C::GetDefaultObj()
{
	static class UUI_BrowseMods_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_BrowseMods_C*>(UUI_BrowseMods_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_BrowseMods.UI_BrowseMods_C.OnEventBroadcasted
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)

bool UUI_BrowseMods_C::OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList, bool ReturnValue, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "OnEventBroadcasted");

	Params::UUI_BrowseMods_C_OnEventBroadcasted_Params Parms{};

	Parms.Evt = Evt;
	Parms.ModsList = ModsList;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_BrowseMods.UI_BrowseMods_C.UpdatePageCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreApiResponsePaginationCFCoreApiResponsePagination                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_FMod_Remainder                                          (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_FMod_ReturnValue                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_BrowseMods_C::UpdatePageCount(struct FCFCoreApiResponsePagination* CFCoreApiResponsePagination, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "UpdatePageCount");

	Params::UUI_BrowseMods_C_UpdatePageCount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CFCoreApiResponsePagination != nullptr)
		*CFCoreApiResponsePagination = std::move(Parms.CFCoreApiResponsePagination);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_CalculateModsPerPage_Mods != nullptr)
		*CallFunc_CalculateModsPerPage_Mods = Parms.CallFunc_CalculateModsPerPage_Mods;

	if (CallFunc_FMod_Remainder != nullptr)
		*CallFunc_FMod_Remainder = Parms.CallFunc_FMod_Remainder;

	if (CallFunc_FMod_ReturnValue != nullptr)
		*CallFunc_FMod_ReturnValue = Parms.CallFunc_FMod_ReturnValue;

	if (CallFunc_Int32_AddOne_ReturnValue != nullptr)
		*CallFunc_Int32_AddOne_ReturnValue = Parms.CallFunc_Int32_AddOne_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_BrowseMods.UI_BrowseMods_C.GetCurrentSearchInput
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        CurrentSearchInput                                               (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UUI_BrowseMods_C::GetCurrentSearchInput(class FText CurrentSearchInput, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "GetCurrentSearchInput");

	Params::UUI_BrowseMods_C_GetCurrentSearchInput_Params Parms{};

	Parms.CurrentSearchInput = CurrentSearchInput;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

}


// Function UI_BrowseMods.UI_BrowseMods_C.ResetPageNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::ResetPageNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "ResetPageNum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.GetMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::GetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "GetMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.ConstructParentPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_BrowseMods_C::ConstructParentPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "ConstructParentPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_BrowseMods.UI_BrowseMods_C.GetModIDs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ForModIDs                                                        (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_BrowseMods_C::GetModIDs(const TArray<int64>& ForModIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "GetModIDs");

	Params::UUI_BrowseMods_C_GetModIDs_Params Parms{};

	Parms.ForModIDs = ForModIDs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_BrowseMods.UI_BrowseMods_C.ExecuteUbergraph_UI_BrowseMods
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreSearchModsFilter     CallFunc_FilterModInfo_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCFCoreApiRequestPagination CallFunc_MakeApiRequestPagination_ReturnValue                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_Event_ForModIDs                                           (ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)

int32 UUI_BrowseMods_C::ExecuteUbergraph_UI_BrowseMods(class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, int32* CallFunc_CalculateModsPerPage_Mods, struct FCFCoreSearchModsFilter* CallFunc_FilterModInfo_ReturnValue, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FCFCoreApiRequestPagination* CallFunc_MakeApiRequestPagination_ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue, const TArray<int64>& K2Node_Event_ForModIDs, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "ExecuteUbergraph_UI_BrowseMods");

	Params::UUI_BrowseMods_C_ExecuteUbergraph_UI_BrowseMods_Params Parms{};

	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;
	Parms.K2Node_Event_ForModIDs = K2Node_Event_ForModIDs;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_CalculateModsPerPage_Mods != nullptr)
		*CallFunc_CalculateModsPerPage_Mods = Parms.CallFunc_CalculateModsPerPage_Mods;

	if (CallFunc_FilterModInfo_ReturnValue != nullptr)
		*CallFunc_FilterModInfo_ReturnValue = std::move(Parms.CallFunc_FilterModInfo_ReturnValue);

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	if (CallFunc_Multiply_IntInt_ReturnValue != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue = Parms.CallFunc_Multiply_IntInt_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_MakeApiRequestPagination_ReturnValue != nullptr)
		*CallFunc_MakeApiRequestPagination_ReturnValue = std::move(Parms.CallFunc_MakeApiRequestPagination_ReturnValue);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_1 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1;

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue_2 != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function UI_BrowseMods.UI_BrowseMods_C.OnExplicitModFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              ForGameSlot                                                      (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_BrowseMods_C::OnExplicitModFound__DelegateSignature(class UUI_GameSlot_C* ForGameSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "OnExplicitModFound__DelegateSignature");

	Params::UUI_BrowseMods_C_OnExplicitModFound__DelegateSignature_Params Parms{};

	Parms.ForGameSlot = ForGameSlot;

	UObject::ProcessEvent(Func, &Parms);

}

}


