#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_RightClickMenu.UI_RightClickMenu_C
// (None)

class UClass* UUI_RightClickMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_RightClickMenu_C");

	return Clss;
}


// UI_RightClickMenu_C UI_RightClickMenu.Default__UI_RightClickMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_RightClickMenu_C* UUI_RightClickMenu_C::GetDefaultObj()
{
	static class UUI_RightClickMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_RightClickMenu_C*>(UUI_RightClickMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_RightClickMenu.UI_RightClickMenu_C.PlayFadeInOnBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UUMGSequencePlayer* UUI_RightClickMenu_C::PlayFadeInOnBeginPlay(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "PlayFadeInOnBeginPlay");

	Params::UUI_RightClickMenu_C_PlayFadeInOnBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.DecideWhichOptionsToDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GetIsModPaidStatus_Paid                                 (ExportObject, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)

bool UUI_RightClickMenu_C::DecideWhichOptionsToDisplay(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, bool* CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetIsModPaidStatus_Paid, bool CallFunc_GetIsModPaidStatus_Purchased, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, bool* CallFunc_IsValid_ReturnValue_5, bool Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_3, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "DecideWhichOptionsToDisplay");

	Params::UUI_RightClickMenu_C_DecideWhichOptionsToDisplay_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetIsModPaidStatus_Paid = CallFunc_GetIsModPaidStatus_Paid;
	Parms.CallFunc_GetIsModPaidStatus_Purchased = CallFunc_GetIsModPaidStatus_Purchased;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = Parms.K2Node_Select_Default_3;

	if (CallFunc_IsValid_ReturnValue_6 != nullptr)
		*CallFunc_IsValid_ReturnValue_6 = Parms.CallFunc_IsValid_ReturnValue_6;

	if (CallFunc_IsValid_ReturnValue_7 != nullptr)
		*CallFunc_IsValid_ReturnValue_7 = Parms.CallFunc_IsValid_ReturnValue_7;

	if (CallFunc_IsValid_ReturnValue_8 != nullptr)
		*CallFunc_IsValid_ReturnValue_8 = Parms.CallFunc_IsValid_ReturnValue_8;

	return Parms.ReturnValue;

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.Event Set To Like
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::Event_Set_To_Like()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "Event Set To Like");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.Event Set To Unlike
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::Event_Set_To_Unlike()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "Event Set To Unlike");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_DropdownMenu_UI_Button_Install_K2Node_ComponentBoundEvent_13_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_DropdownMenu_UI_Button_Install_K2Node_ComponentBoundEvent_13_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_DropdownMenu_UI_Button_Install_K2Node_ComponentBoundEvent_13_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_DropdownMenu_UI_Button_Report_K2Node_ComponentBoundEvent_14_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_DropdownMenu_UI_Button_Report_K2Node_ComponentBoundEvent_14_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_DropdownMenu_UI_Button_Report_K2Node_ComponentBoundEvent_14_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_DropdownMenu_UI_Button_Uninstall_K2Node_ComponentBoundEvent_15_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_DropdownMenu_UI_Button_Uninstall_K2Node_ComponentBoundEvent_15_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_DropdownMenu_UI_Button_Uninstall_K2Node_ComponentBoundEvent_15_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_DropdownMenu_UI_Button_Like_K2Node_ComponentBoundEvent_16_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_DropdownMenu_UI_Button_Like_K2Node_ComponentBoundEvent_16_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_DropdownMenu_UI_Button_Like_K2Node_ComponentBoundEvent_16_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_RightClickMenu_UI_Button_Update_K2Node_ComponentBoundEvent_24_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_RightClickMenu_UI_Button_Update_K2Node_ComponentBoundEvent_24_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_RightClickMenu_UI_Button_Update_K2Node_ComponentBoundEvent_24_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_RightClickMenu_UI_Button_View_K2Node_ComponentBoundEvent_25_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_RightClickMenu_UI_Button_View_K2Node_ComponentBoundEvent_25_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_RightClickMenu_UI_Button_View_K2Node_ComponentBoundEvent_25_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_RightClickMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "PreConstruct");

	Params::UUI_RightClickMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_RightClickMenu_UI_Button_Cancel_K2Node_ComponentBoundEvent_0_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.CustomEvent_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Temp_user_token                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

class FString UUI_RightClickMenu_C::CustomEvent_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "CustomEvent_3");

	Params::UUI_RightClickMenu_C_CustomEvent_3_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.CustomEvent_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCFCoreError                Error                                                            (ExportObject, EditFixedSize, Parm, ReturnParm)

