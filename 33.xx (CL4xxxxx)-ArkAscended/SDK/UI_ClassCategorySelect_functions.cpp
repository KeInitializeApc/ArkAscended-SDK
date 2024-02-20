#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ClassCategorySelect.UI_ClassCategorySelect_C
// (None)

class UClass* UUI_ClassCategorySelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ClassCategorySelect_C");

	return Clss;
}


// UI_ClassCategorySelect_C UI_ClassCategorySelect.Default__UI_ClassCategorySelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ClassCategorySelect_C* UUI_ClassCategorySelect_C::GetDefaultObj()
{
	static class UUI_ClassCategorySelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ClassCategorySelect_C*>(UUI_ClassCategorySelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.DoesModBelongToCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInstalledMod               Mod_List                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCategory                   Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// bool                               IsPresent                                                        (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CurrentNum                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UUI_ClassCategorySelect_C::DoesModBelongToCategory(struct FCategory* Category, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "DoesModBelongToCategory");

	Params::UUI_ClassCategorySelect_C_DoesModBelongToCategory_Params Parms{};

	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.FilterToModsOfClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FInstallProgressMod> Mod_List                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCategory                   Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// TArray<struct FInstallProgressMod> ListOfMods                                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FInstallProgressMod> TempListToReturn                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CurrentNum                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)

int32 UUI_ClassCategorySelect_C::FilterToModsOfClass(struct FCategory* Category, int32 CallFunc_Conv_Int64ToInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "FilterToModsOfClass");

	Params::UUI_ClassCategorySelect_C_FilterToModsOfClass_Params Parms{};

	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.Check Num Of Mods In Each Class
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCategory                   Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// int32                              NumberInInt                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        NumberInTXT                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CurrentNum                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

int32 UUI_ClassCategorySelect_C::Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, bool* CallFunc_IsValid_ReturnValue, class FText* CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "Check Num Of Mods In Each Class");

	Params::UUI_ClassCategorySelect_C_Check_Num_Of_Mods_In_Each_Class_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Conv_IntToText_ReturnValue != nullptr)
		*CallFunc_Conv_IntToText_ReturnValue = Parms.CallFunc_Conv_IntToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ConstructClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::ConstructClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "ConstructClass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCategory>           Categories                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)

TArray<struct FCategory> UUI_ClassCategorySelect_C::OnClassCategoriesInfoFound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassCategoriesInfoFound");

	Params::UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound_Error
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_ClassCategorySelect_C::OnClassCategoriesInfoFound_Error()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassCategoriesInfoFound_Error");

	Params::UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Error_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.SortClassCategories
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::SortClassCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "SortClassCategories");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ExecuteUbergraph_UI_ClassCategorySelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCFCoreGetCategoriesFilter  CallFunc_MakeGetCategoriesFilter_ReturnValue                     (ExportObject, Net, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

FDelegateProperty_ UUI_ClassCategorySelect_C::ExecuteUbergraph_UI_ClassCategorySelect(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* CallFunc_Array_Add_ReturnValue, struct FCFCoreError* K2Node_CustomEvent_error, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "ExecuteUbergraph_UI_ClassCategorySelect");

	Params::UUI_ClassCategorySelect_C_ExecuteUbergraph_UI_ClassCategorySelect_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassesInit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::OnClassesInit__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassesInit__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnSelectionChanged_ED__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ClassCategorySelect_C::OnSelectionChanged_ED__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnSelectionChanged_ED__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


