#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Notification.UI_Notification_C
// (None)

class UClass* UUI_Notification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Notification_C");

	return Clss;
}


// UI_Notification_C UI_Notification.Default__UI_Notification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Notification_C* UUI_Notification_C::GetDefaultObj()
{
	static class UUI_Notification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Notification_C*>(UUI_Notification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Notification.UI_Notification_C.Debug
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::Debug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "Debug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.SetSecondaryMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_Notification_C::SetSecondaryMessage(class FText* InText, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "SetSecondaryMessage");

	Params::UUI_Notification_C_SetSecondaryMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.InText;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_Notification.UI_Notification_C.SetMainMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_Notification_C::SetMainMessage(class FText* InText, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "SetMainMessage");

	Params::UUI_Notification_C_SetMainMessage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InText != nullptr)
		*InText = Parms.InText;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

}


// Function UI_Notification.UI_Notification_C.OnClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Notification_C::OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23");

	Params::UUI_Notification_C_OnFail_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_Notification.UI_Notification_C.OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Notification_C::OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23");

	Params::UUI_Notification_C_OnSuccess_E84A8D0E4FF41AB6F8FDA4A13C0CED23_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_Notification.UI_Notification_C.BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Notification_C::BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "BndEvt__ModSuccessfullyInsalledWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.CreateAndPlayAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  ForcedThumbnail                                                  (ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// class FString                      ThumbnailUrl                                                     (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FText                        MainText                                                         (ConstParm, BlueprintVisible, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class FText                        SecondaryText                                                    (Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_Notification_C::CreateAndPlayAnimation(class UTexture2DDynamic** Texture, class FString* ThumbnailUrl, class FText MainText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "CreateAndPlayAnimation");

	Params::UUI_Notification_C_CreateAndPlayAnimation_Params Parms{};

	Parms.MainText = MainText;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (ThumbnailUrl != nullptr)
		*ThumbnailUrl = std::move(Parms.ThumbnailUrl);

	return Parms.ReturnValue;

}


// Function UI_Notification.UI_Notification_C.Event Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::Event_Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "Event Init");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.ExitAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::ExitAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "ExitAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.EnterAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::EnterAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "EnterAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.ResetClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::ResetClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "ResetClick");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.RequestExit
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::RequestExit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "RequestExit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_Notification_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "PreConstruct");

	Params::UUI_Notification_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_Notification.UI_Notification_C.Download Thumbnail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ThumbnailUrl                                                     (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUI_Notification_C::Download_Thumbnail(class FString* ThumbnailUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "Download Thumbnail");

	Params::UUI_Notification_C_Download_Thumbnail_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThumbnailUrl != nullptr)
		*ThumbnailUrl = std::move(Parms.ThumbnailUrl);

}


// Function UI_Notification.UI_Notification_C.PopInAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Notification_C::PopInAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "PopInAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Notification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Notification.UI_Notification_C.ExecuteUbergraph_UI_Notification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_2                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2D*                  K2Node_CustomEvent_ForcedThumbnail                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_CustomEvent_ThumbnailURL_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        K2Node_CustomEvent_MainText                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_CustomEvent_SecondaryText                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FString                      K2Node_CustomEvent_ThumbnailURL                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UUI_Notification_C::ExecuteUbergraph_UI_Notification(class UTexture2DDynamic* K2Node_CustomEvent_Texture_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, class UUMGSequencePlayer** CallFunc_PlayAnimationForward_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, bool* CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer** CallFunc_PlayAnimationReverse_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Notification_C", "ExecuteUbergraph_UI_Notification");

	Params::UUI_Notification_C_ExecuteUbergraph_UI_Notification_Params Parms{};

	Parms.K2Node_CustomEvent_Texture_2 = K2Node_CustomEvent_Texture_2;
	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_PlayAnimationForward_ReturnValue != nullptr)
		*CallFunc_PlayAnimationForward_ReturnValue = Parms.CallFunc_PlayAnimationForward_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (CallFunc_PlayAnimationReverse_ReturnValue != nullptr)
		*CallFunc_PlayAnimationReverse_ReturnValue = Parms.CallFunc_PlayAnimationReverse_ReturnValue;

	return Parms.ReturnValue;

}

}


