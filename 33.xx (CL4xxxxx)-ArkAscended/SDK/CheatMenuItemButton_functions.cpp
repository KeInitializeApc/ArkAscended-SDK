#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuItemButton.CheatMenuItemButton_C
// (None)

class UClass* UCheatMenuItemButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuItemButton_C");

	return Clss;
}


// CheatMenuItemButton_C CheatMenuItemButton.Default__CheatMenuItemButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuItemButton_C* UCheatMenuItemButton_C::GetDefaultObj()
{
	static class UCheatMenuItemButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuItemButton_C*>(UCheatMenuItemButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuItemButton.CheatMenuItemButton_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ItemClass                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UPrimalItem*                 K2Node_DynamicCast_AsPrimal_Item                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItemDyeGeneric_C*     K2Node_DynamicCast_AsPrimal_Item_Dye_Generic                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetItemShortName_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

class FString UCheatMenuItemButton_C::SetItem(class UClass** ItemClass, class FText* CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic** CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemButton_C", "SetItem");

	Params::UCheatMenuItemButton_C_SetItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemClass != nullptr)
		*ItemClass = Parms.ItemClass;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_CreateDynamicMaterialInstance_ReturnValue != nullptr)
		*CallFunc_CreateDynamicMaterialInstance_ReturnValue = Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function CheatMenuItemButton.CheatMenuItemButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuItemButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuItemButton.CheatMenuItemButton_C.ExecuteUbergraph_CheatMenuItemButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      Temp_string_Variable                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      Temp_string_Variable_1                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class FString                      Temp_string_Variable_2                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FString                      Temp_string_Variable_3                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// TSoftClassPtr<class UPrimalItem>   CallFunc_Conv_ClassToSoftClassReference_ReturnValue              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)

TSoftClassPtr<class UPrimalItem> UCheatMenuItemButton_C::ExecuteUbergraph_CheatMenuItemButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* Temp_bool_Variable, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, bool* Temp_bool_Variable_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, class FString* K2Node_Select_Default, class FString* K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_1, class FString* CallFunc_Conv_TextToString_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue_3, float* CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuItemButton_C", "ExecuteUbergraph_CheatMenuItemButton");

	Params::UCheatMenuItemButton_C_ExecuteUbergraph_CheatMenuItemButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = std::move(Parms.K2Node_Select_Default_1);

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_TextToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_2);

	if (CallFunc_Conv_TextToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_3);

	if (CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast != nullptr)
		*CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast = Parms.CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast;

	return Parms.ReturnValue;

}

}


