#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ParentPage.UI_ParentPage_C
// (None)

class UClass* UUI_ParentPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ParentPage_C");

	return Clss;
}


// UI_ParentPage_C UI_ParentPage.Default__UI_ParentPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ParentPage_C* UUI_ParentPage_C::GetDefaultObj()
{
	static class UUI_ParentPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ParentPage_C*>(UUI_ParentPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ParentPage.UI_ParentPage_C.GetClose_B
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

class UWidget* UUI_ParentPage_C::GetClose_B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetClose_B");

	Params::UUI_ParentPage_C_GetClose_B_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_ParentPage_C::PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PlayFadeIn");

	Params::UUI_ParentPage_C_PlayFadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ParentPage_C::BPEscapeClosed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BPEscapeClosed");

	Params::UUI_ParentPage_C_BPEscapeClosed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsAnyModInstalling_ReturnValue                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_ParentPage_C::GetVisibility_0(enum class ESlateVisibility ReturnValue, class UCFCoreUISubsystem** CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetVisibility_0");

	Params::UUI_ParentPage_C_GetVisibility_0_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetGameInstanceSubsystem_ReturnValue != nullptr)
		*CallFunc_GetGameInstanceSubsystem_ReturnValue = Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ReturnModsOfCurrentPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> Mod_List                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TrueModInfo                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> FinalOutputArray                                                 (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempArray                                                        (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Int32_SubOne_ReturnValue_1                              (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& TrueModInfo, const TArray<struct FInstallProgressMod>& TempArray, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue_1, int32* CallFunc_Int32_SubOne_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ReturnModsOfCurrentPage");

	Params::UUI_ParentPage_C_ReturnModsOfCurrentPage_Params Parms{};

	Parms.TrueModInfo = TrueModInfo;
	Parms.TempArray = TempArray;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_CalculateModsPerPage_Mods != nullptr)
		*CallFunc_CalculateModsPerPage_Mods = Parms.CallFunc_CalculateModsPerPage_Mods;

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Multiply_IntInt_ReturnValue != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue = Parms.CallFunc_Multiply_IntInt_ReturnValue;

	if (CallFunc_Multiply_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue_1 = Parms.CallFunc_Multiply_IntInt_ReturnValue_1;

	if (CallFunc_Int32_SubOne_ReturnValue_1 != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue_1 = Parms.CallFunc_Int32_SubOne_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.MoreImagesLeftToDownload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::MoreImagesLeftToDownload(bool ReturnValue, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "MoreImagesLeftToDownload");

	Params::UUI_ParentPage_C_MoreImagesLeftToDownload_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	if (CallFunc_Multiply_IntInt_ReturnValue != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue = Parms.CallFunc_Multiply_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetModIndexesForCurrentRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              First                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Last                                                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue_1                              (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

int32 UUI_ParentPage_C::GetModIndexesForCurrentRow(int32* First, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_Multiply_IntInt_ReturnValue, int32* CallFunc_Int32_SubOne_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetModIndexesForCurrentRow");

	Params::UUI_ParentPage_C_GetModIndexesForCurrentRow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (First != nullptr)
		*First = Parms.First;

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	if (CallFunc_Multiply_IntInt_ReturnValue != nullptr)
		*CallFunc_Multiply_IntInt_ReturnValue = Parms.CallFunc_Multiply_IntInt_ReturnValue;

	if (CallFunc_Int32_SubOne_ReturnValue_1 != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue_1 = Parms.CallFunc_Int32_SubOne_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadNextBatchOfMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UUI_ParentPage_C::DownloadNextBatchOfMods(bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadNextBatchOfMods");

	Params::UUI_ParentPage_C_DownloadNextBatchOfMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadBatchOfMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class FString UUI_ParentPage_C::DownloadBatchOfMods(class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadBatchOfMods");

	Params::UUI_ParentPage_C_DownloadBatchOfMods_Params Parms{};

	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_GetModIndexesForCurrentRow_Last = CallFunc_GetModIndexesForCurrentRow_Last;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CheckIfImagesAreReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_MoreImagesLeftToDownload_ReturnValue                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UUI_ParentPage_C::CheckIfImagesAreReady(bool* Temp_bool_Variable, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CheckIfImagesAreReady");

	Params::UUI_ParentPage_C_CheckIfImagesAreReady_Params Parms{};

	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_GetModIndexesForCurrentRow_Last = CallFunc_GetModIndexesForCurrentRow_Last;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadImagesInAllMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_InitiliazeImageDownloads_ReadyToStart                   (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ParentPage_C::DownloadImagesInAllMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadImagesInAllMods");

	Params::UUI_ParentPage_C_DownloadImagesInAllMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CreateEmptySlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AtIndex                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_EmptySlot_C*             CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUniformGridSlot* UUI_ParentPage_C::CreateEmptySlot(int32* CallFunc_CalculateModsPerRow_Mods, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CreateEmptySlot");

	Params::UUI_ParentPage_C_CreateEmptySlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SwitchControllerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_ParentPage_C::SwitchControllerAction(enum class EViewState State, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SwitchControllerAction");

	Params::UUI_ParentPage_C_SwitchControllerAction_Params Parms{};

	Parms.State = State;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::Nav_Down_from_DropdownTime(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownTime");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownTime_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownSort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::Nav_Down_from_DropdownSort(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownSort");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownSort_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::Nav_Down_from_DropdownCategory(enum class EUINavigation Navigation, class UWidget* ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownCategory");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownCategory_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav for Up Move from List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_ParentPage_C::Nav_for_Up_Move_from_List(enum class EUINavigation Navigation, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav for Up Move from List");

	Params::UUI_ParentPage_C_Nav_for_Up_Move_from_List_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.SetNavigationRuleForList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::SetNavigationRuleForList(bool* K2Node_SwitchInteger_CmpSuccess, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetNavigationRuleForList");

	Params::UUI_ParentPage_C_SetNavigationRuleForList_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetListFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::SetListFocus(class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetListFocus");

	Params::UUI_ParentPage_C_SetListFocus_Params Parms{};

	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdatePaginations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> TotalList                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_FMod_Remainder                                          (ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_FMod_ReturnValue                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

bool UUI_ParentPage_C::UpdatePaginations(TArray<struct FInstallProgressMod>* TotalList, bool* Temp_bool_Variable, int32* CallFunc_CalculateModsPerPage_Mods, double* CallFunc_FMod_Remainder, int32* CallFunc_FMod_ReturnValue, int32* CallFunc_Int32_AddOne_ReturnValue, int32* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdatePaginations");

	Params::UUI_ParentPage_C_UpdatePaginations_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TotalList != nullptr)
		*TotalList = std::move(Parms.TotalList);

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


// Function UI_ParentPage.UI_ParentPage_C.ClearImageCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Map_Length_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::ClearImageCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ClearImageCache");

	Params::UUI_ParentPage_C_ClearImageCache_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BindToDropdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UUI_ParentPage_C::BindToDropdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindToDropdown");

	Params::UUI_ParentPage_C_BindToDropdown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropdownApartFrom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CustomComboBox_C*        Dropdown                                                         (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_CustomComboBox_C*>Dropdowns                                                        (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

TArray<class UUI_CustomComboBox_C*> UUI_ParentPage_C::CloseAllDropdownApartFrom(const TArray<class UUI_CustomComboBox_C*>& Dropdowns, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CloseAllDropdownApartFrom");

	Params::UUI_ParentPage_C_CloseAllDropdownApartFrom_Params Parms{};

	Parms.Dropdowns = Dropdowns;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::CloseAllDropDown(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UBindButtonSystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CloseAllDropDown");

	Params::UUI_ParentPage_C_CloseAllDropDown_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetEnableStageForGameSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableStage                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::SetEnableStageForGameSlot(bool* EnableStage, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetEnableStageForGameSlot");

	Params::UUI_ParentPage_C_SetEnableStageForGameSlot_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (EnableStage != nullptr)
		*EnableStage = Parms.EnableStage;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BindToGameSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::BindToGameSlot(const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindToGameSlot");

	Params::UUI_ParentPage_C_BindToGameSlot_Params Parms{};

	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ClearAllModsInPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UUI_ParentPage_C::ClearAllModsInPage(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ClearAllModsInPage");

	Params::UUI_ParentPage_C_ClearAllModsInPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateNotificationInSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)

int32 UUI_ParentPage_C::UpdateNotificationInSwitcher(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, int32* CallFunc_SelectInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateNotificationInSwitcher");

	Params::UUI_ParentPage_C_UpdateNotificationInSwitcher_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_SelectInt_ReturnValue != nullptr)
		*CallFunc_SelectInt_ReturnValue = Parms.CallFunc_SelectInt_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.InitWidgetStoreMenuRefs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::InitWidgetStoreMenuRefs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "InitWidgetStoreMenuRefs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateAllThemeSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

struct FSlateColor UUI_ParentPage_C::UpdateAllThemeSettings(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateAllThemeSettings");

	Params::UUI_ParentPage_C_UpdateAllThemeSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.IsUrlValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::IsUrlValid(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsUrlValid");

	Params::UUI_ParentPage_C_IsUrlValid_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdatePagesPagination
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UUI_ParentPage_C::UpdatePagesPagination(bool* CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdatePagesPagination");

	Params::UUI_ParentPage_C_UpdatePagesPagination_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.FilterModInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference, Interp)
// struct FCFCoreSearchModsFilter     CallFunc_MakeSearchModsFilter_ReturnValue                        (Edit, Net, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::FilterModInfo(const struct FCFCoreSearchModsFilter& ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "FilterModInfo");

	Params::UUI_ParentPage_C_FilterModInfo_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_MakeSearchModsFilter_ReturnValue = CallFunc_MakeSearchModsFilter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.GetCurrentTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

enum class ENUM_SideTabs UUI_ParentPage_C::GetCurrentTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetCurrentTab");

	Params::UUI_ParentPage_C_GetCurrentTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateSearchText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

class FString UUI_ParentPage_C::UpdateSearchText(class FText* CallFunc_Conv_IntToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateSearchText");

	Params::UUI_ParentPage_C_UpdateSearchText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_IntToText_ReturnValue != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue = Parms.CallFunc_Conv_IntToText_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.LoadSavedUpImagesAsync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (ExportObject, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::LoadSavedUpImagesAsync(int32 CallFunc_GetModIndexesForCurrentRow_First, int32 CallFunc_GetModIndexesForCurrentRow_Last, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "LoadSavedUpImagesAsync");

	Params::UUI_ParentPage_C_LoadSavedUpImagesAsync_Params Parms{};

	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_GetModIndexesForCurrentRow_Last = CallFunc_GetModIndexesForCurrentRow_Last;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.InitiliazeImageDownloads
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyToStart                                                     (Edit, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::InitiliazeImageDownloads(bool ReadyToStart, class UUI_GameSlot_C* K2Node_DynamicCast_AsUI_Game_Slot, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "InitiliazeImageDownloads");

	Params::UUI_ParentPage_C_InitiliazeImageDownloads_Params Parms{};

	Parms.ReadyToStart = ReadyToStart;
	Parms.K2Node_DynamicCast_AsUI_Game_Slot = K2Node_DynamicCast_AsUI_Game_Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Mods                                                             (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::CalculateModsPerRow(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CalculateModsPerRow");

	Params::UUI_ParentPage_C_CalculateModsPerRow_Params Parms{};

	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Mods                                                             (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (BlueprintVisible, ExportObject, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::CalculateModsPerPage(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CalculateModsPerPage");

	Params::UUI_ParentPage_C_CalculateModsPerPage_Params Parms{};

	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.PrevPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 UUI_ParentPage_C::PrevPage(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PrevPage");

	Params::UUI_ParentPage_C_PrevPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::NextPage(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "NextPage");

	Params::UUI_ParentPage_C_NextPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetCurrentSearchInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        CurrentSearchInput                                               (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::GetCurrentSearchInput(class FText CurrentSearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetCurrentSearchInput");

	Params::UUI_ParentPage_C_GetCurrentSearchInput_Params Parms{};

	Parms.CurrentSearchInput = CurrentSearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.OnPageActiveted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::OnPageActiveted(class FText* Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnPageActiveted");

	Params::UUI_ParentPage_C_OnPageActiveted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Search_Input != nullptr)
		*Search_Input = Parms.Search_Input;

}


// Function UI_ParentPage.UI_ParentPage_C.SetCurrentClassMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

bool UUI_ParentPage_C::SetCurrentClassMods(bool* CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetCurrentClassMods");

	Params::UUI_ParentPage_C_SetCurrentClassMods_Params Parms{};

	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ResetPageNum
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::ResetPageNum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ResetPageNum");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SetStypleOfPageArrowsButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::SetStypleOfPageArrowsButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetStypleOfPageArrowsButtons");

	Params::UUI_ParentPage_C_SetStypleOfPageArrowsButtons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CreateModSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AtIndex                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FInstallProgressMod         K2Node_MakeStruct_InstallProgressMod                             (ConstParm, ExportObject, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class UUniformGridSlot* UUI_ParentPage_C::CreateModSlot(const struct FInstallProgressMod& K2Node_MakeStruct_InstallProgressMod, int32* CallFunc_CalculateModsPerRow_Mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CreateModSlot");

	Params::UUI_ParentPage_C_CreateModSlot_Params Parms{};

	Parms.K2Node_MakeStruct_InstallProgressMod = K2Node_MakeStruct_InstallProgressMod;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.IsSearchInputValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (Edit, Net, EditFixedSize, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::IsSearchInputValid(bool Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsSearchInputValid");

	Params::UUI_ParentPage_C_IsSearchInputValid_Params Parms{};

	Parms.Return_Value = Return_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.OnPageLoaded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::OnPageLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnPageLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SearchForAuthorsName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Input                                                            (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
// TArray<struct FModAuthor>          Authors                                                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               AuthorFound                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_FindSubstring_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUI_ParentPage_C::SearchForAuthorsName(class FText Input, TArray<struct FModAuthor>* Authors, class FString* CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_FindSubstring_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SearchForAuthorsName");

	Params::UUI_ParentPage_C_SearchForAuthorsName_Params Parms{};

	Parms.Input = Input;
	Parms.CallFunc_FindSubstring_ReturnValue = CallFunc_FindSubstring_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Authors != nullptr)
		*Authors = std::move(Parms.Authors);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateClasses
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::UpdateClasses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateClasses");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SetupTimeFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ENUM_TimeFilters        SelectedDefaultOption                                            (BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference, Interp)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::SetupTimeFilter(enum class ENUM_TimeFilters SelectedDefaultOption, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8* CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, int32* CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_MakeLiteralInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetupTimeFilter");

	Params::UUI_ParentPage_C_SetupTimeFilter_Params Parms{};

	Parms.SelectedDefaultOption = SelectedDefaultOption;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetValidValue_ReturnValue != nullptr)
		*CallFunc_GetValidValue_ReturnValue = Parms.CallFunc_GetValidValue_ReturnValue;

	if (CallFunc_Conv_ByteToInt_ReturnValue != nullptr)
		*CallFunc_Conv_ByteToInt_ReturnValue = Parms.CallFunc_Conv_ByteToInt_ReturnValue;

	if (CallFunc_MakeLiteralInt_ReturnValue != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue = Parms.CallFunc_MakeLiteralInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetupSortByOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECFCoreModsSearchSortFieldSelectedDefaultOption                                            (BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        Temp_text_Variable_1                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        Temp_text_Variable_2                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        Temp_text_Variable_3                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FText                        Temp_text_Variable_4                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FText                        Temp_text_Variable_5                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        Temp_text_Variable_6                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        Temp_text_Variable_7                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// class FText                        Temp_text_Variable_8                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// class FText                        Temp_text_Variable_9                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// class FText                        Temp_text_Variable_10                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FText                        Temp_text_Variable_11                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// enum class ECFCoreModsSearchSortFieldTemp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FText                        Temp_text_Variable_12                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        Temp_text_Variable_13                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        Temp_text_Variable_14                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        Temp_text_Variable_15                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// class FText                        Temp_text_Variable_16                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// class FText                        Temp_text_Variable_17                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// class FText                        Temp_text_Variable_18                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        Temp_text_Variable_19                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_20                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_21                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_22                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_23                                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldTemp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<enum class ECFCoreModsSearchSortField>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldCallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldCallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::SetupSortByOptions(enum class ECFCoreModsSearchSortField SelectedDefaultOption, enum class ECFCoreModsSearchSortField* Temp_byte_Variable, enum class ECFCoreModsSearchSortField* Temp_byte_Variable_1, class FText* K2Node_Select_Default, class FText* K2Node_Select_Default_1, class FString* CallFunc_Conv_TextToString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetupSortByOptions");

	Params::UUI_ParentPage_C_SetupSortByOptions_Params Parms{};

	Parms.SelectedDefaultOption = SelectedDefaultOption;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SelectClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

void UUI_ParentPage_C::SelectClass(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SelectClass");

	Params::UUI_ParentPage_C_SelectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

}


// Function UI_ParentPage.UI_ParentPage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply UUI_ParentPage_C::OnMouseButtonDown(const struct FEventReply& ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnMouseButtonDown");

	Params::UUI_ParentPage_C_OnMouseButtonDown_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BuildPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ConstParm, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_ParentPage_C::BuildPage(bool* Temp_bool_Variable, int32* CallFunc_Int32_SubOne_ReturnValue, int32* CallFunc_CalculateModsPerPage_Mods, int32* CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BuildPage");

	Params::UUI_ParentPage_C_BuildPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Int32_SubOne_ReturnValue != nullptr)
		*CallFunc_Int32_SubOne_ReturnValue = Parms.CallFunc_Int32_SubOne_ReturnValue;

	if (CallFunc_CalculateModsPerPage_Mods != nullptr)
		*CallFunc_CalculateModsPerPage_Mods = Parms.CallFunc_CalculateModsPerPage_Mods;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CheckWhichTextAppearsFirst
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        NameOne                                                          (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        NameTwo                                                          (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Name_One_Appears_First                                           (Edit, ConstParm, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              _numOfLettersForCheck                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_ToUpper_ReturnValue_1                                   (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_1               (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetCharacterAsNumber_ReturnValue                        (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetCharacterAsNumber_ReturnValue_1                      (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUI_ParentPage_C::CheckWhichTextAppearsFirst(bool* Temp_bool_Variable, class FString* CallFunc_Conv_TextToString_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CheckWhichTextAppearsFirst");

	Params::UUI_ParentPage_C_CheckWhichTextAppearsFirst_Params Parms{};

	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_1 = CallFunc_GetCharacterArrayFromString_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.IsModsListEmpty
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEmpty                                                          (BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UUI_ParentPage_C::IsModsListEmpty(bool* IsEmpty, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsModsListEmpty");

	Params::UUI_ParentPage_C_IsModsListEmpty_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature(class FString* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature");

	Params::UUI_ParentPage_C_BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature(class FString* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature");

	Params::UUI_ParentPage_C_BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

}


// Function UI_ParentPage.UI_ParentPage_C.Event Update Filter By Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Current_Class_Category_ID                                        (Edit, Net, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

int64 UUI_ParentPage_C::Event_Update_Filter_By_Options()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event Update Filter By Options");

	Params::UUI_ParentPage_C_Event_Update_Filter_By_Options_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Event On Class Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::Event_On_Class_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event On Class Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.Event Search Mods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::Event_Search_Mods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Event Search Mods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.ConstructParentPage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::ConstructParentPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ConstructParentPage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.FillTheModList
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::FillTheModList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "FillTheModList");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.GetMods
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::GetMods()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetMods");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SearchInput                                                      (ConstParm, ExportObject, Net, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::UpdateSearch(class FText SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateSearch");

	Params::UUI_ParentPage_C_UpdateSearch_Params Parms{};

	Parms.SearchInput = SearchInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.OnSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::OnSearch(class FText* Search_Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnSearch");

	Params::UUI_ParentPage_C_OnSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Search_Input != nullptr)
		*Search_Input = Parms.Search_Input;

}


// Function UI_ParentPage.UI_ParentPage_C.NextPageButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::NextPageButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "NextPageButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.PrevPageButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::PrevPageButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PrevPageButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PreConstruct");

	Params::UUI_ParentPage_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__UI_ParentPage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__UI_ParentPage_UI_PaginationLeftRight_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ParentPage_C::BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__UI_ParentPage_UI_PaginationRight_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ParentPage.UI_ParentPage_C.SearchForModIDs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ModIds                                                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

TArray<int64> UUI_ParentPage_C::SearchForModIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SearchForModIDs");

	Params::UUI_ParentPage_C_SearchForModIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetModIDs
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int64>                      ForModIDs                                                        (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::GetModIDs(const TArray<int64>& ForModIDs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetModIDs");

	Params::UUI_ParentPage_C_GetModIDs_Params Parms{};

	Parms.ForModIDs = ForModIDs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.ExecuteUbergraph_UI_ParentPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ForModIDs                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_Option_1                              (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      K2Node_ComponentBoundEvent_Option                                (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_Current_Class_Category_ID                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        K2Node_Event_SearchInput                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_Event_Search_Input                                        (BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldCallFunc_Map_Find_Value                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

TArray<int64> UUI_ParentPage_C::ExecuteUbergraph_UI_ParentPage(const TArray<int64>& K2Node_CustomEvent_ForModIDs, int64* K2Node_CustomEvent_Current_Class_Category_ID, bool* CallFunc_IsValid_ReturnValue, class FText* K2Node_Event_SearchInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ExecuteUbergraph_UI_ParentPage");

	Params::UUI_ParentPage_C_ExecuteUbergraph_UI_ParentPage_Params Parms{};

	Parms.K2Node_CustomEvent_ForModIDs = K2Node_CustomEvent_ForModIDs;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Current_Class_Category_ID != nullptr)
		*K2Node_CustomEvent_Current_Class_Category_ID = Parms.K2Node_CustomEvent_Current_Class_Category_ID;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_Event_SearchInput != nullptr)
		*K2Node_Event_SearchInput = Parms.K2Node_Event_SearchInput;

	return Parms.ReturnValue;

}

}