struct FCFCoreError UUI_RightClickMenu_C::CustomEvent_4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "CustomEvent_4");

	Params::UUI_RightClickMenu_C_CustomEvent_4_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RightClickMenu_C::BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "BndEvt__UI_RightClickMenu_UI_Button_Purchase_K2Node_ComponentBoundEvent_1_Dispatcher_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.ExecuteUbergraph_UI_RightClickMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UCFCoreUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// enum class ESlateVisibility        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// class FString                      K2Node_CustomEvent_temp_user_token                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UUI_RightClickMenu_C::ExecuteUbergraph_UI_RightClickMenu(bool Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, bool* CallFunc_IsValid_ReturnValue_9, bool* CallFunc_IsValid_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class UCFCoreUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_12, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, enum class ESlateVisibility* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue_15, bool* CallFunc_IsValid_ReturnValue_16, bool* CallFunc_IsValid_ReturnValue_17, const class FString& K2Node_CustomEvent_temp_user_token, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText* CallFunc_Conv_Int64ToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_18, bool* CallFunc_CanLaunchURL_ReturnValue, bool* CallFunc_IsValid_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "ExecuteUbergraph_UI_RightClickMenu");

	Params::UUI_RightClickMenu_C_ExecuteUbergraph_UI_RightClickMenu_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CustomEvent_temp_user_token = K2Node_CustomEvent_temp_user_token;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (CallFunc_IsValid_ReturnValue_6 != nullptr)
		*CallFunc_IsValid_ReturnValue_6 = Parms.CallFunc_IsValid_ReturnValue_6;

	if (CallFunc_IsValid_ReturnValue_7 != nullptr)
		*CallFunc_IsValid_ReturnValue_7 = Parms.CallFunc_IsValid_ReturnValue_7;

	if (CallFunc_IsValid_ReturnValue_8 != nullptr)
		*CallFunc_IsValid_ReturnValue_8 = Parms.CallFunc_IsValid_ReturnValue_8;

	if (CallFunc_IsValid_ReturnValue_9 != nullptr)
		*CallFunc_IsValid_ReturnValue_9 = Parms.CallFunc_IsValid_ReturnValue_9;

	if (CallFunc_IsValid_ReturnValue_10 != nullptr)
		*CallFunc_IsValid_ReturnValue_10 = Parms.CallFunc_IsValid_ReturnValue_10;

	if (CallFunc_IsValid_ReturnValue_11 != nullptr)
		*CallFunc_IsValid_ReturnValue_11 = Parms.CallFunc_IsValid_ReturnValue_11;

	if (CallFunc_IsValid_ReturnValue_12 != nullptr)
		*CallFunc_IsValid_ReturnValue_12 = Parms.CallFunc_IsValid_ReturnValue_12;

	if (CallFunc_IsValid_ReturnValue_13 != nullptr)
		*CallFunc_IsValid_ReturnValue_13 = Parms.CallFunc_IsValid_ReturnValue_13;

	if (CallFunc_IsValid_ReturnValue_14 != nullptr)
		*CallFunc_IsValid_ReturnValue_14 = Parms.CallFunc_IsValid_ReturnValue_14;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue_15 != nullptr)
		*CallFunc_IsValid_ReturnValue_15 = Parms.CallFunc_IsValid_ReturnValue_15;

	if (CallFunc_IsValid_ReturnValue_16 != nullptr)
		*CallFunc_IsValid_ReturnValue_16 = Parms.CallFunc_IsValid_ReturnValue_16;

	if (CallFunc_IsValid_ReturnValue_17 != nullptr)
		*CallFunc_IsValid_ReturnValue_17 = Parms.CallFunc_IsValid_ReturnValue_17;

	if (CallFunc_Conv_Int64ToText_ReturnValue != nullptr)
		*CallFunc_Conv_Int64ToText_ReturnValue = Parms.CallFunc_Conv_Int64ToText_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_18 != nullptr)
		*CallFunc_IsValid_ReturnValue_18 = Parms.CallFunc_IsValid_ReturnValue_18;

	if (CallFunc_CanLaunchURL_ReturnValue != nullptr)
		*CallFunc_CanLaunchURL_ReturnValue = Parms.CallFunc_CanLaunchURL_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_19 != nullptr)
		*CallFunc_IsValid_ReturnValue_19 = Parms.CallFunc_IsValid_ReturnValue_19;

	return Parms.ReturnValue;

}

}


