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
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_RightClickMenu_C::PlayFadeInOnBeginPlay(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "PlayFadeInOnBeginPlay");

	Params::UUI_RightClickMenu_C_PlayFadeInOnBeginPlay_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_RightClickMenu.UI_RightClickMenu_C.DecideWhichOptionsToDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Premium                              (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsModPaidStatus_Purchased                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_GetIsModPaidStatus_Tier_Price                           (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetIsModPaidStatus_Currency_Symbol                      (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)

bool UUI_RightClickMenu_C::DecideWhichOptionsToDisplay(bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue, enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue_1, bool* Temp_bool_Variable_1, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, bool* Temp_bool_Variable_2, bool* CallFunc_IsValid_ReturnValue_2, enum class ESlateVisibility* Temp_byte_Variable_4, enum class ESlateVisibility* Temp_byte_Variable_5, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, enum class ESlateVisibility* K2Node_Select_Default, enum class ESlateVisibility* K2Node_Select_Default_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, enum class ESlateVisibility* K2Node_Select_Default_2, enum class ESlateVisibility* Temp_byte_Variable_6, enum class ESlateVisibility* Temp_byte_Variable_7, bool* CallFunc_IsValid_ReturnValue_5, bool* Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_3, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "DecideWhichOptionsToDisplay");

	Params::UUI_RightClickMenu_C_DecideWhichOptionsToDisplay_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (Temp_byte_Variable_4 != nullptr)
		*Temp_byte_Variable_4 = Parms.Temp_byte_Variable_4;

	if (Temp_byte_Variable_5 != nullptr)
		*Temp_byte_Variable_5 = Parms.Temp_byte_Variable_5;

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

	if (Temp_byte_Variable_6 != nullptr)
		*Temp_byte_Variable_6 = Parms.Temp_byte_Variable_6;

	if (Temp_byte_Variable_7 != nullptr)
		*Temp_byte_Variable_7 = Parms.Temp_byte_Variable_7;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (Temp_bool_Variable_3 != nullptr)
		*Temp_bool_Variable_3 = Parms.Temp_bool_Variable_3;

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_RightClickMenu_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "PreConstruct");

	Params::UUI_RightClickMenu_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

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
// class FString                      Temp_user_token                                                  (Edit, BlueprintReadOnly, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// class UCFCoreSubsystem*            CallFunc_GetEngineSubsystem_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FString                      K2Node_CustomEvent_temp_user_token                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FCFCoreError                K2Node_CustomEvent_error                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FText                        CallFunc_Conv_Int64ToText_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_CanLaunchURL_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<int64>                      K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UUI_RightClickMenu_C::ExecuteUbergraph_UI_RightClickMenu(enum class ESlateVisibility* Temp_byte_Variable, enum class ESlateVisibility* Temp_byte_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, bool* CallFunc_IsValid_ReturnValue_6, bool* CallFunc_IsValid_ReturnValue_7, bool* CallFunc_IsValid_ReturnValue_8, bool* CallFunc_IsValid_ReturnValue_9, class UCFCoreSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool* CallFunc_IsValid_ReturnValue_10, bool* CallFunc_IsValid_ReturnValue_11, bool* CallFunc_IsValid_ReturnValue_12, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool* CallFunc_IsValid_ReturnValue_13, bool* CallFunc_IsValid_ReturnValue_14, bool* CallFunc_IsValid_ReturnValue_15, bool* CallFunc_IsValid_ReturnValue_16, bool* CallFunc_IsValid_ReturnValue_17, bool* Temp_bool_Variable, bool* CallFunc_IsValid_ReturnValue_18, enum class ESlateVisibility* K2Node_Select_Default, struct FCFCoreError* K2Node_CustomEvent_error, bool* CallFunc_IsValid_ReturnValue_19, bool* CallFunc_IsValid_ReturnValue_20, bool* CallFunc_IsValid_ReturnValue_21, class FString* CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RightClickMenu_C", "ExecuteUbergraph_UI_RightClickMenu");

	Params::UUI_RightClickMenu_C_ExecuteUbergraph_UI_RightClickMenu_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

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

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_13 != nullptr)
		*CallFunc_IsValid_ReturnValue_13 = Parms.CallFunc_IsValid_ReturnValue_13;

	if (CallFunc_IsValid_ReturnValue_14 != nullptr)
		*CallFunc_IsValid_ReturnValue_14 = Parms.CallFunc_IsValid_ReturnValue_14;

	if (CallFunc_IsValid_ReturnValue_15 != nullptr)
		*CallFunc_IsValid_ReturnValue_15 = Parms.CallFunc_IsValid_ReturnValue_15;

	if (CallFunc_IsValid_ReturnValue_16 != nullptr)
		*CallFunc_IsValid_ReturnValue_16 = Parms.CallFunc_IsValid_ReturnValue_16;

	if (CallFunc_IsValid_ReturnValue_17 != nullptr)
		*CallFunc_IsValid_ReturnValue_17 = Parms.CallFunc_IsValid_ReturnValue_17;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_IsValid_ReturnValue_18 != nullptr)
		*CallFunc_IsValid_ReturnValue_18 = Parms.CallFunc_IsValid_ReturnValue_18;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_CustomEvent_error != nullptr)
		*K2Node_CustomEvent_error = std::move(Parms.K2Node_CustomEvent_error);

	if (CallFunc_IsValid_ReturnValue_19 != nullptr)
		*CallFunc_IsValid_ReturnValue_19 = Parms.CallFunc_IsValid_ReturnValue_19;

	if (CallFunc_IsValid_ReturnValue_20 != nullptr)
		*CallFunc_IsValid_ReturnValue_20 = Parms.CallFunc_IsValid_ReturnValue_20;

	if (CallFunc_IsValid_ReturnValue_21 != nullptr)
		*CallFunc_IsValid_ReturnValue_21 = Parms.CallFunc_IsValid_ReturnValue_21;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	return Parms.ReturnValue;

}

}


