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
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_ModSuccessfullyInsalled_C::PreConstruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "PreConstruct");

	Params::UUI_ModSuccessfullyInsalled_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FInstallProgressMod         Mod_Info                                                         (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ModSuccessfullyInsalled_C::Event_Pop_in_animation(struct FInstallProgressMod* Mod_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "Event Pop in animation");

	Params::UUI_ModSuccessfullyInsalled_C_Event_Pop_in_animation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mod_Info != nullptr)
		*Mod_Info = std::move(Parms.Mod_Info);

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
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FInstallProgressMod         K2Node_CustomEvent_Mod_Info                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)

bool UUI_ModSuccessfullyInsalled_C::ExecuteUbergraph_UI_ModSuccessfullyInsalled(int32 EntryPoint, class FText* CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ModSuccessfullyInsalled_C", "ExecuteUbergraph_UI_ModSuccessfullyInsalled");

	Params::UUI_ModSuccessfullyInsalled_C_ExecuteUbergraph_UI_ModSuccessfullyInsalled_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_PlayAnimationReverse_ReturnValue != nullptr)
		*CallFunc_PlayAnimationReverse_ReturnValue = Parms.CallFunc_PlayAnimationReverse_ReturnValue;

	if (CallFunc_PlayAnimationForward_ReturnValue != nullptr)
		*CallFunc_PlayAnimationForward_ReturnValue = Parms.CallFunc_PlayAnimationForward_ReturnValue;

	return Parms.ReturnValue;

}

}


