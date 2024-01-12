#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C
// (None)

class UClass* UUI_ModSuccessfullyInsalled_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ModSuccessfullyInsalled_C");

	return Clss;
}


// UI_ModSuccessfullyInsalled_C UI_ModSuccessfullyInsalled.Default__UI_ModSuccessfullyInsalled_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ModSuccessfullyInsalled_C* UUI_ModSuccessfullyInsalled_C::GetDefaultObj()
{
	static class UUI_ModSuccessfullyInsalled_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ModSuccessfullyInsalled_C*>(UUI_ModSuccessfullyInsalled_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_ModSuccessfullyInsalled_C::OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23");

	Params::UUI_ModSuccessfullyInsalled_C_OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_ModSuccessfullyInsalled_C::OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23");

	Params::UUI_ModSuccessfullyInsalled_C_OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_ModSuccessfullyInsalled_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "PreConstruct");

	Params::UUI_ModSuccessfullyInsalled_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.Event Pop in animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInstallProgressMod         Mod_Info                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FInstallProgressMod UUI_ModSuccessfullyInsalled_C::Event_Pop_in_animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "Event Pop in animation");

	Params::UUI_ModSuccessfullyInsalled_C_Event_Pop_in_animation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.Event Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::Event_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "Event Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ExitAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::ExitAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ExitAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.EnterAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::EnterAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "EnterAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ResetClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::ResetClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ResetClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.RequestExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ModSuccessfullyInsalled_C::RequestExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "RequestExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ModSuccessfullyInsalled.UI_ModSuccessfullyInsalled_C.ExecuteUbergraph_UI_ModSuccessfullyInsalled
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FInstallProgressMod         K2Node_CustomEvent_Mod_Info                                      (BlueprintVisible, Parm, Transient, InstancedReference, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)

bool UUI_ModSuccessfullyInsalled_C::ExecuteUbergraph_UI_ModSuccessfullyInsalled(bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue_2, const struct FInstallProgressMod& K2Node_CustomEvent_Mod_Info, bool Temp_bool_IsClosed_Variable, bool* CallFunc_IsValid_ReturnValue_3, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ExecuteUbergraph_UI_ModSuccessfullyInsalled");

	Params::UUI_ModSuccessfullyInsalled_C_ExecuteUbergraph_UI_ModSuccessfullyInsalled_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Mod_Info = K2Node_CustomEvent_Mod_Info;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_CustomEvent_Texture_1 != nullptr)
		*K2Node_CustomEvent_Texture_1 = Parms.K2Node_CustomEvent_Texture_1;

	if (K2Node_CustomEvent_Texture != nullptr)
		*K2Node_CustomEvent_Texture = Parms.K2Node_CustomEvent_Texture;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	return Parms.ReturnValue;

}

}


