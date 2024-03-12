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
// class UWidget*                     Widget                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

void UUI_ParentPage_C::GetClose_B(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetClose_B");

	Params::UUI_ParentPage_C_GetClose_B_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ParentPage.UI_ParentPage_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::PlayFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PlayFadeIn");

	Params::UUI_ParentPage_C_PlayFadeIn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ParentPage_C::BPEscapeClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BPEscapeClosed");

	Params::UUI_ParentPage_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsAnyModInstalling_ReturnValue                          (Edit, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_ParentPage_C::GetVisibility_0(class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetVisibility_0");

	Params::UUI_ParentPage_C_GetVisibility_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCurrentActivePage_CurrentPage != nullptr)
		*CallFunc_GetCurrentActivePage_CurrentPage = Parms.CallFunc_GetCurrentActivePage_CurrentPage;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ReturnModsOfCurrentPage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> Mod_List                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TrueModInfo                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> FinalOutputArray                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempArray                                                        (ConstParm, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Int32_SubOne_ReturnValue_1                              (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::ReturnModsOfCurrentPage(const TArray<struct FInstallProgressMod>& TempArray, bool Temp_bool_Variable, int32* Temp_int_Variable, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ReturnModsOfCurrentPage");

	Params::UUI_ParentPage_C_ReturnModsOfCurrentPage_Params Parms{};

	Parms.TempArray = TempArray;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.MoreImagesLeftToDownload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::MoreImagesLeftToDownload(int32* CallFunc_CalculateModsPerRow_Mods, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "MoreImagesLeftToDownload");

	Params::UUI_ParentPage_C_MoreImagesLeftToDownload_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetModIndexesForCurrentRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              First                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Last                                                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue_1                              (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)

int32 UUI_ParentPage_C::GetModIndexesForCurrentRow(int32 First, int32* CallFunc_CalculateModsPerRow_Mods)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetModIndexesForCurrentRow");

	Params::UUI_ParentPage_C_GetModIndexesForCurrentRow_Params Parms{};

	Parms.First = First;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadNextBatchOfMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::DownloadNextBatchOfMods(int32* Temp_int_Variable, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadNextBatchOfMods");

	Params::UUI_ParentPage_C_DownloadNextBatchOfMods_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadBatchOfMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)

bool UUI_ParentPage_C::DownloadBatchOfMods(int32* Temp_int_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "DownloadBatchOfMods");

	Params::UUI_ParentPage_C_DownloadBatchOfMods_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetModIndexesForCurrentRow_Last != nullptr)
		*CallFunc_GetModIndexesForCurrentRow_Last = Parms.CallFunc_GetModIndexesForCurrentRow_Last;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CheckIfImagesAreReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_MoreImagesLeftToDownload_ReturnValue                    (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool UUI_ParentPage_C::CheckIfImagesAreReady(bool Temp_bool_Variable, int32* Temp_int_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CheckIfImagesAreReady");

	Params::UUI_ParentPage_C_CheckIfImagesAreReady_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetModIndexesForCurrentRow_Last != nullptr)
		*CallFunc_GetModIndexesForCurrentRow_Last = Parms.CallFunc_GetModIndexesForCurrentRow_Last;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.DownloadImagesInAllMods
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_InitiliazeImageDownloads_ReadyToStart                   (Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// int32                              AtIndex                                                          (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUI_EmptySlot_C*             CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UUniformGridSlot* UUI_ParentPage_C::CreateEmptySlot(int32 AtIndex, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Percent_IntInt_ReturnValue, class UUI_EmptySlot_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CreateEmptySlot");

	Params::UUI_ParentPage_C_CreateEmptySlot_Params Parms{};

	Parms.AtIndex = AtIndex;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SwitchControllerAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ParentPage_C::SwitchControllerAction(const struct FKey& Key, enum class EViewState State, bool* CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SwitchControllerAction");

	Params::UUI_ParentPage_C_SwitchControllerAction_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

class UUI_GameSlot_C* UUI_ParentPage_C::Nav_Down_from_DropdownTime(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownTime");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownTime_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownSort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

class UUI_GameSlot_C* UUI_ParentPage_C::Nav_Down_from_DropdownSort(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownSort");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownSort_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav Down from DropdownCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_Nav_to_Options_ReturnValue                              (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)

class UUI_GameSlot_C* UUI_ParentPage_C::Nav_Down_from_DropdownCategory(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav Down from DropdownCategory");

	Params::UUI_ParentPage_C_Nav_Down_from_DropdownCategory_Params Parms{};

	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Nav for Up Move from List
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UUI_ParentPage_C::Nav_for_Up_Move_from_List()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "Nav for Up Move from List");

	Params::UUI_ParentPage_C_Nav_for_Up_Move_from_List_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetNavigationRuleForList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::SetNavigationRuleForList(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetNavigationRuleForList");

	Params::UUI_ParentPage_C_SetNavigationRuleForList_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetListFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UUI_GameSlot_C* UUI_ParentPage_C::SetListFocus(class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetListFocus");

	Params::UUI_ParentPage_C_SetListFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdatePaginations
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstallProgressMod> TotalList                                                        (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FMod_Remainder                                          (BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_FMod_ReturnValue                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Int32_AddOne_ReturnValue                                (ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::UpdatePaginations(bool Temp_bool_Variable, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdatePaginations");

	Params::UUI_ParentPage_C_UpdatePaginations_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ClearImageCache
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Map_Length_ReturnValue                                  (Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::ClearImageCache(bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ClearImageCache");

	Params::UUI_ParentPage_C_ClearImageCache_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BindToDropdown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ParentPage_C::BindToDropdown(int32* Temp_int_Variable, int32* Temp_int_Variable_1, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindToDropdown");

	Params::UUI_ParentPage_C_BindToDropdown_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropdownApartFrom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_CustomComboBox_C*        Dropdown                                                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_CustomComboBox_C*>Dropdowns                                                        (BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

class UBindButtonSystem* UUI_ParentPage_C::CloseAllDropdownApartFrom(const TArray<class UUI_CustomComboBox_C*>& Dropdowns, int32* Temp_int_Variable, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CloseAllDropdownApartFrom");

	Params::UUI_ParentPage_C_CloseAllDropdownApartFrom_Params Parms{};

	Parms.Dropdowns = Dropdowns;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CloseAllDropDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UUI_CustomComboBox_C*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_CustomComboBox_C*        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::CloseAllDropDown(int32* Temp_int_Variable, TArray<class UUI_CustomComboBox_C*>* K2Node_MakeArray_Array, class UUI_CustomComboBox_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CloseAllDropDown");

	Params::UUI_ParentPage_C_CloseAllDropDown_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetEnableStageForGameSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableStage                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UUI_GameSlot_C* UUI_ParentPage_C::SetEnableStageForGameSlot(bool* EnableStage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetEnableStageForGameSlot");

	Params::UUI_ParentPage_C_SetEnableStageForGameSlot_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (EnableStage != nullptr)
		*EnableStage = Parms.EnableStage;

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BindToGameSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class UUI_GameSlot_C* UUI_ParentPage_C::BindToGameSlot(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BindToGameSlot");

	Params::UUI_ParentPage_C_BindToGameSlot_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ClearAllModsInPage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ParentPage_C::ClearAllModsInPage(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ClearAllModsInPage");

	Params::UUI_ParentPage_C_ClearAllModsInPage_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateNotificationInSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UUI_ParentPage_C*            CallFunc_GetCurrentActivePage_CurrentPage                        (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ENUM_SideTabs           CallFunc_GetCurrentActivePage_CurrentActiveTab                   (BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)

bool UUI_ParentPage_C::UpdateNotificationInSwitcher(class UUI_ParentPage_C** CallFunc_GetCurrentActivePage_CurrentPage, bool K2Node_SwitchEnum_CmpSuccess, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateNotificationInSwitcher");

	Params::UUI_ParentPage_C_UpdateNotificationInSwitcher_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCurrentActivePage_CurrentPage != nullptr)
		*CallFunc_GetCurrentActivePage_CurrentPage = Parms.CallFunc_GetCurrentActivePage_CurrentPage;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

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
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateColor UUI_ParentPage_C::UpdateAllThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateAllThemeSettings");

	Params::UUI_ParentPage_C_UpdateAllThemeSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.IsUrlValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      URL                                                              (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::IsUrlValid(bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsUrlValid");

	Params::UUI_ParentPage_C_IsUrlValid_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdatePagesPagination
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUI_ParentPage_C::UpdatePagesPagination(int64* CallFunc_Conv_IntToInt64_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, int64* CallFunc_Conv_IntToInt64_ReturnValue_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdatePagesPagination");

	Params::UUI_ParentPage_C_UpdatePagesPagination_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_IntToInt64_ReturnValue != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue = Parms.CallFunc_Conv_IntToInt64_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (CallFunc_Conv_IntToInt64_ReturnValue_1 != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue_1 = Parms.CallFunc_Conv_IntToInt64_ReturnValue_1;

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.FilterModInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCFCoreSearchModsFilter     ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FCFCoreSearchModsFilter     CallFunc_MakeSearchModsFilter_ReturnValue                        (Edit, ConstParm, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_ParentPage_C::FilterModInfo(const struct FCFCoreSearchModsFilter& CallFunc_MakeSearchModsFilter_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "FilterModInfo");

	Params::UUI_ParentPage_C_FilterModInfo_Params Parms{};

	Parms.CallFunc_MakeSearchModsFilter_ReturnValue = CallFunc_MakeSearchModsFilter_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetCurrentTab
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ENUM_SideTabs           CurrentActiveTab                                                 (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_ParentPage_C::GetCurrentTab(enum class ENUM_SideTabs* CurrentActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetCurrentTab");

	Params::UUI_ParentPage_C_GetCurrentTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentActiveTab != nullptr)
		*CurrentActiveTab = Parms.CurrentActiveTab;

}


// Function UI_ParentPage.UI_ParentPage_C.UpdateSearchText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

class FText UUI_ParentPage_C::UpdateSearchText(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateSearchText");

	Params::UUI_ParentPage_C_UpdateSearchText_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.LoadSavedUpImagesAsync
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_First                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetModIndexesForCurrentRow_Last                         (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::LoadSavedUpImagesAsync(int32* Temp_int_Variable, int32 CallFunc_GetModIndexesForCurrentRow_First, int32* CallFunc_GetModIndexesForCurrentRow_Last, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "LoadSavedUpImagesAsync");

	Params::UUI_ParentPage_C_LoadSavedUpImagesAsync_Params Parms{};

	Parms.CallFunc_GetModIndexesForCurrentRow_First = CallFunc_GetModIndexesForCurrentRow_First;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetModIndexesForCurrentRow_Last != nullptr)
		*CallFunc_GetModIndexesForCurrentRow_Last = Parms.CallFunc_GetModIndexesForCurrentRow_Last;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.InitiliazeImageDownloads
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyToStart                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_DynamicCast_AsUI_Game_Slot                                (ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UUI_ParentPage_C::InitiliazeImageDownloads(bool ReadyToStart, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "InitiliazeImageDownloads");

	Params::UUI_ParentPage_C_InitiliazeImageDownloads_Params Parms{};

	Parms.ReadyToStart = ReadyToStart;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerRow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Mods                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::CalculateModsPerRow(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CalculateModsPerRow");

	Params::UUI_ParentPage_C_CalculateModsPerRow_Params Parms{};

	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CalculateModsPerPage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Mods                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::CalculateModsPerPage(const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CalculateModsPerPage");

	Params::UUI_ParentPage_C_CalculateModsPerPage_Params Parms{};

	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.PrevPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)

bool UUI_ParentPage_C::PrevPage(int32* Temp_int_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PrevPage");

	Params::UUI_ParentPage_C_PrevPage_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.NextPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::NextPage(int32* Temp_int_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "NextPage");

	Params::UUI_ParentPage_C_NextPage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.GetCurrentSearchInput
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        CurrentSearchInput                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ParentPage_C::GetCurrentSearchInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetCurrentSearchInput");

	Params::UUI_ParentPage_C_GetCurrentSearchInput_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.OnPageActiveted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Search_Input                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ParentPage_C::OnPageActiveted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnPageActiveted");

	Params::UUI_ParentPage_C_OnPageActiveted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetCurrentClassMods
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (Edit, ConstParm, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

int32 UUI_ParentPage_C::SetCurrentClassMods(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInstallProgressMod& CallFunc_Array_Get_Item, int64* CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetCurrentClassMods");

	Params::UUI_ParentPage_C_SetCurrentClassMods_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_IntToInt64_ReturnValue != nullptr)
		*CallFunc_Conv_IntToInt64_ReturnValue = Parms.CallFunc_Conv_IntToInt64_ReturnValue;

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
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::SetStypleOfPageArrowsButtons(bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetStypleOfPageArrowsButtons");

	Params::UUI_ParentPage_C_SetStypleOfPageArrowsButtons_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CreateModSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AtIndex                                                          (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class UUI_GameSlot_C*              CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FInstallProgressMod         K2Node_MakeStruct_InstallProgressMod                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_CalculateModsPerRow_Mods                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class UUniformGridSlot* UUI_ParentPage_C::CreateModSlot(int32 AtIndex, class UUI_GameSlot_C* CallFunc_Create_ReturnValue, const struct FInstallProgressMod& K2Node_MakeStruct_InstallProgressMod, int32* CallFunc_CalculateModsPerRow_Mods, int32* CallFunc_Percent_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CreateModSlot");

	Params::UUI_ParentPage_C_CreateModSlot_Params Parms{};

	Parms.AtIndex = AtIndex;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_InstallProgressMod = K2Node_MakeStruct_InstallProgressMod;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_CalculateModsPerRow_Mods != nullptr)
		*CallFunc_CalculateModsPerRow_Mods = Parms.CallFunc_CalculateModsPerRow_Mods;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.IsSearchInputValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Return_Value                                                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

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
// TArray<struct FModAuthor>          Authors                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               AuthorFound                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// struct FModAuthor                  CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_FindSubstring_ReturnValue                               (Edit, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 UUI_ParentPage_C::SearchForAuthorsName(class FText Input, bool AuthorFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FModAuthor& CallFunc_Array_Get_Item, int32* CallFunc_FindSubstring_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SearchForAuthorsName");

	Params::UUI_ParentPage_C_SearchForAuthorsName_Params Parms{};

	Parms.Input = Input;
	Parms.AuthorFound = AuthorFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FindSubstring_ReturnValue != nullptr)
		*CallFunc_FindSubstring_ReturnValue = Parms.CallFunc_FindSubstring_ReturnValue;

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
// enum class ENUM_TimeFilters        SelectedDefaultOption                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::SetupTimeFilter(enum class ENUM_TimeFilters SelectedDefaultOption, int32* Temp_int_Variable, int32* Temp_int_Variable_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_MakeLiteralInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetupTimeFilter");

	Params::UUI_ParentPage_C_SetupTimeFilter_Params Parms{};

	Parms.SelectedDefaultOption = SelectedDefaultOption;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_MakeLiteralInt_ReturnValue != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue = Parms.CallFunc_MakeLiteralInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SetupSortByOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECFCoreModsSearchSortFieldSelectedDefaultOption                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        Temp_text_Variable                                               (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        Temp_text_Variable_1                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        Temp_text_Variable_2                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        Temp_text_Variable_3                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        Temp_text_Variable_4                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FText                        Temp_text_Variable_5                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class FText                        Temp_text_Variable_6                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        Temp_text_Variable_7                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class FText                        Temp_text_Variable_8                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FText                        Temp_text_Variable_9                                             (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class FText                        Temp_text_Variable_10                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FText                        Temp_text_Variable_11                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// enum class ECFCoreModsSearchSortFieldTemp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        Temp_text_Variable_12                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FText                        Temp_text_Variable_13                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        Temp_text_Variable_14                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        Temp_text_Variable_15                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// class FText                        Temp_text_Variable_16                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// class FText                        Temp_text_Variable_17                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// class FText                        Temp_text_Variable_18                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        Temp_text_Variable_19                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_20                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_21                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_22                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// class FText                        Temp_text_Variable_23                                            (ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldTemp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<enum class ECFCoreModsSearchSortField>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldCallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class FText                        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FSTRUCT_CustomComboBoxOptionK2Node_MakeStruct_STRUCT_CustomComboBoxOption                    (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::SetupSortByOptions(enum class ECFCoreModsSearchSortField SelectedDefaultOption, class FText* Temp_text_Variable, class FText* Temp_text_Variable_1, class FText* Temp_text_Variable_2, class FText* Temp_text_Variable_3, class FText* Temp_text_Variable_4, class FText* Temp_text_Variable_5, class FText* Temp_text_Variable_6, class FText* Temp_text_Variable_7, class FText* Temp_text_Variable_8, class FText* Temp_text_Variable_9, class FText* Temp_text_Variable_10, class FText* Temp_text_Variable_11, enum class ECFCoreModsSearchSortField Temp_byte_Variable, class FText* Temp_text_Variable_12, class FText* Temp_text_Variable_13, class FText* Temp_text_Variable_14, class FText* Temp_text_Variable_15, class FText* Temp_text_Variable_16, class FText* Temp_text_Variable_17, class FText* Temp_text_Variable_18, class FText* Temp_text_Variable_19, class FText* Temp_text_Variable_20, class FText* Temp_text_Variable_21, class FText* Temp_text_Variable_22, class FText* Temp_text_Variable_23, int32 Temp_int_Array_Index_Variable, enum class ECFCoreModsSearchSortField Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, TArray<enum class ECFCoreModsSearchSortField>* K2Node_MakeArray_Array, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item, enum class ECFCoreModsSearchSortField CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SetupSortByOptions");

	Params::UUI_ParentPage_C_SetupSortByOptions_Params Parms{};

	Parms.SelectedDefaultOption = SelectedDefaultOption;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_text_Variable != nullptr)
		*Temp_text_Variable = Parms.Temp_text_Variable;

	if (Temp_text_Variable_1 != nullptr)
		*Temp_text_Variable_1 = Parms.Temp_text_Variable_1;

	if (Temp_text_Variable_2 != nullptr)
		*Temp_text_Variable_2 = Parms.Temp_text_Variable_2;

	if (Temp_text_Variable_3 != nullptr)
		*Temp_text_Variable_3 = Parms.Temp_text_Variable_3;

	if (Temp_text_Variable_4 != nullptr)
		*Temp_text_Variable_4 = Parms.Temp_text_Variable_4;

	if (Temp_text_Variable_5 != nullptr)
		*Temp_text_Variable_5 = Parms.Temp_text_Variable_5;

	if (Temp_text_Variable_6 != nullptr)
		*Temp_text_Variable_6 = Parms.Temp_text_Variable_6;

	if (Temp_text_Variable_7 != nullptr)
		*Temp_text_Variable_7 = Parms.Temp_text_Variable_7;

	if (Temp_text_Variable_8 != nullptr)
		*Temp_text_Variable_8 = Parms.Temp_text_Variable_8;

	if (Temp_text_Variable_9 != nullptr)
		*Temp_text_Variable_9 = Parms.Temp_text_Variable_9;

	if (Temp_text_Variable_10 != nullptr)
		*Temp_text_Variable_10 = Parms.Temp_text_Variable_10;

	if (Temp_text_Variable_11 != nullptr)
		*Temp_text_Variable_11 = Parms.Temp_text_Variable_11;

	if (Temp_text_Variable_12 != nullptr)
		*Temp_text_Variable_12 = Parms.Temp_text_Variable_12;

	if (Temp_text_Variable_13 != nullptr)
		*Temp_text_Variable_13 = Parms.Temp_text_Variable_13;

	if (Temp_text_Variable_14 != nullptr)
		*Temp_text_Variable_14 = Parms.Temp_text_Variable_14;

	if (Temp_text_Variable_15 != nullptr)
		*Temp_text_Variable_15 = Parms.Temp_text_Variable_15;

	if (Temp_text_Variable_16 != nullptr)
		*Temp_text_Variable_16 = Parms.Temp_text_Variable_16;

	if (Temp_text_Variable_17 != nullptr)
		*Temp_text_Variable_17 = Parms.Temp_text_Variable_17;

	if (Temp_text_Variable_18 != nullptr)
		*Temp_text_Variable_18 = Parms.Temp_text_Variable_18;

	if (Temp_text_Variable_19 != nullptr)
		*Temp_text_Variable_19 = Parms.Temp_text_Variable_19;

	if (Temp_text_Variable_20 != nullptr)
		*Temp_text_Variable_20 = Parms.Temp_text_Variable_20;

	if (Temp_text_Variable_21 != nullptr)
		*Temp_text_Variable_21 = Parms.Temp_text_Variable_21;

	if (Temp_text_Variable_22 != nullptr)
		*Temp_text_Variable_22 = Parms.Temp_text_Variable_22;

	if (Temp_text_Variable_23 != nullptr)
		*Temp_text_Variable_23 = Parms.Temp_text_Variable_23;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.SelectClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ParentPage_C::SelectClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "SelectClass");

	Params::UUI_ParentPage_C_SelectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UUI_ParentPage_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent, bool* CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, struct FEventReply* CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnMouseButtonDown");

	Params::UUI_ParentPage_C_OnMouseButtonDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	if (CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue != nullptr)
		*CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;

	if (CallFunc_Handled_ReturnValue != nullptr)
		*CallFunc_Handled_ReturnValue = std::move(Parms.CallFunc_Handled_ReturnValue);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BuildPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_CalculateModsPerPage_Mods                               (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ParentPage_C::BuildPage(bool Temp_bool_Variable, int32* Temp_int_Variable, int32* CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BuildPage");

	Params::UUI_ParentPage_C_BuildPage_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.CheckWhichTextAppearsFirst
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        NameOne                                                          (Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        NameTwo                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Name_One_Appears_First                                           (Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              _numOfLettersForCheck                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (Edit, ExportObject, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_ToUpper_ReturnValue_1                                   (BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue_1               (Edit, ExportObject, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetCharacterAsNumber_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetCharacterAsNumber_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 UUI_ParentPage_C::CheckWhichTextAppearsFirst(bool Temp_bool_Variable, const class FString& CallFunc_ToUpper_ReturnValue, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue_1, const TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "CheckWhichTextAppearsFirst");

	Params::UUI_ParentPage_C_CheckWhichTextAppearsFirst_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue_1 = CallFunc_ToUpper_ReturnValue_1;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue_1 = CallFunc_GetCharacterArrayFromString_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.IsModsListEmpty
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsEmpty                                                          (BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

int32 UUI_ParentPage_C::IsModsListEmpty(bool IsEmpty, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "IsModsListEmpty");

	Params::UUI_ParentPage_C_IsModsListEmpty_Params Parms{};

	Parms.IsEmpty = IsEmpty;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

class FString UUI_ParentPage_C::BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature");

	Params::UUI_ParentPage_C_BndEvt__ParentPageWidget_SortBySelect_K2Node_ComponentBoundEvent_4_OnOptionSelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

class FString UUI_ParentPage_C::BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature");

	Params::UUI_ParentPage_C_BndEvt__ParentPageWidget_CategoriesSelect2_K2Node_ComponentBoundEvent_5_OnOptionSelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.Event Update Filter By Options
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                              Current_Class_Category_ID                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

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
// class FText                        SearchInput                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ParentPage_C::UpdateSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "UpdateSearch");

	Params::UUI_ParentPage_C_UpdateSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// class FText                        Search_Input                                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ParentPage_C::OnSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "OnSearch");

	Params::UUI_ParentPage_C_OnSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UUI_ParentPage_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "PreConstruct");

	Params::UUI_ParentPage_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// TArray<int64>                      ModIds                                                           (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

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
// TArray<int64>                      ForModIDs                                                        (Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

TArray<int64> UUI_ParentPage_C::GetModIDs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "GetModIDs");

	Params::UUI_ParentPage_C_GetModIDs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ParentPage.UI_ParentPage_C.ExecuteUbergraph_UI_ParentPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ForModIDs                                     (ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_Option_1                              (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      K2Node_ComponentBoundEvent_Option                                (ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_Current_Class_Category_ID                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        K2Node_Event_SearchInput                                         (ExportObject, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_Event_Search_Input                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// enum class ECFCoreModsSearchSortFieldCallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<int64>                      K2Node_CustomEvent_ModIds                                        (EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

TArray<int64> UUI_ParentPage_C::ExecuteUbergraph_UI_ParentPage(int32* EntryPoint, const TArray<int64>& K2Node_CustomEvent_ForModIDs, int64* K2Node_CustomEvent_Current_Class_Category_ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ParentPage_C", "ExecuteUbergraph_UI_ParentPage");

	Params::UUI_ParentPage_C_ExecuteUbergraph_UI_ParentPage_Params Parms{};

	Parms.K2Node_CustomEvent_ForModIDs = K2Node_CustomEvent_ForModIDs;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_Current_Class_Category_ID != nullptr)
		*K2Node_CustomEvent_Current_Class_Category_ID = Parms.K2Node_CustomEvent_Current_Class_Category_ID;

	return Parms.ReturnValue;

}

}


