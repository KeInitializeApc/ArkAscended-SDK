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
// class FText                        Cheat_Name                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)
// struct FCheatMenuCharacterLevelPresetLevels                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCheatMenuCharacterPresetItemsItems                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<int32>                      K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

TArray<int32> UCheatMenuCharacterPresetsButton_C::SetValues(class FText Cheat_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "SetValues");

	Params::UCheatMenuCharacterPresetsButton_C_SetValues_Params Parms{};

	Parms.Cheat_Name = Cheat_Name;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CloseActiveHub_ReturnValue                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FCheatMenuCheatItem         CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, EditConst, SubobjectReference)

double UCheatMenuCharacterPresetsButton_C::ExecuteUbergraph_CheatMenuCharacterPresetsButton(bool* CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterHUD** CallFunc_GetShooterHUD_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_CloseActiveHub_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FCheatMenuCheatItem* CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftClassReference_ReturnValue, float CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuCharacterPresetsButton_C", "ExecuteUbergraph_CheatMenuCharacterPresetsButton");

	Params::UCheatMenuCharacterPresetsButton_C_ExecuteUbergraph_CheatMenuCharacterPresetsButton_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_CloseActiveHub_ReturnValue = CallFunc_CloseActiveHub_ReturnValue;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast = CallFunc_BlueprintGiveItem_qualityOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetShooterHUD_ReturnValue != nullptr)
		*CallFunc_GetShooterHUD_ReturnValue = Parms.CallFunc_GetShooterHUD_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	return Parms.ReturnValue;

}

}


