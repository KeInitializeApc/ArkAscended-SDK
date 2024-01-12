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
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameModsEvent          Evt                                                              (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> ModsList                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FCFCoreApiResponsePaginationPagination                                                       (EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

bool UUI_BrowseMods_C::OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "OnEventBroadcasted");

	Params::UUI_BrowseMods_C_OnEventBroadcasted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Evt != nullptr)
		*Evt = Parms.Evt;

	if (ModsList != nullptr)
		*ModsList = std::move(Parms.ModsList);

	return Parms.ReturnValue;

}


// Function UI_BrowseMods.UI_BrowseMods_C.UpdatePageCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreApiResponsePaginationCFCoreApiResponsePagination                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FMod_Remainder                                          (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_FMod_ReturnValue                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UUI_BrowseMods_C::UpdatePageCount(struct FCFCoreApiResponsePagination* CFCoreApiResponsePagination, bool Temp_bool_Variable, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "UpdatePageCount");

	Params::UUI_BrowseMods_C_UpdatePageCount_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CFCoreApiResponsePagination != nullptr)
		*CFCoreApiResponsePagination = std::move(Parms.CFCoreApiResponsePagination);

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
// class FText                        CurrentSearchInput                                               (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

class FText UUI_BrowseMods_C::GetCurrentSearchInput(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "GetCurrentSearchInput");

	Params::UUI_BrowseMods_C_GetCurrentSearchInput_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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


// Function UI_BrowseMods.UI_BrowseMods_C.ExecuteUbergraph_UI_BrowseMods
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCFCoreSearchModsFilter     CallFunc_FilterModInfo_ReturnValue                               (BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (BlueprintVisible, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, InstancedReference, SubobjectReference)
// struct FCFCoreApiRequestPagination CallFunc_MakeApiRequestPagination_ReturnValue                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_SubscribeViewToEvents_ReturnValue                       (Edit, ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FCFCoreApiRequestPagination UUI_BrowseMods_C::ExecuteUbergraph_UI_BrowseMods(bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Int32_SubOne_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_SubscribeViewToEvents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_BrowseMods_C", "ExecuteUbergraph_UI_BrowseMods");

	Params::UUI_BrowseMods_C_ExecuteUbergraph_UI_BrowseMods_Params Parms{};

	Parms.CallFunc_Int32_SubOne_ReturnValue = CallFunc_Int32_SubOne_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_SubscribeViewToEvents_ReturnValue = CallFunc_SubscribeViewToEvents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


