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
// struct FInstalledMod               Mod_List                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FCategory                   Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// bool                               IsPresent                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              CurrentNum                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UUI_ClassCategorySelect_C::DoesModBelongToCategory(struct FInstalledMod* Mod_List, struct FCategory* Category, bool* IsPresent, int32* CurrentNum, int32 CallFunc_Conv_Int64ToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "DoesModBelongToCategory");

	Params::UUI_ClassCategorySelect_C_DoesModBelongToCategory_Params Parms{};

	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Mod_List != nullptr)
		*Mod_List = std::move(Parms.Mod_List);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (IsPresent != nullptr)
		*IsPresent = Parms.IsPresent;

	if (CurrentNum != nullptr)
		*CurrentNum = Parms.CurrentNum;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.FilterToModsOfClass
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FInstallProgressMod> Mod_List                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FCategory                   Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// TArray<struct FInstallProgressMod> ListOfMods                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// TArray<struct FInstallProgressMod> TempListToReturn                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              CurrentNum                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FInstallProgressMod         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

bool UUI_ClassCategorySelect_C::FilterToModsOfClass(TArray<struct FInstallProgressMod>* Mod_List, struct FCategory* Category, TArray<struct FInstallProgressMod>* ListOfMods, TArray<struct FInstallProgressMod>* TempListToReturn, int32* CurrentNum, int32* CallFunc_Array_Length_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, struct FInstallProgressMod* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "FilterToModsOfClass");

	Params::UUI_ClassCategorySelect_C_FilterToModsOfClass_Params Parms{};

	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Mod_List != nullptr)
		*Mod_List = std::move(Parms.Mod_List);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (ListOfMods != nullptr)
		*ListOfMods = std::move(Parms.ListOfMods);

	if (TempListToReturn != nullptr)
		*TempListToReturn = std::move(Parms.TempListToReturn);

	if (CurrentNum != nullptr)
		*CurrentNum = Parms.CurrentNum;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.Check Num Of Mods In Each Class
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FCategory                   Category                                                         (ConstParm, BlueprintReadOnly, OutParm, Transient)
// int32                              NumberInInt                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FText                        NumberInTXT                                                      (Edit, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              CurrentNum                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UUI_ClassCategorySelect_C::Check_Num_Of_Mods_In_Each_Class(struct FCategory* Category, int32* NumberInInt, class FText* NumberInTXT, int32* CurrentNum, int32* Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "Check Num Of Mods In Each Class");

	Params::UUI_ClassCategorySelect_C_Check_Num_Of_Mods_In_Each_Class_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Category != nullptr)
		*Category = std::move(Parms.Category);

	if (NumberInInt != nullptr)
		*NumberInInt = Parms.NumberInInt;

	if (NumberInTXT != nullptr)
		*NumberInTXT = Parms.NumberInTXT;

	if (CurrentNum != nullptr)
		*CurrentNum = Parms.CurrentNum;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.OnClassCategoriesInfoFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FCategory>           Categories                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst)

void UUI_ClassCategorySelect_C::OnClassCategoriesInfoFound(const TArray<struct FCategory>& Categories)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "OnClassCategoriesInfoFound");

	Params::UUI_ClassCategorySelect_C_OnClassCategoriesInfoFound_Params Parms{};

	Parms.Categories = Categories;

	UObject::ProcessEvent(Func, &Parms);

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


// Function UI_ClassCategorySelect.UI_ClassCategorySelect_C.ExecuteUbergraph_UI_ClassCategorySelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FCFCoreGetCategoriesFilter  CallFunc_MakeGetCategoriesFilter_ReturnValue                     (BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// TArray<struct FCategory>           K2Node_CustomEvent_categories                                    (Edit, BlueprintVisible, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCategory                   CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

FDelegateProperty_ UUI_ClassCategorySelect_C::ExecuteUbergraph_UI_ClassCategorySelect(int32 CallFunc_Add_IntInt_ReturnValue, const struct FCFCoreGetCategoriesFilter& CallFunc_MakeGetCategoriesFilter_ReturnValue, TArray<struct FCategory>* K2Node_CustomEvent_categories, int32* CallFunc_Array_Length_ReturnValue, struct FCategory* CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue, struct FCategory* CallFunc_Array_Get_Item_1, int32* CallFunc_Array_Length_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ClassCategorySelect_C", "ExecuteUbergraph_UI_ClassCategorySelect");

	Params::UUI_ClassCategorySelect_C_ExecuteUbergraph_UI_ClassCategorySelect_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeGetCategoriesFilter_ReturnValue = CallFunc_MakeGetCategoriesFilter_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_categories != nullptr)
		*K2Node_CustomEvent_categories = std::move(Parms.K2Node_CustomEvent_categories);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	if (CallFunc_Array_Get_Item_1 != nullptr)
		*CallFunc_Array_Get_Item_1 = std::move(Parms.CallFunc_Array_Get_Item_1);

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

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


