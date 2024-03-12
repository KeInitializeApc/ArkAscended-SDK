#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ZoomImage.UI_ZoomImage_C
// (None)

class UClass* UUI_ZoomImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ZoomImage_C");

	return Clss;
}


// UI_ZoomImage_C UI_ZoomImage.Default__UI_ZoomImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ZoomImage_C* UUI_ZoomImage_C::GetDefaultObj()
{
	static class UUI_ZoomImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ZoomImage_C*>(UUI_ZoomImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ZoomImage.UI_ZoomImage_C.SequenceEvent__ENTRYPOINTUI_ZoomImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_ScreenshotImg                                                (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ZoomImage_C::SequenceEvent__ENTRYPOINTUI_ZoomImage(class UImage* IMG_ScreenshotImg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "SequenceEvent__ENTRYPOINTUI_ZoomImage");

	Params::UUI_ZoomImage_C_SequenceEvent__ENTRYPOINTUI_ZoomImage_Params Parms{};

	Parms.IMG_ScreenshotImg = IMG_ScreenshotImg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPGamepadReleased
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        TheKey                                                           (ExportObject, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UUI_ZoomImage_C::BPGamepadReleased(struct FKey* TheKey, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPGamepadReleased");

	Params::UUI_ZoomImage_C_BPGamepadReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TheKey != nullptr)
		*TheKey = std::move(Parms.TheKey);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPEscapeClosed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ZoomImage_C::BPEscapeClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPEscapeClosed");

	Params::UUI_ZoomImage_C_BPEscapeClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPHighlightWidgetOnStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ZoomImage_C::BPHighlightWidgetOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPHighlightWidgetOnStart");

	Params::UUI_ZoomImage_C_BPHighlightWidgetOnStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BPCycleHighlighted
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_ZoomImage_C::BPCycleHighlighted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BPCycleHighlighted");

	Params::UUI_ZoomImage_C_BPCycleHighlighted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.PlayFadeInOnBeginPlayAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ZoomImage_C::PlayFadeInOnBeginPlayAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "PlayFadeInOnBeginPlayAnim");

	Params::UUI_ZoomImage_C_PlayFadeInOnBeginPlayAnim_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateToCurrentImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool UUI_ZoomImage_C::UpdateToCurrentImage(class UTexture2DDynamic* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateToCurrentImage");

	Params::UUI_ZoomImage_C_UpdateToCurrentImage_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.GetScreenshotsInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UTexture2DDynamic*>   Screenshots                                                      (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class FString>              Descriptions                                                     (BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UUI_ZoomImage_C::GetScreenshotsInfo(const TArray<class FString>& Descriptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "GetScreenshotsInfo");

	Params::UUI_ZoomImage_C_GetScreenshotsInfo_Params Parms{};

	Parms.Descriptions = Descriptions;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FText UUI_ZoomImage_C::UpdateScreenshotDescription(const class FString& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateScreenshotDescription");

	Params::UUI_ZoomImage_C_UpdateScreenshotDescription_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdatePageCounter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_GetScrrenshotPaginationText_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class FText UUI_ZoomImage_C::UpdatePageCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdatePageCounter");

	Params::UUI_ZoomImage_C_UpdatePageCounter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateScreenshotImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

TArray<class FString> UUI_ZoomImage_C::UpdateScreenshotImage(bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateScreenshotImage");

	Params::UUI_ZoomImage_C_UpdateScreenshotImage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateAllScreenshotInformation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::UpdateAllScreenshotInformation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateAllScreenshotInformation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.UpdateButtonsStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture2DDynamic*>   CallFunc_GetScreenshotsInfo_Screenshots                          (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class FString>              CallFunc_GetScreenshotsInfo_Descriptions                         (BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Int32_SubOne_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)

int32 UUI_ZoomImage_C::UpdateButtonsStyle(bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "UpdateButtonsStyle");

	Params::UUI_ZoomImage_C_UpdateButtonsStyle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)

bool UUI_ZoomImage_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "OnKeyDown");

	Params::UUI_ZoomImage_C_OnKeyDown_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (InKeyEvent != nullptr)
		*InKeyEvent = std::move(Parms.InKeyEvent);

	if (CallFunc_GetKey_ReturnValue != nullptr)
		*CallFunc_GetKey_ReturnValue = std::move(Parms.CallFunc_GetKey_ReturnValue);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.Animation_SwapBetweenImages
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      IMG_ScreenshotImg                                                (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_ZoomImage_C::Animation_SwapBetweenImages(class UImage* IMG_ScreenshotImg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Animation_SwapBetweenImages");

	Params::UUI_ZoomImage_C_Animation_SwapBetweenImages_Params Parms{};

	Parms.IMG_ScreenshotImg = IMG_ScreenshotImg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.ButtonCall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
// enum class EViewState              State                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor)

void UUI_ZoomImage_C::ButtonCall(const struct FKey& Key, enum class EViewState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "ButtonCall");

	Params::UUI_ZoomImage_C_ButtonCall_Params Parms{};

	Parms.Key = Key;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BindControllerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BindControllerAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BindControllerAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.GoBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::GoBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "GoBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.PrevImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::PrevImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "PrevImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.NextImage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::NextImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "NextImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_UI_Button_Ark_Global_Back_C_0_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_ZoomImage_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "Tick");

	Params::UUI_ZoomImage_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonPrev2_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonNext_K2Node_ComponentBoundEvent_6_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonPrevMouse_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_ZoomImage_C::BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "BndEvt__UI_ZoomImage_ButtonNextMouse_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ZoomImage.UI_ZoomImage_C.ExecuteUbergraph_UI_ZoomImage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UImage*                      K2Node_CustomEvent_IMG_ScreenshotImg                             (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FKey                        K2Node_CustomEvent_Key                                           (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class EViewState              K2Node_CustomEvent_State                                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_CanGoToNextImage_ReturnValue                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CanGoToPreviousImage_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UBindButtonSystem*           CallFunc_GetEngineSubsystem_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_ZoomImage_C::ExecuteUbergraph_UI_ZoomImage(int32* EntryPoint, int32* Temp_int_Variable, class UImage* K2Node_CustomEvent_IMG_ScreenshotImg, int32 CallFunc_Subtract_IntInt_ReturnValue, int32* Temp_int_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, struct FKey* K2Node_CustomEvent_Key, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ZoomImage_C", "ExecuteUbergraph_UI_ZoomImage");

	Params::UUI_ZoomImage_C_ExecuteUbergraph_UI_ZoomImage_Params Parms{};

	Parms.K2Node_CustomEvent_IMG_ScreenshotImg = K2Node_CustomEvent_IMG_ScreenshotImg;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_CustomEvent_Key != nullptr)
		*K2Node_CustomEvent_Key = std::move(Parms.K2Node_CustomEvent_Key);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_2 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2;

	return Parms.ReturnValue;

}

}


