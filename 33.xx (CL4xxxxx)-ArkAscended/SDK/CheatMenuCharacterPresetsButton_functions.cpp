#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C
// (None)

class UClass* UCheatMenuCharacterPresetsButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuCharacterPresetsButton_C");

	return Clss;
}


// CheatMenuCharacterPresetsButton_C CheatMenuCharacterPresetsButton.Default__CheatMenuCharacterPresetsButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuCharacterPresetsButton_C* UCheatMenuCharacterPresetsButton_C::GetDefaultObj()
{
	static class UCheatMenuCharacterPresetsButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuCharacterPresetsButton_C*>(UCheatMenuCharacterPresetsButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.SetValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Cheat_Name                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsItems                                                            (ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// TArray<int32>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

TArray<int32> UCheatMenuCharacterPresetsButton_C::SetValues(class FText Cheat_Name, struct FCheatMenuCharacterPresetItems* Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "SetValues");

	Params::UCheatMenuCharacterPresetsButton_C_SetValues_Params Parms{};

	Parms.Cheat_Name = Cheat_Name;

	UObject::ProcessEvent(Func, &Parms);

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

	return Parms.ReturnValue;

}


// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuCharacterPresetsButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuCharacterPresetsButton.CheatMenuCharacterPresetsButton_C.ExecuteUbergraph_CheatMenuCharacterPresetsButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ExportObject, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_CloseActiveHub_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FCheatMenuCheatItem         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// float                              CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)

bool UCheatMenuCharacterPresetsButton_C::ExecuteUbergraph_CheatMenuCharacterPresetsButton(bool* CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, class AShooterHUD* CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, float* CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "ExecuteUbergraph_CheatMenuCharacterPresetsButton");

	Params::UCheatMenuCharacterPresetsButton_C_ExecuteUbergraph_CheatMenuCharacterPresetsButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.CallFunc_GetShooterHUD_ReturnValue = CallFunc_GetShooterHUD_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_CloseActiveHub_ReturnValue = CallFunc_CloseActiveHub_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast != nullptr)
		*CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast = Parms.CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast;

	return Parms.ReturnValue;

}

}


